// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: core_configuration.proto

#ifndef PROTOBUF_INCLUDED_core_5fconfiguration_2eproto
#define PROTOBUF_INCLUDED_core_5fconfiguration_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_core_5fconfiguration_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_core_5fconfiguration_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_core_5fconfiguration_2eproto();
namespace ledger {
namespace core {
namespace message {
class DatabaseConfiguration;
class DatabaseConfigurationDefaultTypeInternal;
extern DatabaseConfigurationDefaultTypeInternal _DatabaseConfiguration_default_instance_;
class LibCoreConfigution;
class LibCoreConfigutionDefaultTypeInternal;
extern LibCoreConfigutionDefaultTypeInternal _LibCoreConfigution_default_instance_;
}  // namespace message
}  // namespace core
}  // namespace ledger
namespace google {
namespace protobuf {
template<> ::ledger::core::message::DatabaseConfiguration* Arena::CreateMaybeMessage<::ledger::core::message::DatabaseConfiguration>(Arena*);
template<> ::ledger::core::message::LibCoreConfigution* Arena::CreateMaybeMessage<::ledger::core::message::LibCoreConfigution>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace ledger {
namespace core {
namespace message {

// ===================================================================

class DatabaseConfiguration :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.message.DatabaseConfiguration) */ {
 public:
  DatabaseConfiguration();
  virtual ~DatabaseConfiguration();

  DatabaseConfiguration(const DatabaseConfiguration& from);

  inline DatabaseConfiguration& operator=(const DatabaseConfiguration& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  DatabaseConfiguration(DatabaseConfiguration&& from) noexcept
    : DatabaseConfiguration() {
    *this = ::std::move(from);
  }

  inline DatabaseConfiguration& operator=(DatabaseConfiguration&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const DatabaseConfiguration& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const DatabaseConfiguration* internal_default_instance() {
    return reinterpret_cast<const DatabaseConfiguration*>(
               &_DatabaseConfiguration_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(DatabaseConfiguration* other);
  friend void swap(DatabaseConfiguration& a, DatabaseConfiguration& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline DatabaseConfiguration* New() const final {
    return CreateMaybeMessage<DatabaseConfiguration>(nullptr);
  }

  DatabaseConfiguration* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<DatabaseConfiguration>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const DatabaseConfiguration& from);
  void MergeFrom(const DatabaseConfiguration& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DatabaseConfiguration* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string db_name = 1;
  void clear_db_name();
  static const int kDbNameFieldNumber = 1;
  const ::std::string& db_name() const;
  void set_db_name(const ::std::string& value);
  #if LANG_CXX11
  void set_db_name(::std::string&& value);
  #endif
  void set_db_name(const char* value);
  void set_db_name(const char* value, size_t size);
  ::std::string* mutable_db_name();
  ::std::string* release_db_name();
  void set_allocated_db_name(::std::string* db_name);

  // string user_name = 2;
  void clear_user_name();
  static const int kUserNameFieldNumber = 2;
  const ::std::string& user_name() const;
  void set_user_name(const ::std::string& value);
  #if LANG_CXX11
  void set_user_name(::std::string&& value);
  #endif
  void set_user_name(const char* value);
  void set_user_name(const char* value, size_t size);
  ::std::string* mutable_user_name();
  ::std::string* release_user_name();
  void set_allocated_user_name(::std::string* user_name);

  // string password = 3;
  void clear_password();
  static const int kPasswordFieldNumber = 3;
  const ::std::string& password() const;
  void set_password(const ::std::string& value);
  #if LANG_CXX11
  void set_password(::std::string&& value);
  #endif
  void set_password(const char* value);
  void set_password(const char* value, size_t size);
  ::std::string* mutable_password();
  ::std::string* release_password();
  void set_allocated_password(::std::string* password);

  // @@protoc_insertion_point(class_scope:ledger.core.message.DatabaseConfiguration)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr db_name_;
  ::google::protobuf::internal::ArenaStringPtr user_name_;
  ::google::protobuf::internal::ArenaStringPtr password_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_core_5fconfiguration_2eproto;
};
// -------------------------------------------------------------------

class LibCoreConfigution :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ledger.core.message.LibCoreConfigution) */ {
 public:
  LibCoreConfigution();
  virtual ~LibCoreConfigution();

  LibCoreConfigution(const LibCoreConfigution& from);

  inline LibCoreConfigution& operator=(const LibCoreConfigution& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  LibCoreConfigution(LibCoreConfigution&& from) noexcept
    : LibCoreConfigution() {
    *this = ::std::move(from);
  }

  inline LibCoreConfigution& operator=(LibCoreConfigution&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const LibCoreConfigution& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const LibCoreConfigution* internal_default_instance() {
    return reinterpret_cast<const LibCoreConfigution*>(
               &_LibCoreConfigution_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(LibCoreConfigution* other);
  friend void swap(LibCoreConfigution& a, LibCoreConfigution& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline LibCoreConfigution* New() const final {
    return CreateMaybeMessage<LibCoreConfigution>(nullptr);
  }

  LibCoreConfigution* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<LibCoreConfigution>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const LibCoreConfigution& from);
  void MergeFrom(const LibCoreConfigution& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(LibCoreConfigution* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string working_dir = 1;
  void clear_working_dir();
  static const int kWorkingDirFieldNumber = 1;
  const ::std::string& working_dir() const;
  void set_working_dir(const ::std::string& value);
  #if LANG_CXX11
  void set_working_dir(::std::string&& value);
  #endif
  void set_working_dir(const char* value);
  void set_working_dir(const char* value, size_t size);
  ::std::string* mutable_working_dir();
  ::std::string* release_working_dir();
  void set_allocated_working_dir(::std::string* working_dir);

  // .ledger.core.message.DatabaseConfiguration database_config = 2;
  bool has_database_config() const;
  void clear_database_config();
  static const int kDatabaseConfigFieldNumber = 2;
  const ::ledger::core::message::DatabaseConfiguration& database_config() const;
  ::ledger::core::message::DatabaseConfiguration* release_database_config();
  ::ledger::core::message::DatabaseConfiguration* mutable_database_config();
  void set_allocated_database_config(::ledger::core::message::DatabaseConfiguration* database_config);

  // bool enable_internal_logging = 3;
  void clear_enable_internal_logging();
  static const int kEnableInternalLoggingFieldNumber = 3;
  bool enable_internal_logging() const;
  void set_enable_internal_logging(bool value);

  // @@protoc_insertion_point(class_scope:ledger.core.message.LibCoreConfigution)
 private:
  class HasBitSetters;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr working_dir_;
  ::ledger::core::message::DatabaseConfiguration* database_config_;
  bool enable_internal_logging_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_core_5fconfiguration_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DatabaseConfiguration

// string db_name = 1;
inline void DatabaseConfiguration::clear_db_name() {
  db_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DatabaseConfiguration::db_name() const {
  // @@protoc_insertion_point(field_get:ledger.core.message.DatabaseConfiguration.db_name)
  return db_name_.GetNoArena();
}
inline void DatabaseConfiguration::set_db_name(const ::std::string& value) {
  
  db_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.message.DatabaseConfiguration.db_name)
}
#if LANG_CXX11
inline void DatabaseConfiguration::set_db_name(::std::string&& value) {
  
  db_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.message.DatabaseConfiguration.db_name)
}
#endif
inline void DatabaseConfiguration::set_db_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  db_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.message.DatabaseConfiguration.db_name)
}
inline void DatabaseConfiguration::set_db_name(const char* value, size_t size) {
  
  db_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.message.DatabaseConfiguration.db_name)
}
inline ::std::string* DatabaseConfiguration::mutable_db_name() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.message.DatabaseConfiguration.db_name)
  return db_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DatabaseConfiguration::release_db_name() {
  // @@protoc_insertion_point(field_release:ledger.core.message.DatabaseConfiguration.db_name)
  
  return db_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DatabaseConfiguration::set_allocated_db_name(::std::string* db_name) {
  if (db_name != nullptr) {
    
  } else {
    
  }
  db_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), db_name);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.message.DatabaseConfiguration.db_name)
}

// string user_name = 2;
inline void DatabaseConfiguration::clear_user_name() {
  user_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DatabaseConfiguration::user_name() const {
  // @@protoc_insertion_point(field_get:ledger.core.message.DatabaseConfiguration.user_name)
  return user_name_.GetNoArena();
}
inline void DatabaseConfiguration::set_user_name(const ::std::string& value) {
  
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.message.DatabaseConfiguration.user_name)
}
#if LANG_CXX11
inline void DatabaseConfiguration::set_user_name(::std::string&& value) {
  
  user_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.message.DatabaseConfiguration.user_name)
}
#endif
inline void DatabaseConfiguration::set_user_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.message.DatabaseConfiguration.user_name)
}
inline void DatabaseConfiguration::set_user_name(const char* value, size_t size) {
  
  user_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.message.DatabaseConfiguration.user_name)
}
inline ::std::string* DatabaseConfiguration::mutable_user_name() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.message.DatabaseConfiguration.user_name)
  return user_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DatabaseConfiguration::release_user_name() {
  // @@protoc_insertion_point(field_release:ledger.core.message.DatabaseConfiguration.user_name)
  
  return user_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DatabaseConfiguration::set_allocated_user_name(::std::string* user_name) {
  if (user_name != nullptr) {
    
  } else {
    
  }
  user_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_name);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.message.DatabaseConfiguration.user_name)
}

// string password = 3;
inline void DatabaseConfiguration::clear_password() {
  password_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& DatabaseConfiguration::password() const {
  // @@protoc_insertion_point(field_get:ledger.core.message.DatabaseConfiguration.password)
  return password_.GetNoArena();
}
inline void DatabaseConfiguration::set_password(const ::std::string& value) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.message.DatabaseConfiguration.password)
}
#if LANG_CXX11
inline void DatabaseConfiguration::set_password(::std::string&& value) {
  
  password_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.message.DatabaseConfiguration.password)
}
#endif
inline void DatabaseConfiguration::set_password(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.message.DatabaseConfiguration.password)
}
inline void DatabaseConfiguration::set_password(const char* value, size_t size) {
  
  password_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.message.DatabaseConfiguration.password)
}
inline ::std::string* DatabaseConfiguration::mutable_password() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.message.DatabaseConfiguration.password)
  return password_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* DatabaseConfiguration::release_password() {
  // @@protoc_insertion_point(field_release:ledger.core.message.DatabaseConfiguration.password)
  
  return password_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void DatabaseConfiguration::set_allocated_password(::std::string* password) {
  if (password != nullptr) {
    
  } else {
    
  }
  password_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), password);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.message.DatabaseConfiguration.password)
}

// -------------------------------------------------------------------

// LibCoreConfigution

// string working_dir = 1;
inline void LibCoreConfigution::clear_working_dir() {
  working_dir_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& LibCoreConfigution::working_dir() const {
  // @@protoc_insertion_point(field_get:ledger.core.message.LibCoreConfigution.working_dir)
  return working_dir_.GetNoArena();
}
inline void LibCoreConfigution::set_working_dir(const ::std::string& value) {
  
  working_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:ledger.core.message.LibCoreConfigution.working_dir)
}
#if LANG_CXX11
inline void LibCoreConfigution::set_working_dir(::std::string&& value) {
  
  working_dir_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:ledger.core.message.LibCoreConfigution.working_dir)
}
#endif
inline void LibCoreConfigution::set_working_dir(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  working_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:ledger.core.message.LibCoreConfigution.working_dir)
}
inline void LibCoreConfigution::set_working_dir(const char* value, size_t size) {
  
  working_dir_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:ledger.core.message.LibCoreConfigution.working_dir)
}
inline ::std::string* LibCoreConfigution::mutable_working_dir() {
  
  // @@protoc_insertion_point(field_mutable:ledger.core.message.LibCoreConfigution.working_dir)
  return working_dir_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* LibCoreConfigution::release_working_dir() {
  // @@protoc_insertion_point(field_release:ledger.core.message.LibCoreConfigution.working_dir)
  
  return working_dir_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void LibCoreConfigution::set_allocated_working_dir(::std::string* working_dir) {
  if (working_dir != nullptr) {
    
  } else {
    
  }
  working_dir_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), working_dir);
  // @@protoc_insertion_point(field_set_allocated:ledger.core.message.LibCoreConfigution.working_dir)
}

// .ledger.core.message.DatabaseConfiguration database_config = 2;
inline bool LibCoreConfigution::has_database_config() const {
  return this != internal_default_instance() && database_config_ != nullptr;
}
inline void LibCoreConfigution::clear_database_config() {
  if (GetArenaNoVirtual() == nullptr && database_config_ != nullptr) {
    delete database_config_;
  }
  database_config_ = nullptr;
}
inline const ::ledger::core::message::DatabaseConfiguration& LibCoreConfigution::database_config() const {
  const ::ledger::core::message::DatabaseConfiguration* p = database_config_;
  // @@protoc_insertion_point(field_get:ledger.core.message.LibCoreConfigution.database_config)
  return p != nullptr ? *p : *reinterpret_cast<const ::ledger::core::message::DatabaseConfiguration*>(
      &::ledger::core::message::_DatabaseConfiguration_default_instance_);
}
inline ::ledger::core::message::DatabaseConfiguration* LibCoreConfigution::release_database_config() {
  // @@protoc_insertion_point(field_release:ledger.core.message.LibCoreConfigution.database_config)
  
  ::ledger::core::message::DatabaseConfiguration* temp = database_config_;
  database_config_ = nullptr;
  return temp;
}
inline ::ledger::core::message::DatabaseConfiguration* LibCoreConfigution::mutable_database_config() {
  
  if (database_config_ == nullptr) {
    auto* p = CreateMaybeMessage<::ledger::core::message::DatabaseConfiguration>(GetArenaNoVirtual());
    database_config_ = p;
  }
  // @@protoc_insertion_point(field_mutable:ledger.core.message.LibCoreConfigution.database_config)
  return database_config_;
}
inline void LibCoreConfigution::set_allocated_database_config(::ledger::core::message::DatabaseConfiguration* database_config) {
  ::google::protobuf::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete database_config_;
  }
  if (database_config) {
    ::google::protobuf::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      database_config = ::google::protobuf::internal::GetOwnedMessage(
          message_arena, database_config, submessage_arena);
    }
    
  } else {
    
  }
  database_config_ = database_config;
  // @@protoc_insertion_point(field_set_allocated:ledger.core.message.LibCoreConfigution.database_config)
}

// bool enable_internal_logging = 3;
inline void LibCoreConfigution::clear_enable_internal_logging() {
  enable_internal_logging_ = false;
}
inline bool LibCoreConfigution::enable_internal_logging() const {
  // @@protoc_insertion_point(field_get:ledger.core.message.LibCoreConfigution.enable_internal_logging)
  return enable_internal_logging_;
}
inline void LibCoreConfigution::set_enable_internal_logging(bool value) {
  
  enable_internal_logging_ = value;
  // @@protoc_insertion_point(field_set:ledger.core.message.LibCoreConfigution.enable_internal_logging)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace message
}  // namespace core
}  // namespace ledger

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_core_5fconfiguration_2eproto
