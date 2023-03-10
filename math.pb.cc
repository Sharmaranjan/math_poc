// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: math.proto

#include "math.pb.h"

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

PROTOBUF_CONSTEXPR MathClientRequest::MathClientRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MathClientRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MathClientRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MathClientRequestDefaultTypeInternal() {}
  union {
    MathClientRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MathClientRequestDefaultTypeInternal _MathClientRequest_default_instance_;
PROTOBUF_CONSTEXPR MathServerRequest::MathServerRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.x_)*/0
  , /*decltype(_impl_.y_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MathServerRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MathServerRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MathServerRequestDefaultTypeInternal() {}
  union {
    MathServerRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MathServerRequestDefaultTypeInternal _MathServerRequest_default_instance_;
PROTOBUF_CONSTEXPR MathServerReply::MathServerReply(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.message_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MathServerReplyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MathServerReplyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MathServerReplyDefaultTypeInternal() {}
  union {
    MathServerReply _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MathServerReplyDefaultTypeInternal _MathServerReply_default_instance_;
static ::_pb::Metadata file_level_metadata_math_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_math_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_math_2eproto = nullptr;

const uint32_t TableStruct_math_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MathClientRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::MathClientRequest, _impl_.x_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MathServerRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::MathServerRequest, _impl_.x_),
  PROTOBUF_FIELD_OFFSET(::MathServerRequest, _impl_.y_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::MathServerReply, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::MathServerReply, _impl_.message_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::MathClientRequest)},
  { 7, -1, -1, sizeof(::MathServerRequest)},
  { 15, -1, -1, sizeof(::MathServerReply)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::_MathClientRequest_default_instance_._instance,
  &::_MathServerRequest_default_instance_._instance,
  &::_MathServerReply_default_instance_._instance,
};

const char descriptor_table_protodef_math_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nmath.proto\"\036\n\021MathClientRequest\022\t\n\001x\030\001"
  " \001(\005\")\n\021MathServerRequest\022\t\n\001x\030\001 \001(\002\022\t\n\001"
  "y\030\002 \001(\002\"\"\n\017MathServerReply\022\017\n\007message\030\001 "
  "\001(\0022B\n\021MathServerService\022-\n\003Add\022\022.MathSe"
  "rverRequest\032\020.MathServerReply\"\0002K\n\021MathC"
  "lientService\0226\n\nUpdateTime\022\022.MathClientR"
  "equest\032\022.MathClientRequest\"\000b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_math_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_math_2eproto = {
    false, false, 276, descriptor_table_protodef_math_2eproto,
    "math.proto",
    &descriptor_table_math_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_math_2eproto::offsets,
    file_level_metadata_math_2eproto, file_level_enum_descriptors_math_2eproto,
    file_level_service_descriptors_math_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_math_2eproto_getter() {
  return &descriptor_table_math_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_math_2eproto(&descriptor_table_math_2eproto);

// ===================================================================

class MathClientRequest::_Internal {
 public:
};

MathClientRequest::MathClientRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:MathClientRequest)
}
MathClientRequest::MathClientRequest(const MathClientRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MathClientRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.x_ = from._impl_.x_;
  // @@protoc_insertion_point(copy_constructor:MathClientRequest)
}

inline void MathClientRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MathClientRequest::~MathClientRequest() {
  // @@protoc_insertion_point(destructor:MathClientRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MathClientRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MathClientRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MathClientRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:MathClientRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.x_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MathClientRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* MathClientRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MathClientRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->_internal_x() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_x(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MathClientRequest)
  return target;
}

size_t MathClientRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MathClientRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 x = 1;
  if (this->_internal_x() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_x());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MathClientRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MathClientRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MathClientRequest::GetClassData() const { return &_class_data_; }


void MathClientRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MathClientRequest*>(&to_msg);
  auto& from = static_cast<const MathClientRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:MathClientRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_x() != 0) {
    _this->_internal_set_x(from._internal_x());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MathClientRequest::CopyFrom(const MathClientRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MathClientRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathClientRequest::IsInitialized() const {
  return true;
}

void MathClientRequest::InternalSwap(MathClientRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.x_, other->_impl_.x_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MathClientRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_math_2eproto_getter, &descriptor_table_math_2eproto_once,
      file_level_metadata_math_2eproto[0]);
}

// ===================================================================

class MathServerRequest::_Internal {
 public:
};

MathServerRequest::MathServerRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:MathServerRequest)
}
MathServerRequest::MathServerRequest(const MathServerRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MathServerRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){}
    , decltype(_impl_.y_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.x_, &from._impl_.x_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.y_) -
    reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.y_));
  // @@protoc_insertion_point(copy_constructor:MathServerRequest)
}

inline void MathServerRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.x_){0}
    , decltype(_impl_.y_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MathServerRequest::~MathServerRequest() {
  // @@protoc_insertion_point(destructor:MathServerRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MathServerRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MathServerRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MathServerRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:MathServerRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.x_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.y_) -
      reinterpret_cast<char*>(&_impl_.x_)) + sizeof(_impl_.y_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MathServerRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float x = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _impl_.x_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // float y = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _impl_.y_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

uint8_t* MathServerRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MathServerRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float x = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_x(), target);
  }

  // float y = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_y(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MathServerRequest)
  return target;
}

size_t MathServerRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MathServerRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float x = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_x = this->_internal_x();
  uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    total_size += 1 + 4;
  }

  // float y = 2;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_y = this->_internal_y();
  uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MathServerRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MathServerRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MathServerRequest::GetClassData() const { return &_class_data_; }


void MathServerRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MathServerRequest*>(&to_msg);
  auto& from = static_cast<const MathServerRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:MathServerRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_x = from._internal_x();
  uint32_t raw_x;
  memcpy(&raw_x, &tmp_x, sizeof(tmp_x));
  if (raw_x != 0) {
    _this->_internal_set_x(from._internal_x());
  }
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_y = from._internal_y();
  uint32_t raw_y;
  memcpy(&raw_y, &tmp_y, sizeof(tmp_y));
  if (raw_y != 0) {
    _this->_internal_set_y(from._internal_y());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MathServerRequest::CopyFrom(const MathServerRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MathServerRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathServerRequest::IsInitialized() const {
  return true;
}

void MathServerRequest::InternalSwap(MathServerRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MathServerRequest, _impl_.y_)
      + sizeof(MathServerRequest::_impl_.y_)
      - PROTOBUF_FIELD_OFFSET(MathServerRequest, _impl_.x_)>(
          reinterpret_cast<char*>(&_impl_.x_),
          reinterpret_cast<char*>(&other->_impl_.x_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MathServerRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_math_2eproto_getter, &descriptor_table_math_2eproto_once,
      file_level_metadata_math_2eproto[1]);
}

// ===================================================================

class MathServerReply::_Internal {
 public:
};

MathServerReply::MathServerReply(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:MathServerReply)
}
MathServerReply::MathServerReply(const MathServerReply& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MathServerReply* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.message_ = from._impl_.message_;
  // @@protoc_insertion_point(copy_constructor:MathServerReply)
}

inline void MathServerReply::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.message_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MathServerReply::~MathServerReply() {
  // @@protoc_insertion_point(destructor:MathServerReply)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MathServerReply::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MathServerReply::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MathServerReply::Clear() {
// @@protoc_insertion_point(message_clear_start:MathServerReply)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.message_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MathServerReply::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // float message = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _impl_.message_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
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

uint8_t* MathServerReply::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:MathServerReply)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // float message = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_message = this->_internal_message();
  uint32_t raw_message;
  memcpy(&raw_message, &tmp_message, sizeof(tmp_message));
  if (raw_message != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_message(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MathServerReply)
  return target;
}

size_t MathServerReply::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:MathServerReply)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // float message = 1;
  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_message = this->_internal_message();
  uint32_t raw_message;
  memcpy(&raw_message, &tmp_message, sizeof(tmp_message));
  if (raw_message != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MathServerReply::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MathServerReply::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MathServerReply::GetClassData() const { return &_class_data_; }


void MathServerReply::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MathServerReply*>(&to_msg);
  auto& from = static_cast<const MathServerReply&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:MathServerReply)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  static_assert(sizeof(uint32_t) == sizeof(float), "Code assumes uint32_t and float are the same size.");
  float tmp_message = from._internal_message();
  uint32_t raw_message;
  memcpy(&raw_message, &tmp_message, sizeof(tmp_message));
  if (raw_message != 0) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MathServerReply::CopyFrom(const MathServerReply& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:MathServerReply)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MathServerReply::IsInitialized() const {
  return true;
}

void MathServerReply::InternalSwap(MathServerReply* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.message_, other->_impl_.message_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MathServerReply::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_math_2eproto_getter, &descriptor_table_math_2eproto_once,
      file_level_metadata_math_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::MathClientRequest*
Arena::CreateMaybeMessage< ::MathClientRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MathClientRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::MathServerRequest*
Arena::CreateMaybeMessage< ::MathServerRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MathServerRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::MathServerReply*
Arena::CreateMaybeMessage< ::MathServerReply >(Arena* arena) {
  return Arena::CreateMessageInternal< ::MathServerReply >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
