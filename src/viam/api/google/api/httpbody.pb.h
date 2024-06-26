// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/httpbody.proto
// Protobuf C++ Version: 4.25.1

#ifndef GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fhttpbody_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fhttpbody_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/port_def.inc"
#if PROTOBUF_VERSION < 4025000
#error "This file was generated by a newer version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please update"
#error "your headers."
#endif  // PROTOBUF_VERSION

#if 4025001 < PROTOBUF_MIN_PROTOC_VERSION
#error "This file was generated by an older version of protoc which is"
#error "incompatible with your Protocol Buffer headers. Please"
#error "regenerate this file with a newer version of protoc."
#endif  // PROTOBUF_MIN_PROTOC_VERSION
#include "google/protobuf/port_undef.inc"
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
#include "google/protobuf/any.pb.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_google_2fapi_2fhttpbody_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_google_2fapi_2fhttpbody_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_google_2fapi_2fhttpbody_2eproto;
namespace google {
namespace api {
class HttpBody;
struct HttpBodyDefaultTypeInternal;
extern HttpBodyDefaultTypeInternal _HttpBody_default_instance_;
}  // namespace api
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace google {
namespace api {

// ===================================================================


// -------------------------------------------------------------------

class HttpBody final :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:google.api.HttpBody) */ {
 public:
  inline HttpBody() : HttpBody(nullptr) {}
  ~HttpBody() override;
  template<typename = void>
  explicit PROTOBUF_CONSTEXPR HttpBody(::google::protobuf::internal::ConstantInitialized);

  inline HttpBody(const HttpBody& from)
      : HttpBody(nullptr, from) {}
  HttpBody(HttpBody&& from) noexcept
    : HttpBody() {
    *this = ::std::move(from);
  }

  inline HttpBody& operator=(const HttpBody& from) {
    CopyFrom(from);
    return *this;
  }
  inline HttpBody& operator=(HttpBody&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const HttpBody& default_instance() {
    return *internal_default_instance();
  }
  static inline const HttpBody* internal_default_instance() {
    return reinterpret_cast<const HttpBody*>(
               &_HttpBody_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HttpBody& a, HttpBody& b) {
    a.Swap(&b);
  }
  inline void Swap(HttpBody* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr &&
        GetArena() == other->GetArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(HttpBody* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HttpBody* New(::google::protobuf::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HttpBody>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const HttpBody& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom( const HttpBody& from) {
    HttpBody::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  ::size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::google::protobuf::internal::ParseContext* ctx) final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target, ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  ::google::protobuf::internal::CachedSize* AccessCachedSize() const final;
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(HttpBody* other);

  private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() {
    return "google.api.HttpBody";
  }
  protected:
  explicit HttpBody(::google::protobuf::Arena* arena);
  HttpBody(::google::protobuf::Arena* arena, const HttpBody& from);
  public:

  static const ClassData _class_data_;
  const ::google::protobuf::Message::ClassData*GetClassData() const final;

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtensionsFieldNumber = 3,
    kContentTypeFieldNumber = 1,
    kDataFieldNumber = 2,
  };
  // repeated .google.protobuf.Any extensions = 3 [json_name = "extensions"];
  int extensions_size() const;
  private:
  int _internal_extensions_size() const;

  public:
  void clear_extensions() ;
  ::google::protobuf::Any* mutable_extensions(int index);
  ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >*
      mutable_extensions();
  private:
  const ::google::protobuf::RepeatedPtrField<::google::protobuf::Any>& _internal_extensions() const;
  ::google::protobuf::RepeatedPtrField<::google::protobuf::Any>* _internal_mutable_extensions();
  public:
  const ::google::protobuf::Any& extensions(int index) const;
  ::google::protobuf::Any* add_extensions();
  const ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any >&
      extensions() const;
  // string content_type = 1 [json_name = "contentType"];
  void clear_content_type() ;
  const std::string& content_type() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_content_type(Arg_&& arg, Args_... args);
  std::string* mutable_content_type();
  PROTOBUF_NODISCARD std::string* release_content_type();
  void set_allocated_content_type(std::string* value);

  private:
  const std::string& _internal_content_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content_type(
      const std::string& value);
  std::string* _internal_mutable_content_type();

  public:
  // bytes data = 2 [json_name = "data"];
  void clear_data() ;
  const std::string& data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_data(Arg_&& arg, Args_... args);
  std::string* mutable_data();
  PROTOBUF_NODISCARD std::string* release_data();
  void set_allocated_data(std::string* value);

  private:
  const std::string& _internal_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_data(
      const std::string& value);
  std::string* _internal_mutable_data();

  public:
  // @@protoc_insertion_point(class_scope:google.api.HttpBody)
 private:
  class _Internal;

  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 1,
      40, 2>
      _table_;
  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {

        inline explicit constexpr Impl_(
            ::google::protobuf::internal::ConstantInitialized) noexcept;
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena);
        inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                              ::google::protobuf::Arena* arena, const Impl_& from);
    ::google::protobuf::RepeatedPtrField< ::google::protobuf::Any > extensions_;
    ::google::protobuf::internal::ArenaStringPtr content_type_;
    ::google::protobuf::internal::ArenaStringPtr data_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_google_2fapi_2fhttpbody_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// HttpBody

// string content_type = 1 [json_name = "contentType"];
inline void HttpBody::clear_content_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.content_type_.ClearToEmpty();
}
inline const std::string& HttpBody::content_type() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.content_type)
  return _internal_content_type();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void HttpBody::set_content_type(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.content_type_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:google.api.HttpBody.content_type)
}
inline std::string* HttpBody::mutable_content_type() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_content_type();
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.content_type)
  return _s;
}
inline const std::string& HttpBody::_internal_content_type() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.content_type_.Get();
}
inline void HttpBody::_internal_set_content_type(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.content_type_.Set(value, GetArena());
}
inline std::string* HttpBody::_internal_mutable_content_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.content_type_.Mutable( GetArena());
}
inline std::string* HttpBody::release_content_type() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:google.api.HttpBody.content_type)
  return _impl_.content_type_.Release();
}
inline void HttpBody::set_allocated_content_type(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.content_type_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.content_type_.IsDefault()) {
          _impl_.content_type_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.content_type)
}

// bytes data = 2 [json_name = "data"];
inline void HttpBody::clear_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.data_.ClearToEmpty();
}
inline const std::string& HttpBody::data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.data)
  return _internal_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void HttpBody::set_data(Arg_&& arg,
                                                     Args_... args) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:google.api.HttpBody.data)
}
inline std::string* HttpBody::mutable_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_data();
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.data)
  return _s;
}
inline const std::string& HttpBody::_internal_data() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.data_.Get();
}
inline void HttpBody::_internal_set_data(const std::string& value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  _impl_.data_.Set(value, GetArena());
}
inline std::string* HttpBody::_internal_mutable_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ;
  return _impl_.data_.Mutable( GetArena());
}
inline std::string* HttpBody::release_data() {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  // @@protoc_insertion_point(field_release:google.api.HttpBody.data)
  return _impl_.data_.Release();
}
inline void HttpBody::set_allocated_data(std::string* value) {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  _impl_.data_.SetAllocated(value, GetArena());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        if (_impl_.data_.IsDefault()) {
          _impl_.data_.Set("", GetArena());
        }
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:google.api.HttpBody.data)
}

// repeated .google.protobuf.Any extensions = 3 [json_name = "extensions"];
inline int HttpBody::_internal_extensions_size() const {
  return _internal_extensions().size();
}
inline int HttpBody::extensions_size() const {
  return _internal_extensions_size();
}
inline ::google::protobuf::Any* HttpBody::mutable_extensions(int index)
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable:google.api.HttpBody.extensions)
  return _internal_mutable_extensions()->Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField<::google::protobuf::Any>* HttpBody::mutable_extensions()
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_mutable_list:google.api.HttpBody.extensions)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  return _internal_mutable_extensions();
}
inline const ::google::protobuf::Any& HttpBody::extensions(int index) const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:google.api.HttpBody.extensions)
  return _internal_extensions().Get(index);
}
inline ::google::protobuf::Any* HttpBody::add_extensions() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::google::protobuf::Any* _add = _internal_mutable_extensions()->Add();
  // @@protoc_insertion_point(field_add:google.api.HttpBody.extensions)
  return _add;
}
inline const ::google::protobuf::RepeatedPtrField<::google::protobuf::Any>& HttpBody::extensions() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_list:google.api.HttpBody.extensions)
  return _internal_extensions();
}
inline const ::google::protobuf::RepeatedPtrField<::google::protobuf::Any>&
HttpBody::_internal_extensions() const {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return _impl_.extensions_;
}
inline ::google::protobuf::RepeatedPtrField<::google::protobuf::Any>*
HttpBody::_internal_mutable_extensions() {
  PROTOBUF_TSAN_READ(&_impl_._tsan_detect_race);
  return &_impl_.extensions_;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_google_2fapi_2fhttpbody_2eproto_2epb_2eh
