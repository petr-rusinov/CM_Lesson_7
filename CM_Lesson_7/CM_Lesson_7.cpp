#include <iostream>
#include "students.pb.h"
#include <fstream>
#include "StudentGroups.h"

using namespace std;

void serialize()
{
    students::StudentGroups group;
    students::FullName fn;
    fn.set_firstname("Peter");
    fn.set_middlename("Vladimirovich");
    fn.set_lastname("Rusinov");
    students::Student* st = group.add_students();

    st->set_allocated_fullname(&fn);

    st->add_scores(5);
    st->add_scores(3);
    st->add_scores(4);
    int average = 0;
    for (int i = 0; i < st->scores_size(); ++i)
        average += st->scores(i);
    average /= st->scores_size();
    st->set_averagescore(average);


    std::cout << st->fullname().firstname() << " " << st->fullname().middlename() << " " << st->fullname().lastname() << std::endl;

    std::ofstream out("c:\\temp\\group.bin", std::ios_base::binary);

    group.SerializeToOstream(&out);

    std::cout << group.students_size() << std::endl;

    st->release_fullname();
    out.close();

}

void deserialize()
{
    students::StudentGroups gr;
    cout << "Deserialize" << endl;

    std::ifstream in("c:\\temp\\group.bin", std::ios_base::binary);
    if (gr.ParseFromIstream(&in))
    {
        std::cout << "Parsed ok" << std::endl;
        students::Student st = gr.students(0);
        std::cout << st.fullname().firstname() << " " << st.fullname().middlename() << " " << st.fullname().lastname() << std::endl;
    }

}


void task_3()
{
    StudentGroups group;
    group.setFileName("c:\\temp\\group.bin");
    group.Open();

    students::FullName fn;
    fn.set_firstname("Peter");
    fn.set_middlename("Vladimirovich");
    fn.set_lastname("Rusinov");

    int res = group.findStudent(fn);

    cout << res << endl;

    double d = group.GetAverageScore(fn);
    cout << d << endl;

    //cout << group.GetAllInfo(fn) << endl;
    cout << group.GetAllInfo() << endl;

}

int main()
{
    //serialize();
    //deserialize();
    task_3();
}
