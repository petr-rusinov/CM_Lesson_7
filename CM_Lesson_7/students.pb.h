// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: students.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_students_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_students_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017001 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_students_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_students_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[3]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_students_2eproto;
namespace students {
class FullName;
struct FullNameDefaultTypeInternal;
extern FullNameDefaultTypeInternal _FullName_default_instance_;
class Student;
struct StudentDefaultTypeInternal;
extern StudentDefaultTypeInternal _Student_default_instance_;
class StudentGroups;
struct StudentGroupsDefaultTypeInternal;
extern StudentGroupsDefaultTypeInternal _StudentGroups_default_instance_;
}  // namespace students
PROTOBUF_NAMESPACE_OPEN
template<> ::students::FullName* Arena::CreateMaybeMessage<::students::FullName>(Arena*);
template<> ::students::Student* Arena::CreateMaybeMessage<::students::Student>(Arena*);
template<> ::students::StudentGroups* Arena::CreateMaybeMessage<::students::StudentGroups>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace students {

// ===================================================================

class FullName final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:students.FullName) */ {
 public:
  inline FullName() : FullName(nullptr) {}
  ~FullName() override;
  explicit constexpr FullName(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FullName(const FullName& from);
  FullName(FullName&& from) noexcept
    : FullName() {
    *this = ::std::move(from);
  }

  inline FullName& operator=(const FullName& from) {
    CopyFrom(from);
    return *this;
  }
  inline FullName& operator=(FullName&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const FullName& default_instance() {
    return *internal_default_instance();
  }
  static inline const FullName* internal_default_instance() {
    return reinterpret_cast<const FullName*>(
               &_FullName_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(FullName& a, FullName& b) {
    a.Swap(&b);
  }
  inline void Swap(FullName* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(FullName* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline FullName* New() const final {
    return new FullName();
  }

  FullName* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<FullName>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const FullName& from);
  void MergeFrom(const FullName& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(FullName* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "students.FullName";
  }
  protected:
  explicit FullName(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFirstNameFieldNumber = 1,
    kMiddleNameFieldNumber = 2,
    kLastNameFieldNumber = 3,
  };
  // string firstName = 1;
  void clear_firstname();
  const std::string& firstname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_firstname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_firstname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_firstname();
  void set_allocated_firstname(std::string* firstname);
  private:
  const std::string& _internal_firstname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_firstname(const std::string& value);
  std::string* _internal_mutable_firstname();
  public:

  // optional string middleName = 2;
  bool has_middlename() const;
  private:
  bool _internal_has_middlename() const;
  public:
  void clear_middlename();
  const std::string& middlename() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_middlename(ArgT0&& arg0, ArgT... args);
  std::string* mutable_middlename();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_middlename();
  void set_allocated_middlename(std::string* middlename);
  private:
  const std::string& _internal_middlename() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_middlename(const std::string& value);
  std::string* _internal_mutable_middlename();
  public:

  // string lastName = 3;
  void clear_lastname();
  const std::string& lastname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_lastname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_lastname();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_lastname();
  void set_allocated_lastname(std::string* lastname);
  private:
  const std::string& _internal_lastname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_lastname(const std::string& value);
  std::string* _internal_mutable_lastname();
  public:

  // @@protoc_insertion_point(class_scope:students.FullName)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr firstname_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr middlename_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr lastname_;
  friend struct ::TableStruct_students_2eproto;
};
// -------------------------------------------------------------------

class Student final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:students.Student) */ {
 public:
  inline Student() : Student(nullptr) {}
  ~Student() override;
  explicit constexpr Student(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Student(const Student& from);
  Student(Student&& from) noexcept
    : Student() {
    *this = ::std::move(from);
  }

  inline Student& operator=(const Student& from) {
    CopyFrom(from);
    return *this;
  }
  inline Student& operator=(Student&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Student& default_instance() {
    return *internal_default_instance();
  }
  static inline const Student* internal_default_instance() {
    return reinterpret_cast<const Student*>(
               &_Student_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Student& a, Student& b) {
    a.Swap(&b);
  }
  inline void Swap(Student* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Student* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Student* New() const final {
    return new Student();
  }

  Student* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Student>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Student& from);
  void MergeFrom(const Student& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Student* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "students.Student";
  }
  protected:
  explicit Student(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScoresFieldNumber = 2,
    kFullNameFieldNumber = 1,
    kAverageScoreFieldNumber = 3,
  };
  // repeated int32 scores = 2;
  int scores_size() const;
  private:
  int _internal_scores_size() const;
  public:
  void clear_scores();
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_scores(int index) const;
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      _internal_scores() const;
  void _internal_add_scores(::PROTOBUF_NAMESPACE_ID::int32 value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      _internal_mutable_scores();
  public:
  ::PROTOBUF_NAMESPACE_ID::int32 scores(int index) const;
  void set_scores(int index, ::PROTOBUF_NAMESPACE_ID::int32 value);
  void add_scores(::PROTOBUF_NAMESPACE_ID::int32 value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
      scores() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
      mutable_scores();

  // .students.FullName fullName = 1;
  bool has_fullname() const;
  private:
  bool _internal_has_fullname() const;
  public:
  void clear_fullname();
  const ::students::FullName& fullname() const;
  PROTOBUF_FUTURE_MUST_USE_RESULT ::students::FullName* release_fullname();
  ::students::FullName* mutable_fullname();
  void set_allocated_fullname(::students::FullName* fullname);
  private:
  const ::students::FullName& _internal_fullname() const;
  ::students::FullName* _internal_mutable_fullname();
  public:
  void unsafe_arena_set_allocated_fullname(
      ::students::FullName* fullname);
  ::students::FullName* unsafe_arena_release_fullname();

  // int32 averageScore = 3;
  void clear_averagescore();
  ::PROTOBUF_NAMESPACE_ID::int32 averagescore() const;
  void set_averagescore(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_averagescore() const;
  void _internal_set_averagescore(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // @@protoc_insertion_point(class_scope:students.Student)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 > scores_;
  mutable std::atomic<int> _scores_cached_byte_size_;
  ::students::FullName* fullname_;
  ::PROTOBUF_NAMESPACE_ID::int32 averagescore_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_students_2eproto;
};
// -------------------------------------------------------------------

class StudentGroups final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:students.StudentGroups) */ {
 public:
  inline StudentGroups() : StudentGroups(nullptr) {}
  ~StudentGroups() override;
  explicit constexpr StudentGroups(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  StudentGroups(const StudentGroups& from);
  StudentGroups(StudentGroups&& from) noexcept
    : StudentGroups() {
    *this = ::std::move(from);
  }

  inline StudentGroups& operator=(const StudentGroups& from) {
    CopyFrom(from);
    return *this;
  }
  inline StudentGroups& operator=(StudentGroups&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const StudentGroups& default_instance() {
    return *internal_default_instance();
  }
  static inline const StudentGroups* internal_default_instance() {
    return reinterpret_cast<const StudentGroups*>(
               &_StudentGroups_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(StudentGroups& a, StudentGroups& b) {
    a.Swap(&b);
  }
  inline void Swap(StudentGroups* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(StudentGroups* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline StudentGroups* New() const final {
    return new StudentGroups();
  }

  StudentGroups* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<StudentGroups>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const StudentGroups& from);
  void MergeFrom(const StudentGroups& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(StudentGroups* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "students.StudentGroups";
  }
  protected:
  explicit StudentGroups(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStudentsFieldNumber = 1,
  };
  // repeated .students.Student students = 1;
  int students_size() const;
  private:
  int _internal_students_size() const;
  public:
  void clear_students();
  ::students::Student* mutable_students(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::students::Student >*
      mutable_students();
  private:
  const ::students::Student& _internal_students(int index) const;
  ::students::Student* _internal_add_students();
  public:
  const ::students::Student& students(int index) const;
  ::students::Student* add_students();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::students::Student >&
      students() const;

  // @@protoc_insertion_point(class_scope:students.StudentGroups)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::students::Student > students_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_students_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// FullName

// string firstName = 1;
inline void FullName::clear_firstname() {
  firstname_.ClearToEmpty();
}
inline const std::string& FullName::firstname() const {
  // @@protoc_insertion_point(field_get:students.FullName.firstName)
  return _internal_firstname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_firstname(ArgT0&& arg0, ArgT... args) {
 
 firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:students.FullName.firstName)
}
inline std::string* FullName::mutable_firstname() {
  // @@protoc_insertion_point(field_mutable:students.FullName.firstName)
  return _internal_mutable_firstname();
}
inline const std::string& FullName::_internal_firstname() const {
  return firstname_.Get();
}
inline void FullName::_internal_set_firstname(const std::string& value) {
  
  firstname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_firstname() {
  
  return firstname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_firstname() {
  // @@protoc_insertion_point(field_release:students.FullName.firstName)
  return firstname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_firstname(std::string* firstname) {
  if (firstname != nullptr) {
    
  } else {
    
  }
  firstname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), firstname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:students.FullName.firstName)
}

// optional string middleName = 2;
inline bool FullName::_internal_has_middlename() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FullName::has_middlename() const {
  return _internal_has_middlename();
}
inline void FullName::clear_middlename() {
  middlename_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FullName::middlename() const {
  // @@protoc_insertion_point(field_get:students.FullName.middleName)
  return _internal_middlename();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_middlename(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 middlename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:students.FullName.middleName)
}
inline std::string* FullName::mutable_middlename() {
  // @@protoc_insertion_point(field_mutable:students.FullName.middleName)
  return _internal_mutable_middlename();
}
inline const std::string& FullName::_internal_middlename() const {
  return middlename_.Get();
}
inline void FullName::_internal_set_middlename(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  middlename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_middlename() {
  _has_bits_[0] |= 0x00000001u;
  return middlename_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_middlename() {
  // @@protoc_insertion_point(field_release:students.FullName.middleName)
  if (!_internal_has_middlename()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return middlename_.ReleaseNonDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_middlename(std::string* middlename) {
  if (middlename != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  middlename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), middlename,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:students.FullName.middleName)
}

// string lastName = 3;
inline void FullName::clear_lastname() {
  lastname_.ClearToEmpty();
}
inline const std::string& FullName::lastname() const {
  // @@protoc_insertion_point(field_get:students.FullName.lastName)
  return _internal_lastname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FullName::set_lastname(ArgT0&& arg0, ArgT... args) {
 
 lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:students.FullName.lastName)
}
inline std::string* FullName::mutable_lastname() {
  // @@protoc_insertion_point(field_mutable:students.FullName.lastName)
  return _internal_mutable_lastname();
}
inline const std::string& FullName::_internal_lastname() const {
  return lastname_.Get();
}
inline void FullName::_internal_set_lastname(const std::string& value) {
  
  lastname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* FullName::_internal_mutable_lastname() {
  
  return lastname_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* FullName::release_lastname() {
  // @@protoc_insertion_point(field_release:students.FullName.lastName)
  return lastname_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void FullName::set_allocated_lastname(std::string* lastname) {
  if (lastname != nullptr) {
    
  } else {
    
  }
  lastname_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), lastname,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:students.FullName.lastName)
}

// -------------------------------------------------------------------

// Student

// .students.FullName fullName = 1;
inline bool Student::_internal_has_fullname() const {
  return this != internal_default_instance() && fullname_ != nullptr;
}
inline bool Student::has_fullname() const {
  return _internal_has_fullname();
}
inline void Student::clear_fullname() {
  if (GetArenaForAllocation() == nullptr && fullname_ != nullptr) {
    delete fullname_;
  }
  fullname_ = nullptr;
}
inline const ::students::FullName& Student::_internal_fullname() const {
  const ::students::FullName* p = fullname_;
  return p != nullptr ? *p : reinterpret_cast<const ::students::FullName&>(
      ::students::_FullName_default_instance_);
}
inline const ::students::FullName& Student::fullname() const {
  // @@protoc_insertion_point(field_get:students.Student.fullName)
  return _internal_fullname();
}
inline void Student::unsafe_arena_set_allocated_fullname(
    ::students::FullName* fullname) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(fullname_);
  }
  fullname_ = fullname;
  if (fullname) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:students.Student.fullName)
}
inline ::students::FullName* Student::release_fullname() {
  
  ::students::FullName* temp = fullname_;
  fullname_ = nullptr;
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
  return temp;
}
inline ::students::FullName* Student::unsafe_arena_release_fullname() {
  // @@protoc_insertion_point(field_release:students.Student.fullName)
  
  ::students::FullName* temp = fullname_;
  fullname_ = nullptr;
  return temp;
}
inline ::students::FullName* Student::_internal_mutable_fullname() {
  
  if (fullname_ == nullptr) {
    auto* p = CreateMaybeMessage<::students::FullName>(GetArenaForAllocation());
    fullname_ = p;
  }
  return fullname_;
}
inline ::students::FullName* Student::mutable_fullname() {
  // @@protoc_insertion_point(field_mutable:students.Student.fullName)
  return _internal_mutable_fullname();
}
inline void Student::set_allocated_fullname(::students::FullName* fullname) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete fullname_;
  }
  if (fullname) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper<::students::FullName>::GetOwningArena(fullname);
    if (message_arena != submessage_arena) {
      fullname = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fullname, submessage_arena);
    }
    
  } else {
    
  }
  fullname_ = fullname;
  // @@protoc_insertion_point(field_set_allocated:students.Student.fullName)
}

// repeated int32 scores = 2;
inline int Student::_internal_scores_size() const {
  return scores_.size();
}
inline int Student::scores_size() const {
  return _internal_scores_size();
}
inline void Student::clear_scores() {
  scores_.Clear();
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_scores(int index) const {
  return scores_.Get(index);
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::scores(int index) const {
  // @@protoc_insertion_point(field_get:students.Student.scores)
  return _internal_scores(index);
}
inline void Student::set_scores(int index, ::PROTOBUF_NAMESPACE_ID::int32 value) {
  scores_.Set(index, value);
  // @@protoc_insertion_point(field_set:students.Student.scores)
}
inline void Student::_internal_add_scores(::PROTOBUF_NAMESPACE_ID::int32 value) {
  scores_.Add(value);
}
inline void Student::add_scores(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_add_scores(value);
  // @@protoc_insertion_point(field_add:students.Student.scores)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::_internal_scores() const {
  return scores_;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >&
Student::scores() const {
  // @@protoc_insertion_point(field_list:students.Student.scores)
  return _internal_scores();
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::_internal_mutable_scores() {
  return &scores_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField< ::PROTOBUF_NAMESPACE_ID::int32 >*
Student::mutable_scores() {
  // @@protoc_insertion_point(field_mutable_list:students.Student.scores)
  return _internal_mutable_scores();
}

// int32 averageScore = 3;
inline void Student::clear_averagescore() {
  averagescore_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::_internal_averagescore() const {
  return averagescore_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 Student::averagescore() const {
  // @@protoc_insertion_point(field_get:students.Student.averageScore)
  return _internal_averagescore();
}
inline void Student::_internal_set_averagescore(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  averagescore_ = value;
}
inline void Student::set_averagescore(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_averagescore(value);
  // @@protoc_insertion_point(field_set:students.Student.averageScore)
}

// -------------------------------------------------------------------

// StudentGroups

// repeated .students.Student students = 1;
inline int StudentGroups::_internal_students_size() const {
  return students_.size();
}
inline int StudentGroups::students_size() const {
  return _internal_students_size();
}
inline void StudentGroups::clear_students() {
  students_.Clear();
}
inline ::students::Student* StudentGroups::mutable_students(int index) {
  // @@protoc_insertion_point(field_mutable:students.StudentGroups.students)
  return students_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::students::Student >*
StudentGroups::mutable_students() {
  // @@protoc_insertion_point(field_mutable_list:students.StudentGroups.students)
  return &students_;
}
inline const ::students::Student& StudentGroups::_internal_students(int index) const {
  return students_.Get(index);
}
inline const ::students::Student& StudentGroups::students(int index) const {
  // @@protoc_insertion_point(field_get:students.StudentGroups.students)
  return _internal_students(index);
}
inline ::students::Student* StudentGroups::_internal_add_students() {
  return students_.Add();
}
inline ::students::Student* StudentGroups::add_students() {
  // @@protoc_insertion_point(field_add:students.StudentGroups.students)
  return _internal_add_students();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::students::Student >&
StudentGroups::students() const {
  // @@protoc_insertion_point(field_list:students.StudentGroups.students)
  return students_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace students

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_students_2eproto
