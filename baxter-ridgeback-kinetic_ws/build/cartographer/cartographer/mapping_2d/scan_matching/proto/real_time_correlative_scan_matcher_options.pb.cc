// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/scan_matching/proto/real_time_correlative_scan_matcher_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_2d/scan_matching/proto/real_time_correlative_scan_matcher_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_2d {
namespace scan_matching {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* RealTimeCorrelativeScanMatcherOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RealTimeCorrelativeScanMatcherOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_2d/scan_matching/proto/real_time_correlative_scan_matcher_options.proto");
  GOOGLE_CHECK(file != NULL);
  RealTimeCorrelativeScanMatcherOptions_descriptor_ = file->message_type(0);
  static const int RealTimeCorrelativeScanMatcherOptions_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RealTimeCorrelativeScanMatcherOptions, linear_search_window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RealTimeCorrelativeScanMatcherOptions, angular_search_window_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RealTimeCorrelativeScanMatcherOptions, translation_delta_cost_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RealTimeCorrelativeScanMatcherOptions, rotation_delta_cost_weight_),
  };
  RealTimeCorrelativeScanMatcherOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RealTimeCorrelativeScanMatcherOptions_descriptor_,
      RealTimeCorrelativeScanMatcherOptions::default_instance_,
      RealTimeCorrelativeScanMatcherOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RealTimeCorrelativeScanMatcherOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RealTimeCorrelativeScanMatcherOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RealTimeCorrelativeScanMatcherOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RealTimeCorrelativeScanMatcherOptions_descriptor_, &RealTimeCorrelativeScanMatcherOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
  delete RealTimeCorrelativeScanMatcherOptions::default_instance_;
  delete RealTimeCorrelativeScanMatcherOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\\cartographer/mapping_2d/scan_matching/"
    "proto/real_time_correlative_scan_matcher"
    "_options.proto\022+cartographer.mapping_2d."
    "scan_matching.proto\"\257\001\n%RealTimeCorrelat"
    "iveScanMatcherOptions\022\034\n\024linear_search_w"
    "indow\030\001 \001(\001\022\035\n\025angular_search_window\030\002 \001"
    "(\001\022%\n\035translation_delta_cost_weight\030\003 \001("
    "\001\022\"\n\032rotation_delta_cost_weight\030\004 \001(\001", 317);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_2d/scan_matching/proto/real_time_correlative_scan_matcher_options.proto", &protobuf_RegisterTypes);
  RealTimeCorrelativeScanMatcherOptions::default_instance_ = new RealTimeCorrelativeScanMatcherOptions();
  RealTimeCorrelativeScanMatcherOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RealTimeCorrelativeScanMatcherOptions::kLinearSearchWindowFieldNumber;
const int RealTimeCorrelativeScanMatcherOptions::kAngularSearchWindowFieldNumber;
const int RealTimeCorrelativeScanMatcherOptions::kTranslationDeltaCostWeightFieldNumber;
const int RealTimeCorrelativeScanMatcherOptions::kRotationDeltaCostWeightFieldNumber;
#endif  // !_MSC_VER

RealTimeCorrelativeScanMatcherOptions::RealTimeCorrelativeScanMatcherOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
}

void RealTimeCorrelativeScanMatcherOptions::InitAsDefaultInstance() {
}

RealTimeCorrelativeScanMatcherOptions::RealTimeCorrelativeScanMatcherOptions(const RealTimeCorrelativeScanMatcherOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
}

void RealTimeCorrelativeScanMatcherOptions::SharedCtor() {
  _cached_size_ = 0;
  linear_search_window_ = 0;
  angular_search_window_ = 0;
  translation_delta_cost_weight_ = 0;
  rotation_delta_cost_weight_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RealTimeCorrelativeScanMatcherOptions::~RealTimeCorrelativeScanMatcherOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  SharedDtor();
}

void RealTimeCorrelativeScanMatcherOptions::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RealTimeCorrelativeScanMatcherOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RealTimeCorrelativeScanMatcherOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RealTimeCorrelativeScanMatcherOptions_descriptor_;
}

const RealTimeCorrelativeScanMatcherOptions& RealTimeCorrelativeScanMatcherOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  return *default_instance_;
}

RealTimeCorrelativeScanMatcherOptions* RealTimeCorrelativeScanMatcherOptions::default_instance_ = NULL;

RealTimeCorrelativeScanMatcherOptions* RealTimeCorrelativeScanMatcherOptions::New() const {
  return new RealTimeCorrelativeScanMatcherOptions;
}

void RealTimeCorrelativeScanMatcherOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<RealTimeCorrelativeScanMatcherOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(linear_search_window_, rotation_delta_cost_weight_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RealTimeCorrelativeScanMatcherOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double linear_search_window = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &linear_search_window_)));
          set_has_linear_search_window();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_angular_search_window;
        break;
      }

      // optional double angular_search_window = 2;
      case 2: {
        if (tag == 17) {
         parse_angular_search_window:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &angular_search_window_)));
          set_has_angular_search_window();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_translation_delta_cost_weight;
        break;
      }

      // optional double translation_delta_cost_weight = 3;
      case 3: {
        if (tag == 25) {
         parse_translation_delta_cost_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &translation_delta_cost_weight_)));
          set_has_translation_delta_cost_weight();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(33)) goto parse_rotation_delta_cost_weight;
        break;
      }

      // optional double rotation_delta_cost_weight = 4;
      case 4: {
        if (tag == 33) {
         parse_rotation_delta_cost_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &rotation_delta_cost_weight_)));
          set_has_rotation_delta_cost_weight();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  return false;
#undef DO_
}

void RealTimeCorrelativeScanMatcherOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  // optional double linear_search_window = 1;
  if (has_linear_search_window()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->linear_search_window(), output);
  }

  // optional double angular_search_window = 2;
  if (has_angular_search_window()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->angular_search_window(), output);
  }

  // optional double translation_delta_cost_weight = 3;
  if (has_translation_delta_cost_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->translation_delta_cost_weight(), output);
  }

  // optional double rotation_delta_cost_weight = 4;
  if (has_rotation_delta_cost_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(4, this->rotation_delta_cost_weight(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
}

::google::protobuf::uint8* RealTimeCorrelativeScanMatcherOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  // optional double linear_search_window = 1;
  if (has_linear_search_window()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->linear_search_window(), target);
  }

  // optional double angular_search_window = 2;
  if (has_angular_search_window()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->angular_search_window(), target);
  }

  // optional double translation_delta_cost_weight = 3;
  if (has_translation_delta_cost_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->translation_delta_cost_weight(), target);
  }

  // optional double rotation_delta_cost_weight = 4;
  if (has_rotation_delta_cost_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(4, this->rotation_delta_cost_weight(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions)
  return target;
}

int RealTimeCorrelativeScanMatcherOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double linear_search_window = 1;
    if (has_linear_search_window()) {
      total_size += 1 + 8;
    }

    // optional double angular_search_window = 2;
    if (has_angular_search_window()) {
      total_size += 1 + 8;
    }

    // optional double translation_delta_cost_weight = 3;
    if (has_translation_delta_cost_weight()) {
      total_size += 1 + 8;
    }

    // optional double rotation_delta_cost_weight = 4;
    if (has_rotation_delta_cost_weight()) {
      total_size += 1 + 8;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RealTimeCorrelativeScanMatcherOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RealTimeCorrelativeScanMatcherOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RealTimeCorrelativeScanMatcherOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RealTimeCorrelativeScanMatcherOptions::MergeFrom(const RealTimeCorrelativeScanMatcherOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_linear_search_window()) {
      set_linear_search_window(from.linear_search_window());
    }
    if (from.has_angular_search_window()) {
      set_angular_search_window(from.angular_search_window());
    }
    if (from.has_translation_delta_cost_weight()) {
      set_translation_delta_cost_weight(from.translation_delta_cost_weight());
    }
    if (from.has_rotation_delta_cost_weight()) {
      set_rotation_delta_cost_weight(from.rotation_delta_cost_weight());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RealTimeCorrelativeScanMatcherOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RealTimeCorrelativeScanMatcherOptions::CopyFrom(const RealTimeCorrelativeScanMatcherOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RealTimeCorrelativeScanMatcherOptions::IsInitialized() const {

  return true;
}

void RealTimeCorrelativeScanMatcherOptions::Swap(RealTimeCorrelativeScanMatcherOptions* other) {
  if (other != this) {
    std::swap(linear_search_window_, other->linear_search_window_);
    std::swap(angular_search_window_, other->angular_search_window_);
    std::swap(translation_delta_cost_weight_, other->translation_delta_cost_weight_);
    std::swap(rotation_delta_cost_weight_, other->rotation_delta_cost_weight_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RealTimeCorrelativeScanMatcherOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RealTimeCorrelativeScanMatcherOptions_descriptor_;
  metadata.reflection = RealTimeCorrelativeScanMatcherOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping_2d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)