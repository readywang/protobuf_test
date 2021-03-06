// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Person.proto

#ifndef PROTOBUF_INCLUDED_Person_2eproto
#define PROTOBUF_INCLUDED_Person_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_Person_2eproto 

namespace protobuf_Person_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_Person_2eproto
namespace HUST_Person {
class Person;
class PersonDefaultTypeInternal;
extern PersonDefaultTypeInternal _Person_default_instance_;
class Person_Home;
class Person_HomeDefaultTypeInternal;
extern Person_HomeDefaultTypeInternal _Person_Home_default_instance_;
}  // namespace HUST_Person
namespace google {
namespace protobuf {
template<> ::HUST_Person::Person* Arena::CreateMaybeMessage<::HUST_Person::Person>(Arena*);
template<> ::HUST_Person::Person_Home* Arena::CreateMaybeMessage<::HUST_Person::Person_Home>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace HUST_Person {

enum Person_Gender {
  Person_Gender_BOY = 0,
  Person_Gender_GIRL = 1
};
bool Person_Gender_IsValid(int value);
const Person_Gender Person_Gender_Gender_MIN = Person_Gender_BOY;
const Person_Gender Person_Gender_Gender_MAX = Person_Gender_GIRL;
const int Person_Gender_Gender_ARRAYSIZE = Person_Gender_Gender_MAX + 1;

const ::google::protobuf::EnumDescriptor* Person_Gender_descriptor();
inline const ::std::string& Person_Gender_Name(Person_Gender value) {
  return ::google::protobuf::internal::NameOfEnum(
    Person_Gender_descriptor(), value);
}
inline bool Person_Gender_Parse(
    const ::std::string& name, Person_Gender* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Person_Gender>(
    Person_Gender_descriptor(), name, value);
}
// ===================================================================

class Person_Home : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HUST_Person.Person.Home) */ {
 public:
  Person_Home();
  virtual ~Person_Home();

  Person_Home(const Person_Home& from);

  inline Person_Home& operator=(const Person_Home& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Person_Home(Person_Home&& from) noexcept
    : Person_Home() {
    *this = ::std::move(from);
  }

  inline Person_Home& operator=(Person_Home&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person_Home& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Person_Home* internal_default_instance() {
    return reinterpret_cast<const Person_Home*>(
               &_Person_Home_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Person_Home* other);
  friend void swap(Person_Home& a, Person_Home& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Person_Home* New() const final {
    return CreateMaybeMessage<Person_Home>(NULL);
  }

  Person_Home* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Person_Home>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Person_Home& from);
  void MergeFrom(const Person_Home& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Person_Home* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string country = 1;
  bool has_country() const;
  void clear_country();
  static const int kCountryFieldNumber = 1;
  const ::std::string& country() const;
  void set_country(const ::std::string& value);
  #if LANG_CXX11
  void set_country(::std::string&& value);
  #endif
  void set_country(const char* value);
  void set_country(const char* value, size_t size);
  ::std::string* mutable_country();
  ::std::string* release_country();
  void set_allocated_country(::std::string* country);

  // required string province = 2;
  bool has_province() const;
  void clear_province();
  static const int kProvinceFieldNumber = 2;
  const ::std::string& province() const;
  void set_province(const ::std::string& value);
  #if LANG_CXX11
  void set_province(::std::string&& value);
  #endif
  void set_province(const char* value);
  void set_province(const char* value, size_t size);
  ::std::string* mutable_province();
  ::std::string* release_province();
  void set_allocated_province(::std::string* province);

  // required string county = 3;
  bool has_county() const;
  void clear_county();
  static const int kCountyFieldNumber = 3;
  const ::std::string& county() const;
  void set_county(const ::std::string& value);
  #if LANG_CXX11
  void set_county(::std::string&& value);
  #endif
  void set_county(const char* value);
  void set_county(const char* value, size_t size);
  ::std::string* mutable_county();
  ::std::string* release_county();
  void set_allocated_county(::std::string* county);

  // required string addr = 4;
  bool has_addr() const;
  void clear_addr();
  static const int kAddrFieldNumber = 4;
  const ::std::string& addr() const;
  void set_addr(const ::std::string& value);
  #if LANG_CXX11
  void set_addr(::std::string&& value);
  #endif
  void set_addr(const char* value);
  void set_addr(const char* value, size_t size);
  ::std::string* mutable_addr();
  ::std::string* release_addr();
  void set_allocated_addr(::std::string* addr);

  // @@protoc_insertion_point(class_scope:HUST_Person.Person.Home)
 private:
  void set_has_country();
  void clear_has_country();
  void set_has_province();
  void clear_has_province();
  void set_has_county();
  void clear_has_county();
  void set_has_addr();
  void clear_has_addr();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr country_;
  ::google::protobuf::internal::ArenaStringPtr province_;
  ::google::protobuf::internal::ArenaStringPtr county_;
  ::google::protobuf::internal::ArenaStringPtr addr_;
  friend struct ::protobuf_Person_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class Person : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:HUST_Person.Person) */ {
 public:
  Person();
  virtual ~Person();

  Person(const Person& from);

  inline Person& operator=(const Person& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Person(Person&& from) noexcept
    : Person() {
    *this = ::std::move(from);
  }

  inline Person& operator=(Person&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Person& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Person* internal_default_instance() {
    return reinterpret_cast<const Person*>(
               &_Person_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Person* other);
  friend void swap(Person& a, Person& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Person* New() const final {
    return CreateMaybeMessage<Person>(NULL);
  }

  Person* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Person>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Person& from);
  void MergeFrom(const Person& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Person* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Person_Home Home;

  typedef Person_Gender Gender;
  static const Gender BOY =
    Person_Gender_BOY;
  static const Gender GIRL =
    Person_Gender_GIRL;
  static inline bool Gender_IsValid(int value) {
    return Person_Gender_IsValid(value);
  }
  static const Gender Gender_MIN =
    Person_Gender_Gender_MIN;
  static const Gender Gender_MAX =
    Person_Gender_Gender_MAX;
  static const int Gender_ARRAYSIZE =
    Person_Gender_Gender_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  Gender_descriptor() {
    return Person_Gender_descriptor();
  }
  static inline const ::std::string& Gender_Name(Gender value) {
    return Person_Gender_Name(value);
  }
  static inline bool Gender_Parse(const ::std::string& name,
      Gender* value) {
    return Person_Gender_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated string phone = 6;
  int phone_size() const;
  void clear_phone();
  static const int kPhoneFieldNumber = 6;
  const ::std::string& phone(int index) const;
  ::std::string* mutable_phone(int index);
  void set_phone(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_phone(int index, ::std::string&& value);
  #endif
  void set_phone(int index, const char* value);
  void set_phone(int index, const char* value, size_t size);
  ::std::string* add_phone();
  void add_phone(const ::std::string& value);
  #if LANG_CXX11
  void add_phone(::std::string&& value);
  #endif
  void add_phone(const char* value);
  void add_phone(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& phone() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_phone();

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required string ID = 4;
  bool has_id() const;
  void clear_id();
  static const int kIDFieldNumber = 4;
  const ::std::string& id() const;
  void set_id(const ::std::string& value);
  #if LANG_CXX11
  void set_id(::std::string&& value);
  #endif
  void set_id(const char* value);
  void set_id(const char* value, size_t size);
  ::std::string* mutable_id();
  ::std::string* release_id();
  void set_allocated_id(::std::string* id);

  // optional .HUST_Person.Person.Home home = 5;
  bool has_home() const;
  void clear_home();
  static const int kHomeFieldNumber = 5;
  private:
  const ::HUST_Person::Person_Home& _internal_home() const;
  public:
  const ::HUST_Person::Person_Home& home() const;
  ::HUST_Person::Person_Home* release_home();
  ::HUST_Person::Person_Home* mutable_home();
  void set_allocated_home(::HUST_Person::Person_Home* home);

  // required .HUST_Person.Person.Gender gender = 2;
  bool has_gender() const;
  void clear_gender();
  static const int kGenderFieldNumber = 2;
  ::HUST_Person::Person_Gender gender() const;
  void set_gender(::HUST_Person::Person_Gender value);

  // required int32 age = 3;
  bool has_age() const;
  void clear_age();
  static const int kAgeFieldNumber = 3;
  ::google::protobuf::int32 age() const;
  void set_age(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:HUST_Person.Person)
 private:
  void set_has_name();
  void clear_has_name();
  void set_has_gender();
  void clear_has_gender();
  void set_has_age();
  void clear_has_age();
  void set_has_id();
  void clear_has_id();
  void set_has_home();
  void clear_has_home();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> phone_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::internal::ArenaStringPtr id_;
  ::HUST_Person::Person_Home* home_;
  int gender_;
  ::google::protobuf::int32 age_;
  friend struct ::protobuf_Person_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Person_Home

// required string country = 1;
inline bool Person_Home::has_country() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person_Home::set_has_country() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person_Home::clear_has_country() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person_Home::clear_country() {
  country_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_country();
}
inline const ::std::string& Person_Home::country() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.Home.country)
  return country_.GetNoArena();
}
inline void Person_Home::set_country(const ::std::string& value) {
  set_has_country();
  country_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:HUST_Person.Person.Home.country)
}
#if LANG_CXX11
inline void Person_Home::set_country(::std::string&& value) {
  set_has_country();
  country_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:HUST_Person.Person.Home.country)
}
#endif
inline void Person_Home::set_country(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_country();
  country_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.Home.country)
}
inline void Person_Home::set_country(const char* value, size_t size) {
  set_has_country();
  country_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.Home.country)
}
inline ::std::string* Person_Home::mutable_country() {
  set_has_country();
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.Home.country)
  return country_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_Home::release_country() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.Home.country)
  if (!has_country()) {
    return NULL;
  }
  clear_has_country();
  return country_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_Home::set_allocated_country(::std::string* country) {
  if (country != NULL) {
    set_has_country();
  } else {
    clear_has_country();
  }
  country_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), country);
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.Home.country)
}

// required string province = 2;
inline bool Person_Home::has_province() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person_Home::set_has_province() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person_Home::clear_has_province() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person_Home::clear_province() {
  province_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_province();
}
inline const ::std::string& Person_Home::province() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.Home.province)
  return province_.GetNoArena();
}
inline void Person_Home::set_province(const ::std::string& value) {
  set_has_province();
  province_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:HUST_Person.Person.Home.province)
}
#if LANG_CXX11
inline void Person_Home::set_province(::std::string&& value) {
  set_has_province();
  province_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:HUST_Person.Person.Home.province)
}
#endif
inline void Person_Home::set_province(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_province();
  province_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.Home.province)
}
inline void Person_Home::set_province(const char* value, size_t size) {
  set_has_province();
  province_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.Home.province)
}
inline ::std::string* Person_Home::mutable_province() {
  set_has_province();
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.Home.province)
  return province_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_Home::release_province() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.Home.province)
  if (!has_province()) {
    return NULL;
  }
  clear_has_province();
  return province_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_Home::set_allocated_province(::std::string* province) {
  if (province != NULL) {
    set_has_province();
  } else {
    clear_has_province();
  }
  province_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), province);
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.Home.province)
}

// required string county = 3;
inline bool Person_Home::has_county() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person_Home::set_has_county() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person_Home::clear_has_county() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person_Home::clear_county() {
  county_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_county();
}
inline const ::std::string& Person_Home::county() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.Home.county)
  return county_.GetNoArena();
}
inline void Person_Home::set_county(const ::std::string& value) {
  set_has_county();
  county_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:HUST_Person.Person.Home.county)
}
#if LANG_CXX11
inline void Person_Home::set_county(::std::string&& value) {
  set_has_county();
  county_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:HUST_Person.Person.Home.county)
}
#endif
inline void Person_Home::set_county(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_county();
  county_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.Home.county)
}
inline void Person_Home::set_county(const char* value, size_t size) {
  set_has_county();
  county_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.Home.county)
}
inline ::std::string* Person_Home::mutable_county() {
  set_has_county();
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.Home.county)
  return county_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_Home::release_county() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.Home.county)
  if (!has_county()) {
    return NULL;
  }
  clear_has_county();
  return county_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_Home::set_allocated_county(::std::string* county) {
  if (county != NULL) {
    set_has_county();
  } else {
    clear_has_county();
  }
  county_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), county);
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.Home.county)
}

// required string addr = 4;
inline bool Person_Home::has_addr() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Person_Home::set_has_addr() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Person_Home::clear_has_addr() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Person_Home::clear_addr() {
  addr_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_addr();
}
inline const ::std::string& Person_Home::addr() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.Home.addr)
  return addr_.GetNoArena();
}
inline void Person_Home::set_addr(const ::std::string& value) {
  set_has_addr();
  addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:HUST_Person.Person.Home.addr)
}
#if LANG_CXX11
inline void Person_Home::set_addr(::std::string&& value) {
  set_has_addr();
  addr_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:HUST_Person.Person.Home.addr)
}
#endif
inline void Person_Home::set_addr(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_addr();
  addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.Home.addr)
}
inline void Person_Home::set_addr(const char* value, size_t size) {
  set_has_addr();
  addr_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.Home.addr)
}
inline ::std::string* Person_Home::mutable_addr() {
  set_has_addr();
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.Home.addr)
  return addr_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person_Home::release_addr() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.Home.addr)
  if (!has_addr()) {
    return NULL;
  }
  clear_has_addr();
  return addr_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person_Home::set_allocated_addr(::std::string* addr) {
  if (addr != NULL) {
    set_has_addr();
  } else {
    clear_has_addr();
  }
  addr_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), addr);
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.Home.addr)
}

// -------------------------------------------------------------------

// Person

// required string name = 1;
inline bool Person::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Person::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Person::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Person::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_name();
}
inline const ::std::string& Person::name() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.name)
  return name_.GetNoArena();
}
inline void Person::set_name(const ::std::string& value) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:HUST_Person.Person.name)
}
#if LANG_CXX11
inline void Person::set_name(::std::string&& value) {
  set_has_name();
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:HUST_Person.Person.name)
}
#endif
inline void Person::set_name(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.name)
}
inline void Person::set_name(const char* value, size_t size) {
  set_has_name();
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.name)
}
inline ::std::string* Person::mutable_name() {
  set_has_name();
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_name() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.name)
  if (!has_name()) {
    return NULL;
  }
  clear_has_name();
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_name(::std::string* name) {
  if (name != NULL) {
    set_has_name();
  } else {
    clear_has_name();
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.name)
}

// required .HUST_Person.Person.Gender gender = 2;
inline bool Person::has_gender() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void Person::set_has_gender() {
  _has_bits_[0] |= 0x00000008u;
}
inline void Person::clear_has_gender() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void Person::clear_gender() {
  gender_ = 0;
  clear_has_gender();
}
inline ::HUST_Person::Person_Gender Person::gender() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.gender)
  return static_cast< ::HUST_Person::Person_Gender >(gender_);
}
inline void Person::set_gender(::HUST_Person::Person_Gender value) {
  assert(::HUST_Person::Person_Gender_IsValid(value));
  set_has_gender();
  gender_ = value;
  // @@protoc_insertion_point(field_set:HUST_Person.Person.gender)
}

// required int32 age = 3;
inline bool Person::has_age() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void Person::set_has_age() {
  _has_bits_[0] |= 0x00000010u;
}
inline void Person::clear_has_age() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void Person::clear_age() {
  age_ = 0;
  clear_has_age();
}
inline ::google::protobuf::int32 Person::age() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.age)
  return age_;
}
inline void Person::set_age(::google::protobuf::int32 value) {
  set_has_age();
  age_ = value;
  // @@protoc_insertion_point(field_set:HUST_Person.Person.age)
}

// required string ID = 4;
inline bool Person::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Person::set_has_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Person::clear_has_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Person::clear_id() {
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_id();
}
inline const ::std::string& Person::id() const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.ID)
  return id_.GetNoArena();
}
inline void Person::set_id(const ::std::string& value) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:HUST_Person.Person.ID)
}
#if LANG_CXX11
inline void Person::set_id(::std::string&& value) {
  set_has_id();
  id_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:HUST_Person.Person.ID)
}
#endif
inline void Person::set_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.ID)
}
inline void Person::set_id(const char* value, size_t size) {
  set_has_id();
  id_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.ID)
}
inline ::std::string* Person::mutable_id() {
  set_has_id();
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.ID)
  return id_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Person::release_id() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.ID)
  if (!has_id()) {
    return NULL;
  }
  clear_has_id();
  return id_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Person::set_allocated_id(::std::string* id) {
  if (id != NULL) {
    set_has_id();
  } else {
    clear_has_id();
  }
  id_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), id);
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.ID)
}

// optional .HUST_Person.Person.Home home = 5;
inline bool Person::has_home() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Person::set_has_home() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Person::clear_has_home() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Person::clear_home() {
  if (home_ != NULL) home_->Clear();
  clear_has_home();
}
inline const ::HUST_Person::Person_Home& Person::_internal_home() const {
  return *home_;
}
inline const ::HUST_Person::Person_Home& Person::home() const {
  const ::HUST_Person::Person_Home* p = home_;
  // @@protoc_insertion_point(field_get:HUST_Person.Person.home)
  return p != NULL ? *p : *reinterpret_cast<const ::HUST_Person::Person_Home*>(
      &::HUST_Person::_Person_Home_default_instance_);
}
inline ::HUST_Person::Person_Home* Person::release_home() {
  // @@protoc_insertion_point(field_release:HUST_Person.Person.home)
  clear_has_home();
  ::HUST_Person::Person_Home* temp = home_;
  home_ = NULL;
  return temp;
}
inline ::HUST_Person::Person_Home* Person::mutable_home() {
  set_has_home();
  if (home_ == NULL) {
    auto* p = CreateMaybeMessage<::HUST_Person::Person_Home>(GetArenaNoVirtual());
    home_ = p;
  }
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.home)
  return home_;
}
inline void Person::set_allocated_home(::HUST_Person::Person_Home* home) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == NULL) {
    delete home_;
  }
  if (home) {
    ::google::protobuf::Arena* submessage_arena = NULL;
    if (message_arena != submessage_arena) {
      home = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, home, submessage_arena);
    }
    set_has_home();
  } else {
    clear_has_home();
  }
  home_ = home;
  // @@protoc_insertion_point(field_set_allocated:HUST_Person.Person.home)
}

// repeated string phone = 6;
inline int Person::phone_size() const {
  return phone_.size();
}
inline void Person::clear_phone() {
  phone_.Clear();
}
inline const ::std::string& Person::phone(int index) const {
  // @@protoc_insertion_point(field_get:HUST_Person.Person.phone)
  return phone_.Get(index);
}
inline ::std::string* Person::mutable_phone(int index) {
  // @@protoc_insertion_point(field_mutable:HUST_Person.Person.phone)
  return phone_.Mutable(index);
}
inline void Person::set_phone(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:HUST_Person.Person.phone)
  phone_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void Person::set_phone(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:HUST_Person.Person.phone)
  phone_.Mutable(index)->assign(std::move(value));
}
#endif
inline void Person::set_phone(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  phone_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:HUST_Person.Person.phone)
}
inline void Person::set_phone(int index, const char* value, size_t size) {
  phone_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:HUST_Person.Person.phone)
}
inline ::std::string* Person::add_phone() {
  // @@protoc_insertion_point(field_add_mutable:HUST_Person.Person.phone)
  return phone_.Add();
}
inline void Person::add_phone(const ::std::string& value) {
  phone_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:HUST_Person.Person.phone)
}
#if LANG_CXX11
inline void Person::add_phone(::std::string&& value) {
  phone_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:HUST_Person.Person.phone)
}
#endif
inline void Person::add_phone(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  phone_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:HUST_Person.Person.phone)
}
inline void Person::add_phone(const char* value, size_t size) {
  phone_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:HUST_Person.Person.phone)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
Person::phone() const {
  // @@protoc_insertion_point(field_list:HUST_Person.Person.phone)
  return phone_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
Person::mutable_phone() {
  // @@protoc_insertion_point(field_mutable_list:HUST_Person.Person.phone)
  return &phone_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace HUST_Person

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::HUST_Person::Person_Gender> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::HUST_Person::Person_Gender>() {
  return ::HUST_Person::Person_Gender_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_Person_2eproto
