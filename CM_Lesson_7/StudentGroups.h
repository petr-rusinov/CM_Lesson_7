#pragma once
#include <iostream>
#include <fstream>
#include "students.pb.h"

using namespace std;


class IRepository {
    virtual void Open() = 0; // бинарная десериализация в файл
    virtual void Save() = 0; // бинарная сериализация в файл
};

class IMethods {
    virtual double GetAverageScore(const students::FullName& name) = 0;
    virtual string GetAllInfo(const students::FullName& name) = 0;
    virtual string GetAllInfo() = 0;
};
class StudentGroups : public IRepository, public IMethods
{
private:
    string m_fileName;
    ifstream m_in;
    ofstream m_out;
    students::StudentGroups m_group;
public:
    void Open() override
    {
        if (!m_fileName.empty())
        {
            m_in.open(m_fileName, std::ios_base::binary);
            if (m_group.ParseFromIstream(&m_in))
            {
                students::Student st = m_group.students(0);
            }

        }
    }
    void Save() override
    {
        m_out.open(m_fileName, std::ios_base::binary);
        m_group.SerializeToOstream(&m_out);
        m_out.close();

    }
    double GetAverageScore(const students::FullName& name) override
    {
        int index = findStudent(name);
        if (index != -1)
        {
            double average = 0.0;
            for (auto score : m_group.students(index).scores())
            {
                average += (double)score;
            }
            average /= (double)m_group.students(index).scores_size();
            return average;
        }
        return -1;
    }
    string GetAllInfo(const students::FullName& name) override
    {
        int index = findStudent(name);
        if (index != -1)
        {
            string s;
            s = "Student: " + m_group.students(index).fullname().firstname() + " " +
                m_group.students(index).fullname().middlename() + " " +
                m_group.students(index).fullname().lastname() + ", ";
            s += "Scores: ";
            for (auto score : m_group.students(index).scores())
            {
                s += to_string(score) + " ";
            }
            s += "Average score: " + to_string(GetAverageScore(name));

            return s;

        }

        return string("");
    }
    string GetAllInfo() override
    {
        string s = "";

        for (auto st : m_group.students())
        {
            s += GetAllInfo(st.fullname()) + "\n";
        }

        return s;
    }

    void setFileName(string name)
    {
        m_fileName = name;
    }

    int findStudent(const students::FullName& name)
    {
        auto result = std::find_if(m_group.students().begin(), m_group.students().end(),
            [&](students::Student x) {
                return tie(name.firstname(), name.middlename(), name.lastname()) ==
                    tie(x.fullname().firstname(), x.fullname().middlename(), x.fullname().lastname()); });

        if (result != m_group.students().end())
        {
            return result - m_group.students().begin();
        }
        return -1;
    }
};
