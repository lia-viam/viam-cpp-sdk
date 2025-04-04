// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/api/resource.proto

#include "google/api/resource.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace google {
namespace api {
PROTOBUF_CONSTEXPR ResourceDescriptor::ResourceDescriptor(
    ::_pbi::ConstantInitialized)
  : pattern_()
  , style_()
  , _style_cached_byte_size_(0)
  , type_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , name_field_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , plural_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , singular_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , history_(0)
{}
struct ResourceDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResourceDescriptorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResourceDescriptorDefaultTypeInternal() {}
  union {
    ResourceDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResourceDescriptorDefaultTypeInternal _ResourceDescriptor_default_instance_;
PROTOBUF_CONSTEXPR ResourceReference::ResourceReference(
    ::_pbi::ConstantInitialized)
  : type_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , child_type_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct ResourceReferenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ResourceReferenceDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ResourceReferenceDefaultTypeInternal() {}
  union {
    ResourceReference _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ResourceReferenceDefaultTypeInternal _ResourceReference_default_instance_;
}  // namespace api
}  // namespace google
static ::_pb::Metadata file_level_metadata_google_2fapi_2fresource_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_google_2fapi_2fresource_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_google_2fapi_2fresource_2eproto = nullptr;

const uint32_t TableStruct_google_2fapi_2fresource_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, type_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, pattern_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, name_field_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, history_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, plural_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, singular_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceDescriptor, style_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, type_),
  PROTOBUF_FIELD_OFFSET(::google::api::ResourceReference, child_type_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::google::api::ResourceDescriptor)},
  { 13, -1, -1, sizeof(::google::api::ResourceReference)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::google::api::_ResourceDescriptor_default_instance_._instance,
  &::google::api::_ResourceReference_default_instance_._instance,
};

const char descriptor_table_protodef_google_2fapi_2fresource_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031google/api/resource.proto\022\ngoogle.api\032"
  " google/protobuf/descriptor.proto\"\252\003\n\022Re"
  "sourceDescriptor\022\022\n\004type\030\001 \001(\tR\004type\022\030\n\007"
  "pattern\030\002 \003(\tR\007pattern\022\035\n\nname_field\030\003 \001"
  "(\tR\tnameField\022@\n\007history\030\004 \001(\0162&.google."
  "api.ResourceDescriptor.HistoryR\007history\022"
  "\026\n\006plural\030\005 \001(\tR\006plural\022\032\n\010singular\030\006 \001("
  "\tR\010singular\022:\n\005style\030\n \003(\0162$.google.api."
  "ResourceDescriptor.StyleR\005style\"[\n\007Histo"
  "ry\022\027\n\023HISTORY_UNSPECIFIED\020\000\022\035\n\031ORIGINALL"
  "Y_SINGLE_PATTERN\020\001\022\030\n\024FUTURE_MULTI_PATTE"
  "RN\020\002\"8\n\005Style\022\025\n\021STYLE_UNSPECIFIED\020\000\022\030\n\024"
  "DECLARATIVE_FRIENDLY\020\001\"F\n\021ResourceRefere"
  "nce\022\022\n\004type\030\001 \001(\tR\004type\022\035\n\nchild_type\030\002 "
  "\001(\tR\tchildType:l\n\022resource_reference\022\035.g"
  "oogle.protobuf.FieldOptions\030\237\010 \001(\0132\035.goo"
  "gle.api.ResourceReferenceR\021resourceRefer"
  "ence:n\n\023resource_definition\022\034.google.pro"
  "tobuf.FileOptions\030\235\010 \003(\0132\036.google.api.Re"
  "sourceDescriptorR\022resourceDefinition:\\\n\010"
  "resource\022\037.google.protobuf.MessageOption"
  "s\030\235\010 \001(\0132\036.google.api.ResourceDescriptor"
  "R\010resourceBk\n\016com.google.apiB\rResourcePr"
  "otoP\001ZAgoogle.golang.org/genproto/google"
  "apis/api/annotations;annotations\242\002\004GAPIb"
  "\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_google_2fapi_2fresource_2eproto_deps[1] = {
  &::descriptor_table_google_2fprotobuf_2fdescriptor_2eproto,
};
static ::_pbi::once_flag descriptor_table_google_2fapi_2fresource_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_google_2fapi_2fresource_2eproto = {
    false, false, 1007, descriptor_table_protodef_google_2fapi_2fresource_2eproto,
    "google/api/resource.proto",
    &descriptor_table_google_2fapi_2fresource_2eproto_once, descriptor_table_google_2fapi_2fresource_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_google_2fapi_2fresource_2eproto::offsets,
    file_level_metadata_google_2fapi_2fresource_2eproto, file_level_enum_descriptors_google_2fapi_2fresource_2eproto,
    file_level_service_descriptors_google_2fapi_2fresource_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_google_2fapi_2fresource_2eproto_getter() {
  return &descriptor_table_google_2fapi_2fresource_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_google_2fapi_2fresource_2eproto(&descriptor_table_google_2fapi_2fresource_2eproto);
namespace google {
namespace api {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResourceDescriptor_History_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fresource_2eproto[0];
}
bool ResourceDescriptor_History_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ResourceDescriptor_History ResourceDescriptor::HISTORY_UNSPECIFIED;
constexpr ResourceDescriptor_History ResourceDescriptor::ORIGINALLY_SINGLE_PATTERN;
constexpr ResourceDescriptor_History ResourceDescriptor::FUTURE_MULTI_PATTERN;
constexpr ResourceDescriptor_History ResourceDescriptor::History_MIN;
constexpr ResourceDescriptor_History ResourceDescriptor::History_MAX;
constexpr int ResourceDescriptor::History_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ResourceDescriptor_Style_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2fapi_2fresource_2eproto);
  return file_level_enum_descriptors_google_2fapi_2fresource_2eproto[1];
}
bool ResourceDescriptor_Style_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ResourceDescriptor_Style ResourceDescriptor::STYLE_UNSPECIFIED;
constexpr ResourceDescriptor_Style ResourceDescriptor::DECLARATIVE_FRIENDLY;
constexpr ResourceDescriptor_Style ResourceDescriptor::Style_MIN;
constexpr ResourceDescriptor_Style ResourceDescriptor::Style_MAX;
constexpr int ResourceDescriptor::Style_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ResourceDescriptor::_Internal {
 public:
};

ResourceDescriptor::ResourceDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  pattern_(arena),
  style_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:google.api.ResourceDescriptor)
}
ResourceDescriptor::ResourceDescriptor(const ResourceDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      pattern_(from.pattern_),
      style_(from.style_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_type().empty()) {
    type_.Set(from._internal_type(), 
      GetArenaForAllocation());
  }
  name_field_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_field_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name_field().empty()) {
    name_field_.Set(from._internal_name_field(), 
      GetArenaForAllocation());
  }
  plural_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    plural_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_plural().empty()) {
    plural_.Set(from._internal_plural(), 
      GetArenaForAllocation());
  }
  singular_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    singular_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_singular().empty()) {
    singular_.Set(from._internal_singular(), 
      GetArenaForAllocation());
  }
  history_ = from.history_;
  // @@protoc_insertion_point(copy_constructor:google.api.ResourceDescriptor)
}

inline void ResourceDescriptor::SharedCtor() {
type_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  type_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
name_field_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_field_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
plural_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  plural_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
singular_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  singular_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
history_ = 0;
}

ResourceDescriptor::~ResourceDescriptor() {
  // @@protoc_insertion_point(destructor:google.api.ResourceDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ResourceDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  type_.Destroy();
  name_field_.Destroy();
  plural_.Destroy();
  singular_.Destroy();
}

void ResourceDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ResourceDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ResourceDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  pattern_.Clear();
  style_.Clear();
  type_.ClearToEmpty();
  name_field_.ClearToEmpty();
  plural_.ClearToEmpty();
  singular_.ClearToEmpty();
  history_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResourceDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string type = 1 [json_name = "type"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceDescriptor.type"));
        } else
          goto handle_unusual;
        continue;
      // repeated string pattern = 2 [json_name = "pattern"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_pattern();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceDescriptor.pattern"));
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string name_field = 3 [json_name = "nameField"];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_name_field();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceDescriptor.name_field"));
        } else
          goto handle_unusual;
        continue;
      // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_history(static_cast<::google::api::ResourceDescriptor_History>(val));
        } else
          goto handle_unusual;
        continue;
      // string plural = 5 [json_name = "plural"];
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_plural();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceDescriptor.plural"));
        } else
          goto handle_unusual;
        continue;
      // string singular = 6 [json_name = "singular"];
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_singular();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceDescriptor.singular"));
        } else
          goto handle_unusual;
        continue;
      // repeated .google.api.ResourceDescriptor.Style style = 10 [json_name = "style"];
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser(_internal_mutable_style(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 80) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_add_style(static_cast<::google::api::ResourceDescriptor_Style>(val));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ResourceDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ResourceDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // repeated string pattern = 2 [json_name = "pattern"];
  for (int i = 0, n = this->_internal_pattern_size(); i < n; i++) {
    const auto& s = this->_internal_pattern(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.pattern");
    target = stream->WriteString(2, s, target);
  }

  // string name_field = 3 [json_name = "nameField"];
  if (!this->_internal_name_field().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name_field().data(), static_cast<int>(this->_internal_name_field().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.name_field");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_name_field(), target);
  }

  // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
  if (this->_internal_history() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_history(), target);
  }

  // string plural = 5 [json_name = "plural"];
  if (!this->_internal_plural().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_plural().data(), static_cast<int>(this->_internal_plural().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.plural");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_plural(), target);
  }

  // string singular = 6 [json_name = "singular"];
  if (!this->_internal_singular().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_singular().data(), static_cast<int>(this->_internal_singular().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceDescriptor.singular");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_singular(), target);
  }

  // repeated .google.api.ResourceDescriptor.Style style = 10 [json_name = "style"];
  {
    int byte_size = _style_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          10, style_, byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ResourceDescriptor)
  return target;
}

size_t ResourceDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ResourceDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string pattern = 2 [json_name = "pattern"];
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(pattern_.size());
  for (int i = 0, n = pattern_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      pattern_.Get(i));
  }

  // repeated .google.api.ResourceDescriptor.Style style = 10 [json_name = "style"];
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_style_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_style(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _style_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  // string name_field = 3 [json_name = "nameField"];
  if (!this->_internal_name_field().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name_field());
  }

  // string plural = 5 [json_name = "plural"];
  if (!this->_internal_plural().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_plural());
  }

  // string singular = 6 [json_name = "singular"];
  if (!this->_internal_singular().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_singular());
  }

  // .google.api.ResourceDescriptor.History history = 4 [json_name = "history"];
  if (this->_internal_history() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_history());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResourceDescriptor::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ResourceDescriptor::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResourceDescriptor::GetClassData() const { return &_class_data_; }

void ResourceDescriptor::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ResourceDescriptor *>(to)->MergeFrom(
      static_cast<const ResourceDescriptor &>(from));
}


void ResourceDescriptor::MergeFrom(const ResourceDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ResourceDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  pattern_.MergeFrom(from.pattern_);
  style_.MergeFrom(from.style_);
  if (!from._internal_type().empty()) {
    _internal_set_type(from._internal_type());
  }
  if (!from._internal_name_field().empty()) {
    _internal_set_name_field(from._internal_name_field());
  }
  if (!from._internal_plural().empty()) {
    _internal_set_plural(from._internal_plural());
  }
  if (!from._internal_singular().empty()) {
    _internal_set_singular(from._internal_singular());
  }
  if (from._internal_history() != 0) {
    _internal_set_history(from._internal_history());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResourceDescriptor::CopyFrom(const ResourceDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ResourceDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceDescriptor::IsInitialized() const {
  return true;
}

void ResourceDescriptor::InternalSwap(ResourceDescriptor* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  pattern_.InternalSwap(&other->pattern_);
  style_.InternalSwap(&other->style_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &type_, lhs_arena,
      &other->type_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_field_, lhs_arena,
      &other->name_field_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &plural_, lhs_arena,
      &other->plural_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &singular_, lhs_arena,
      &other->singular_, rhs_arena
  );
  swap(history_, other->history_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceDescriptor::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fresource_2eproto_getter, &descriptor_table_google_2fapi_2fresource_2eproto_once,
      file_level_metadata_google_2fapi_2fresource_2eproto[0]);
}

// ===================================================================

class ResourceReference::_Internal {
 public:
};

ResourceReference::ResourceReference(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:google.api.ResourceReference)
}
ResourceReference::ResourceReference(const ResourceReference& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_type().empty()) {
    type_.Set(from._internal_type(), 
      GetArenaForAllocation());
  }
  child_type_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    child_type_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_child_type().empty()) {
    child_type_.Set(from._internal_child_type(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:google.api.ResourceReference)
}

inline void ResourceReference::SharedCtor() {
type_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  type_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
child_type_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  child_type_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ResourceReference::~ResourceReference() {
  // @@protoc_insertion_point(destructor:google.api.ResourceReference)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ResourceReference::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  type_.Destroy();
  child_type_.Destroy();
}

void ResourceReference::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ResourceReference::Clear() {
// @@protoc_insertion_point(message_clear_start:google.api.ResourceReference)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  type_.ClearToEmpty();
  child_type_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ResourceReference::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string type = 1 [json_name = "type"];
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_type();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceReference.type"));
        } else
          goto handle_unusual;
        continue;
      // string child_type = 2 [json_name = "childType"];
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_child_type();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "google.api.ResourceReference.child_type"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ResourceReference::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:google.api.ResourceReference)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_type().data(), static_cast<int>(this->_internal_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceReference.type");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_type(), target);
  }

  // string child_type = 2 [json_name = "childType"];
  if (!this->_internal_child_type().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_child_type().data(), static_cast<int>(this->_internal_child_type().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "google.api.ResourceReference.child_type");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_child_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:google.api.ResourceReference)
  return target;
}

size_t ResourceReference::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:google.api.ResourceReference)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string type = 1 [json_name = "type"];
  if (!this->_internal_type().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_type());
  }

  // string child_type = 2 [json_name = "childType"];
  if (!this->_internal_child_type().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_child_type());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ResourceReference::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    ResourceReference::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ResourceReference::GetClassData() const { return &_class_data_; }

void ResourceReference::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<ResourceReference *>(to)->MergeFrom(
      static_cast<const ResourceReference &>(from));
}


void ResourceReference::MergeFrom(const ResourceReference& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:google.api.ResourceReference)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_type().empty()) {
    _internal_set_type(from._internal_type());
  }
  if (!from._internal_child_type().empty()) {
    _internal_set_child_type(from._internal_child_type());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ResourceReference::CopyFrom(const ResourceReference& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:google.api.ResourceReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ResourceReference::IsInitialized() const {
  return true;
}

void ResourceReference::InternalSwap(ResourceReference* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &type_, lhs_arena,
      &other->type_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &child_type_, lhs_arena,
      &other->child_type_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ResourceReference::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_google_2fapi_2fresource_2eproto_getter, &descriptor_table_google_2fapi_2fresource_2eproto_once,
      file_level_metadata_google_2fapi_2fresource_2eproto[1]);
}
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FieldOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::ResourceReference >, 11, false>
  resource_reference(kResourceReferenceFieldNumber, ::google::api::ResourceReference::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::FileOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::RepeatedMessageTypeTraits< ::google::api::ResourceDescriptor >, 11, false>
  resource_definition(kResourceDefinitionFieldNumber, ::google::api::ResourceDescriptor::default_instance(), nullptr);
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 ::PROTOBUF_NAMESPACE_ID::internal::ExtensionIdentifier< ::PROTOBUF_NAMESPACE_ID::MessageOptions,
    ::PROTOBUF_NAMESPACE_ID::internal::MessageTypeTraits< ::google::api::ResourceDescriptor >, 11, false>
  resource(kResourceFieldNumber, ::google::api::ResourceDescriptor::default_instance(), nullptr);

// @@protoc_insertion_point(namespace_scope)
}  // namespace api
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::google::api::ResourceDescriptor*
Arena::CreateMaybeMessage< ::google::api::ResourceDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::ResourceDescriptor >(arena);
}
template<> PROTOBUF_NOINLINE ::google::api::ResourceReference*
Arena::CreateMaybeMessage< ::google::api::ResourceReference >(Arena* arena) {
  return Arena::CreateMessageInternal< ::google::api::ResourceReference >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
