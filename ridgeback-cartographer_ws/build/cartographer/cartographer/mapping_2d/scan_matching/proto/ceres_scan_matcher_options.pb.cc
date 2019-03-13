// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.pb.h"

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

const ::google::protobuf::Descriptor* CeresScanMatcherOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CeresScanMatcherOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto");
  GOOGLE_CHECK(file != NULL);
  CeresScanMatcherOptions_descriptor_ = file->message_type(0);
  static const int CeresScanMatcherOptions_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, occupied_space_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, translation_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, rotation_weight_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, ceres_solver_options_),
  };
  CeresScanMatcherOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CeresScanMatcherOptions_descriptor_,
      CeresScanMatcherOptions::default_instance_,
      CeresScanMatcherOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CeresScanMatcherOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CeresScanMatcherOptions_descriptor_, &CeresScanMatcherOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto() {
  delete CeresScanMatcherOptions::default_instance_;
  delete CeresScanMatcherOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::common::proto::protobuf_AddDesc_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nLcartographer/mapping_2d/scan_matching/"
    "proto/ceres_scan_matcher_options.proto\022+"
    "cartographer.mapping_2d.scan_matching.pr"
    "oto\0324cartographer/common/proto/ceres_sol"
    "ver_options.proto\"\272\001\n\027CeresScanMatcherOp"
    "tions\022\035\n\025occupied_space_weight\030\001 \001(\001\022\032\n\022"
    "translation_weight\030\002 \001(\001\022\027\n\017rotation_wei"
    "ght\030\003 \001(\001\022K\n\024ceres_solver_options\030\t \001(\0132"
    "-.cartographer.common.proto.CeresSolverO"
    "ptions", 366);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto", &protobuf_RegisterTypes);
  CeresScanMatcherOptions::default_instance_ = new CeresScanMatcherOptions();
  CeresScanMatcherOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int CeresScanMatcherOptions::kOccupiedSpaceWeightFieldNumber;
const int CeresScanMatcherOptions::kTranslationWeightFieldNumber;
const int CeresScanMatcherOptions::kRotationWeightFieldNumber;
const int CeresScanMatcherOptions::kCeresSolverOptionsFieldNumber;
#endif  // !_MSC_VER

CeresScanMatcherOptions::CeresScanMatcherOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
}

void CeresScanMatcherOptions::InitAsDefaultInstance() {
  ceres_solver_options_ = const_cast< ::cartographer::common::proto::CeresSolverOptions*>(&::cartographer::common::proto::CeresSolverOptions::default_instance());
}

CeresScanMatcherOptions::CeresScanMatcherOptions(const CeresScanMatcherOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
}

void CeresScanMatcherOptions::SharedCtor() {
  _cached_size_ = 0;
  occupied_space_weight_ = 0;
  translation_weight_ = 0;
  rotation_weight_ = 0;
  ceres_solver_options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CeresScanMatcherOptions::~CeresScanMatcherOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  SharedDtor();
}

void CeresScanMatcherOptions::SharedDtor() {
  if (this != default_instance_) {
    delete ceres_solver_options_;
  }
}

void CeresScanMatcherOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CeresScanMatcherOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CeresScanMatcherOptions_descriptor_;
}

const CeresScanMatcherOptions& CeresScanMatcherOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
  return *default_instance_;
}

CeresScanMatcherOptions* CeresScanMatcherOptions::default_instance_ = NULL;

CeresScanMatcherOptions* CeresScanMatcherOptions::New() const {
  return new CeresScanMatcherOptions;
}

void CeresScanMatcherOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<CeresScanMatcherOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 15) {
    ZR_(occupied_space_weight_, rotation_weight_);
    if (has_ceres_solver_options()) {
      if (ceres_solver_options_ != NULL) ceres_solver_options_->::cartographer::common::proto::CeresSolverOptions::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CeresScanMatcherOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double occupied_space_weight = 1;
      case 1: {
        if (tag == 9) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &occupied_space_weight_)));
          set_has_occupied_space_weight();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_translation_weight;
        break;
      }

      // optional double translation_weight = 2;
      case 2: {
        if (tag == 17) {
         parse_translation_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &translation_weight_)));
          set_has_translation_weight();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(25)) goto parse_rotation_weight;
        break;
      }

      // optional double rotation_weight = 3;
      case 3: {
        if (tag == 25) {
         parse_rotation_weight:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &rotation_weight_)));
          set_has_rotation_weight();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(74)) goto parse_ceres_solver_options;
        break;
      }

      // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
      case 9: {
        if (tag == 74) {
         parse_ceres_solver_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ceres_solver_options()));
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  return false;
#undef DO_
}

void CeresScanMatcherOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  // optional double occupied_space_weight = 1;
  if (has_occupied_space_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->occupied_space_weight(), output);
  }

  // optional double translation_weight = 2;
  if (has_translation_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->translation_weight(), output);
  }

  // optional double rotation_weight = 3;
  if (has_rotation_weight()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->rotation_weight(), output);
  }

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
  if (has_ceres_solver_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, this->ceres_solver_options(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
}

::google::protobuf::uint8* CeresScanMatcherOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  // optional double occupied_space_weight = 1;
  if (has_occupied_space_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->occupied_space_weight(), target);
  }

  // optional double translation_weight = 2;
  if (has_translation_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->translation_weight(), target);
  }

  // optional double rotation_weight = 3;
  if (has_rotation_weight()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->rotation_weight(), target);
  }

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
  if (has_ceres_solver_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        9, this->ceres_solver_options(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  return target;
}

int CeresScanMatcherOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional double occupied_space_weight = 1;
    if (has_occupied_space_weight()) {
      total_size += 1 + 8;
    }

    // optional double translation_weight = 2;
    if (has_translation_weight()) {
      total_size += 1 + 8;
    }

    // optional double rotation_weight = 3;
    if (has_rotation_weight()) {
      total_size += 1 + 8;
    }

    // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
    if (has_ceres_solver_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ceres_solver_options());
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

void CeresScanMatcherOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CeresScanMatcherOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CeresScanMatcherOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CeresScanMatcherOptions::MergeFrom(const CeresScanMatcherOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_occupied_space_weight()) {
      set_occupied_space_weight(from.occupied_space_weight());
    }
    if (from.has_translation_weight()) {
      set_translation_weight(from.translation_weight());
    }
    if (from.has_rotation_weight()) {
      set_rotation_weight(from.rotation_weight());
    }
    if (from.has_ceres_solver_options()) {
      mutable_ceres_solver_options()->::cartographer::common::proto::CeresSolverOptions::MergeFrom(from.ceres_solver_options());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CeresScanMatcherOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CeresScanMatcherOptions::CopyFrom(const CeresScanMatcherOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CeresScanMatcherOptions::IsInitialized() const {

  return true;
}

void CeresScanMatcherOptions::Swap(CeresScanMatcherOptions* other) {
  if (other != this) {
    std::swap(occupied_space_weight_, other->occupied_space_weight_);
    std::swap(translation_weight_, other->translation_weight_);
    std::swap(rotation_weight_, other->rotation_weight_);
    std::swap(ceres_solver_options_, other->ceres_solver_options_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CeresScanMatcherOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CeresScanMatcherOptions_descriptor_;
  metadata.reflection = CeresScanMatcherOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping_2d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
