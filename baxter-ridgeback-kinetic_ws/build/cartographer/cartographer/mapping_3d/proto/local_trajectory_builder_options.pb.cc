// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_3d/proto/local_trajectory_builder_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_3d/proto/local_trajectory_builder_options.pb.h"

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
namespace mapping_3d {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* LocalTrajectoryBuilderOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  LocalTrajectoryBuilderOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_3d/proto/local_trajectory_builder_options.proto");
  GOOGLE_CHECK(file != NULL);
  LocalTrajectoryBuilderOptions_descriptor_ = file->message_type(0);
  static const int LocalTrajectoryBuilderOptions_offsets_[13] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, min_range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, max_range_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, scans_per_accumulation_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, voxel_filter_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, high_resolution_adaptive_voxel_filter_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, low_resolution_adaptive_voxel_filter_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, use_online_correlative_scan_matching_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, real_time_correlative_scan_matcher_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, ceres_scan_matcher_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, motion_filter_options_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, imu_gravity_time_constant_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, rotational_histogram_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, submaps_options_),
  };
  LocalTrajectoryBuilderOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      LocalTrajectoryBuilderOptions_descriptor_,
      LocalTrajectoryBuilderOptions::default_instance_,
      LocalTrajectoryBuilderOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(LocalTrajectoryBuilderOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(LocalTrajectoryBuilderOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    LocalTrajectoryBuilderOptions_descriptor_, &LocalTrajectoryBuilderOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
  delete LocalTrajectoryBuilderOptions::default_instance_;
  delete LocalTrajectoryBuilderOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping_3d::proto::protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fmotion_5ffilter_5foptions_2eproto();
  ::cartographer::sensor::proto::protobuf_AddDesc_cartographer_2fsensor_2fproto_2fadaptive_5fvoxel_5ffilter_5foptions_2eproto();
  ::cartographer::mapping_2d::scan_matching::proto::protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2freal_5ftime_5fcorrelative_5fscan_5fmatcher_5foptions_2eproto();
  ::cartographer::mapping_3d::proto::protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2fsubmaps_5foptions_2eproto();
  ::cartographer::mapping_3d::scan_matching::proto::protobuf_AddDesc_cartographer_2fmapping_5f3d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\nDcartographer/mapping_3d/proto/local_tr"
    "ajectory_builder_options.proto\022\035cartogra"
    "pher.mapping_3d.proto\0329cartographer/mapp"
    "ing_3d/proto/motion_filter_options.proto"
    "\032=cartographer/sensor/proto/adaptive_vox"
    "el_filter_options.proto\032\\cartographer/ma"
    "pping_2d/scan_matching/proto/real_time_c"
    "orrelative_scan_matcher_options.proto\0323c"
    "artographer/mapping_3d/proto/submaps_opt"
    "ions.proto\032Lcartographer/mapping_3d/scan"
    "_matching/proto/ceres_scan_matcher_optio"
    "ns.proto\"\335\006\n\035LocalTrajectoryBuilderOptio"
    "ns\022\021\n\tmin_range\030\001 \001(\002\022\021\n\tmax_range\030\002 \001(\002"
    "\022\036\n\026scans_per_accumulation\030\003 \001(\005\022\031\n\021voxe"
    "l_filter_size\030\004 \001(\002\022l\n-high_resolution_a"
    "daptive_voxel_filter_options\030\005 \001(\01325.car"
    "tographer.sensor.proto.AdaptiveVoxelFilt"
    "erOptions\022k\n,low_resolution_adaptive_vox"
    "el_filter_options\030\014 \001(\01325.cartographer.s"
    "ensor.proto.AdaptiveVoxelFilterOptions\022,"
    "\n$use_online_correlative_scan_matching\030\r"
    " \001(\010\022\206\001\n*real_time_correlative_scan_matc"
    "her_options\030\016 \001(\0132R.cartographer.mapping"
    "_2d.scan_matching.proto.RealTimeCorrelat"
    "iveScanMatcherOptions\022h\n\032ceres_scan_matc"
    "her_options\030\006 \001(\0132D.cartographer.mapping"
    "_3d.scan_matching.proto.CeresScanMatcher"
    "Options\022Q\n\025motion_filter_options\030\007 \001(\01322"
    ".cartographer.mapping_3d.proto.MotionFil"
    "terOptions\022!\n\031imu_gravity_time_constant\030"
    "\017 \001(\001\022!\n\031rotational_histogram_size\030\021 \001(\005"
    "\022F\n\017submaps_options\030\010 \001(\0132-.cartographer"
    ".mapping_3d.proto.SubmapsOptions", 1312);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_3d/proto/local_trajectory_builder_options.proto", &protobuf_RegisterTypes);
  LocalTrajectoryBuilderOptions::default_instance_ = new LocalTrajectoryBuilderOptions();
  LocalTrajectoryBuilderOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int LocalTrajectoryBuilderOptions::kMinRangeFieldNumber;
const int LocalTrajectoryBuilderOptions::kMaxRangeFieldNumber;
const int LocalTrajectoryBuilderOptions::kScansPerAccumulationFieldNumber;
const int LocalTrajectoryBuilderOptions::kVoxelFilterSizeFieldNumber;
const int LocalTrajectoryBuilderOptions::kHighResolutionAdaptiveVoxelFilterOptionsFieldNumber;
const int LocalTrajectoryBuilderOptions::kLowResolutionAdaptiveVoxelFilterOptionsFieldNumber;
const int LocalTrajectoryBuilderOptions::kUseOnlineCorrelativeScanMatchingFieldNumber;
const int LocalTrajectoryBuilderOptions::kRealTimeCorrelativeScanMatcherOptionsFieldNumber;
const int LocalTrajectoryBuilderOptions::kCeresScanMatcherOptionsFieldNumber;
const int LocalTrajectoryBuilderOptions::kMotionFilterOptionsFieldNumber;
const int LocalTrajectoryBuilderOptions::kImuGravityTimeConstantFieldNumber;
const int LocalTrajectoryBuilderOptions::kRotationalHistogramSizeFieldNumber;
const int LocalTrajectoryBuilderOptions::kSubmapsOptionsFieldNumber;
#endif  // !_MSC_VER

LocalTrajectoryBuilderOptions::LocalTrajectoryBuilderOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
}

void LocalTrajectoryBuilderOptions::InitAsDefaultInstance() {
  high_resolution_adaptive_voxel_filter_options_ = const_cast< ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions*>(&::cartographer::sensor::proto::AdaptiveVoxelFilterOptions::default_instance());
  low_resolution_adaptive_voxel_filter_options_ = const_cast< ::cartographer::sensor::proto::AdaptiveVoxelFilterOptions*>(&::cartographer::sensor::proto::AdaptiveVoxelFilterOptions::default_instance());
  real_time_correlative_scan_matcher_options_ = const_cast< ::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions*>(&::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions::default_instance());
  ceres_scan_matcher_options_ = const_cast< ::cartographer::mapping_3d::scan_matching::proto::CeresScanMatcherOptions*>(&::cartographer::mapping_3d::scan_matching::proto::CeresScanMatcherOptions::default_instance());
  motion_filter_options_ = const_cast< ::cartographer::mapping_3d::proto::MotionFilterOptions*>(&::cartographer::mapping_3d::proto::MotionFilterOptions::default_instance());
  submaps_options_ = const_cast< ::cartographer::mapping_3d::proto::SubmapsOptions*>(&::cartographer::mapping_3d::proto::SubmapsOptions::default_instance());
}

LocalTrajectoryBuilderOptions::LocalTrajectoryBuilderOptions(const LocalTrajectoryBuilderOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
}

void LocalTrajectoryBuilderOptions::SharedCtor() {
  _cached_size_ = 0;
  min_range_ = 0;
  max_range_ = 0;
  scans_per_accumulation_ = 0;
  voxel_filter_size_ = 0;
  high_resolution_adaptive_voxel_filter_options_ = NULL;
  low_resolution_adaptive_voxel_filter_options_ = NULL;
  use_online_correlative_scan_matching_ = false;
  real_time_correlative_scan_matcher_options_ = NULL;
  ceres_scan_matcher_options_ = NULL;
  motion_filter_options_ = NULL;
  imu_gravity_time_constant_ = 0;
  rotational_histogram_size_ = 0;
  submaps_options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

LocalTrajectoryBuilderOptions::~LocalTrajectoryBuilderOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  SharedDtor();
}

void LocalTrajectoryBuilderOptions::SharedDtor() {
  if (this != default_instance_) {
    delete high_resolution_adaptive_voxel_filter_options_;
    delete low_resolution_adaptive_voxel_filter_options_;
    delete real_time_correlative_scan_matcher_options_;
    delete ceres_scan_matcher_options_;
    delete motion_filter_options_;
    delete submaps_options_;
  }
}

void LocalTrajectoryBuilderOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* LocalTrajectoryBuilderOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return LocalTrajectoryBuilderOptions_descriptor_;
}

const LocalTrajectoryBuilderOptions& LocalTrajectoryBuilderOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f3d_2fproto_2flocal_5ftrajectory_5fbuilder_5foptions_2eproto();
  return *default_instance_;
}

LocalTrajectoryBuilderOptions* LocalTrajectoryBuilderOptions::default_instance_ = NULL;

LocalTrajectoryBuilderOptions* LocalTrajectoryBuilderOptions::New() const {
  return new LocalTrajectoryBuilderOptions;
}

void LocalTrajectoryBuilderOptions::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<LocalTrajectoryBuilderOptions*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(min_range_, voxel_filter_size_);
    if (has_high_resolution_adaptive_voxel_filter_options()) {
      if (high_resolution_adaptive_voxel_filter_options_ != NULL) high_resolution_adaptive_voxel_filter_options_->::cartographer::sensor::proto::AdaptiveVoxelFilterOptions::Clear();
    }
    if (has_low_resolution_adaptive_voxel_filter_options()) {
      if (low_resolution_adaptive_voxel_filter_options_ != NULL) low_resolution_adaptive_voxel_filter_options_->::cartographer::sensor::proto::AdaptiveVoxelFilterOptions::Clear();
    }
    use_online_correlative_scan_matching_ = false;
    if (has_real_time_correlative_scan_matcher_options()) {
      if (real_time_correlative_scan_matcher_options_ != NULL) real_time_correlative_scan_matcher_options_->::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions::Clear();
    }
  }
  if (_has_bits_[8 / 32] & 7936) {
    if (has_ceres_scan_matcher_options()) {
      if (ceres_scan_matcher_options_ != NULL) ceres_scan_matcher_options_->::cartographer::mapping_3d::scan_matching::proto::CeresScanMatcherOptions::Clear();
    }
    if (has_motion_filter_options()) {
      if (motion_filter_options_ != NULL) motion_filter_options_->::cartographer::mapping_3d::proto::MotionFilterOptions::Clear();
    }
    imu_gravity_time_constant_ = 0;
    rotational_histogram_size_ = 0;
    if (has_submaps_options()) {
      if (submaps_options_ != NULL) submaps_options_->::cartographer::mapping_3d::proto::SubmapsOptions::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool LocalTrajectoryBuilderOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float min_range = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &min_range_)));
          set_has_min_range();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(21)) goto parse_max_range;
        break;
      }

      // optional float max_range = 2;
      case 2: {
        if (tag == 21) {
         parse_max_range:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &max_range_)));
          set_has_max_range();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_scans_per_accumulation;
        break;
      }

      // optional int32 scans_per_accumulation = 3;
      case 3: {
        if (tag == 24) {
         parse_scans_per_accumulation:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &scans_per_accumulation_)));
          set_has_scans_per_accumulation();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(37)) goto parse_voxel_filter_size;
        break;
      }

      // optional float voxel_filter_size = 4;
      case 4: {
        if (tag == 37) {
         parse_voxel_filter_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &voxel_filter_size_)));
          set_has_voxel_filter_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_high_resolution_adaptive_voxel_filter_options;
        break;
      }

      // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions high_resolution_adaptive_voxel_filter_options = 5;
      case 5: {
        if (tag == 42) {
         parse_high_resolution_adaptive_voxel_filter_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_high_resolution_adaptive_voxel_filter_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_ceres_scan_matcher_options;
        break;
      }

      // optional .cartographer.mapping_3d.scan_matching.proto.CeresScanMatcherOptions ceres_scan_matcher_options = 6;
      case 6: {
        if (tag == 50) {
         parse_ceres_scan_matcher_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ceres_scan_matcher_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_motion_filter_options;
        break;
      }

      // optional .cartographer.mapping_3d.proto.MotionFilterOptions motion_filter_options = 7;
      case 7: {
        if (tag == 58) {
         parse_motion_filter_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_motion_filter_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(66)) goto parse_submaps_options;
        break;
      }

      // optional .cartographer.mapping_3d.proto.SubmapsOptions submaps_options = 8;
      case 8: {
        if (tag == 66) {
         parse_submaps_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_submaps_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(98)) goto parse_low_resolution_adaptive_voxel_filter_options;
        break;
      }

      // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions low_resolution_adaptive_voxel_filter_options = 12;
      case 12: {
        if (tag == 98) {
         parse_low_resolution_adaptive_voxel_filter_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_low_resolution_adaptive_voxel_filter_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(104)) goto parse_use_online_correlative_scan_matching;
        break;
      }

      // optional bool use_online_correlative_scan_matching = 13;
      case 13: {
        if (tag == 104) {
         parse_use_online_correlative_scan_matching:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_online_correlative_scan_matching_)));
          set_has_use_online_correlative_scan_matching();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(114)) goto parse_real_time_correlative_scan_matcher_options;
        break;
      }

      // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 14;
      case 14: {
        if (tag == 114) {
         parse_real_time_correlative_scan_matcher_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_real_time_correlative_scan_matcher_options()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(121)) goto parse_imu_gravity_time_constant;
        break;
      }

      // optional double imu_gravity_time_constant = 15;
      case 15: {
        if (tag == 121) {
         parse_imu_gravity_time_constant:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &imu_gravity_time_constant_)));
          set_has_imu_gravity_time_constant();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(136)) goto parse_rotational_histogram_size;
        break;
      }

      // optional int32 rotational_histogram_size = 17;
      case 17: {
        if (tag == 136) {
         parse_rotational_histogram_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &rotational_histogram_size_)));
          set_has_rotational_histogram_size();
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  return false;
#undef DO_
}

void LocalTrajectoryBuilderOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  // optional float min_range = 1;
  if (has_min_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->min_range(), output);
  }

  // optional float max_range = 2;
  if (has_max_range()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->max_range(), output);
  }

  // optional int32 scans_per_accumulation = 3;
  if (has_scans_per_accumulation()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->scans_per_accumulation(), output);
  }

  // optional float voxel_filter_size = 4;
  if (has_voxel_filter_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->voxel_filter_size(), output);
  }

  // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions high_resolution_adaptive_voxel_filter_options = 5;
  if (has_high_resolution_adaptive_voxel_filter_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      5, this->high_resolution_adaptive_voxel_filter_options(), output);
  }

  // optional .cartographer.mapping_3d.scan_matching.proto.CeresScanMatcherOptions ceres_scan_matcher_options = 6;
  if (has_ceres_scan_matcher_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      6, this->ceres_scan_matcher_options(), output);
  }

  // optional .cartographer.mapping_3d.proto.MotionFilterOptions motion_filter_options = 7;
  if (has_motion_filter_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      7, this->motion_filter_options(), output);
  }

  // optional .cartographer.mapping_3d.proto.SubmapsOptions submaps_options = 8;
  if (has_submaps_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      8, this->submaps_options(), output);
  }

  // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions low_resolution_adaptive_voxel_filter_options = 12;
  if (has_low_resolution_adaptive_voxel_filter_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      12, this->low_resolution_adaptive_voxel_filter_options(), output);
  }

  // optional bool use_online_correlative_scan_matching = 13;
  if (has_use_online_correlative_scan_matching()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(13, this->use_online_correlative_scan_matching(), output);
  }

  // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 14;
  if (has_real_time_correlative_scan_matcher_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      14, this->real_time_correlative_scan_matcher_options(), output);
  }

  // optional double imu_gravity_time_constant = 15;
  if (has_imu_gravity_time_constant()) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(15, this->imu_gravity_time_constant(), output);
  }

  // optional int32 rotational_histogram_size = 17;
  if (has_rotational_histogram_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(17, this->rotational_histogram_size(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
}

::google::protobuf::uint8* LocalTrajectoryBuilderOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  // optional float min_range = 1;
  if (has_min_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->min_range(), target);
  }

  // optional float max_range = 2;
  if (has_max_range()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(2, this->max_range(), target);
  }

  // optional int32 scans_per_accumulation = 3;
  if (has_scans_per_accumulation()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->scans_per_accumulation(), target);
  }

  // optional float voxel_filter_size = 4;
  if (has_voxel_filter_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(4, this->voxel_filter_size(), target);
  }

  // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions high_resolution_adaptive_voxel_filter_options = 5;
  if (has_high_resolution_adaptive_voxel_filter_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        5, this->high_resolution_adaptive_voxel_filter_options(), target);
  }

  // optional .cartographer.mapping_3d.scan_matching.proto.CeresScanMatcherOptions ceres_scan_matcher_options = 6;
  if (has_ceres_scan_matcher_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        6, this->ceres_scan_matcher_options(), target);
  }

  // optional .cartographer.mapping_3d.proto.MotionFilterOptions motion_filter_options = 7;
  if (has_motion_filter_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        7, this->motion_filter_options(), target);
  }

  // optional .cartographer.mapping_3d.proto.SubmapsOptions submaps_options = 8;
  if (has_submaps_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        8, this->submaps_options(), target);
  }

  // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions low_resolution_adaptive_voxel_filter_options = 12;
  if (has_low_resolution_adaptive_voxel_filter_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        12, this->low_resolution_adaptive_voxel_filter_options(), target);
  }

  // optional bool use_online_correlative_scan_matching = 13;
  if (has_use_online_correlative_scan_matching()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(13, this->use_online_correlative_scan_matching(), target);
  }

  // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 14;
  if (has_real_time_correlative_scan_matcher_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        14, this->real_time_correlative_scan_matcher_options(), target);
  }

  // optional double imu_gravity_time_constant = 15;
  if (has_imu_gravity_time_constant()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(15, this->imu_gravity_time_constant(), target);
  }

  // optional int32 rotational_histogram_size = 17;
  if (has_rotational_histogram_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(17, this->rotational_histogram_size(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions)
  return target;
}

int LocalTrajectoryBuilderOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional float min_range = 1;
    if (has_min_range()) {
      total_size += 1 + 4;
    }

    // optional float max_range = 2;
    if (has_max_range()) {
      total_size += 1 + 4;
    }

    // optional int32 scans_per_accumulation = 3;
    if (has_scans_per_accumulation()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->scans_per_accumulation());
    }

    // optional float voxel_filter_size = 4;
    if (has_voxel_filter_size()) {
      total_size += 1 + 4;
    }

    // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions high_resolution_adaptive_voxel_filter_options = 5;
    if (has_high_resolution_adaptive_voxel_filter_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->high_resolution_adaptive_voxel_filter_options());
    }

    // optional .cartographer.sensor.proto.AdaptiveVoxelFilterOptions low_resolution_adaptive_voxel_filter_options = 12;
    if (has_low_resolution_adaptive_voxel_filter_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->low_resolution_adaptive_voxel_filter_options());
    }

    // optional bool use_online_correlative_scan_matching = 13;
    if (has_use_online_correlative_scan_matching()) {
      total_size += 1 + 1;
    }

    // optional .cartographer.mapping_2d.scan_matching.proto.RealTimeCorrelativeScanMatcherOptions real_time_correlative_scan_matcher_options = 14;
    if (has_real_time_correlative_scan_matcher_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->real_time_correlative_scan_matcher_options());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional .cartographer.mapping_3d.scan_matching.proto.CeresScanMatcherOptions ceres_scan_matcher_options = 6;
    if (has_ceres_scan_matcher_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->ceres_scan_matcher_options());
    }

    // optional .cartographer.mapping_3d.proto.MotionFilterOptions motion_filter_options = 7;
    if (has_motion_filter_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->motion_filter_options());
    }

    // optional double imu_gravity_time_constant = 15;
    if (has_imu_gravity_time_constant()) {
      total_size += 1 + 8;
    }

    // optional int32 rotational_histogram_size = 17;
    if (has_rotational_histogram_size()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->rotational_histogram_size());
    }

    // optional .cartographer.mapping_3d.proto.SubmapsOptions submaps_options = 8;
    if (has_submaps_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->submaps_options());
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

void LocalTrajectoryBuilderOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const LocalTrajectoryBuilderOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const LocalTrajectoryBuilderOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void LocalTrajectoryBuilderOptions::MergeFrom(const LocalTrajectoryBuilderOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_min_range()) {
      set_min_range(from.min_range());
    }
    if (from.has_max_range()) {
      set_max_range(from.max_range());
    }
    if (from.has_scans_per_accumulation()) {
      set_scans_per_accumulation(from.scans_per_accumulation());
    }
    if (from.has_voxel_filter_size()) {
      set_voxel_filter_size(from.voxel_filter_size());
    }
    if (from.has_high_resolution_adaptive_voxel_filter_options()) {
      mutable_high_resolution_adaptive_voxel_filter_options()->::cartographer::sensor::proto::AdaptiveVoxelFilterOptions::MergeFrom(from.high_resolution_adaptive_voxel_filter_options());
    }
    if (from.has_low_resolution_adaptive_voxel_filter_options()) {
      mutable_low_resolution_adaptive_voxel_filter_options()->::cartographer::sensor::proto::AdaptiveVoxelFilterOptions::MergeFrom(from.low_resolution_adaptive_voxel_filter_options());
    }
    if (from.has_use_online_correlative_scan_matching()) {
      set_use_online_correlative_scan_matching(from.use_online_correlative_scan_matching());
    }
    if (from.has_real_time_correlative_scan_matcher_options()) {
      mutable_real_time_correlative_scan_matcher_options()->::cartographer::mapping_2d::scan_matching::proto::RealTimeCorrelativeScanMatcherOptions::MergeFrom(from.real_time_correlative_scan_matcher_options());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_ceres_scan_matcher_options()) {
      mutable_ceres_scan_matcher_options()->::cartographer::mapping_3d::scan_matching::proto::CeresScanMatcherOptions::MergeFrom(from.ceres_scan_matcher_options());
    }
    if (from.has_motion_filter_options()) {
      mutable_motion_filter_options()->::cartographer::mapping_3d::proto::MotionFilterOptions::MergeFrom(from.motion_filter_options());
    }
    if (from.has_imu_gravity_time_constant()) {
      set_imu_gravity_time_constant(from.imu_gravity_time_constant());
    }
    if (from.has_rotational_histogram_size()) {
      set_rotational_histogram_size(from.rotational_histogram_size());
    }
    if (from.has_submaps_options()) {
      mutable_submaps_options()->::cartographer::mapping_3d::proto::SubmapsOptions::MergeFrom(from.submaps_options());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void LocalTrajectoryBuilderOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void LocalTrajectoryBuilderOptions::CopyFrom(const LocalTrajectoryBuilderOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LocalTrajectoryBuilderOptions::IsInitialized() const {

  return true;
}

void LocalTrajectoryBuilderOptions::Swap(LocalTrajectoryBuilderOptions* other) {
  if (other != this) {
    std::swap(min_range_, other->min_range_);
    std::swap(max_range_, other->max_range_);
    std::swap(scans_per_accumulation_, other->scans_per_accumulation_);
    std::swap(voxel_filter_size_, other->voxel_filter_size_);
    std::swap(high_resolution_adaptive_voxel_filter_options_, other->high_resolution_adaptive_voxel_filter_options_);
    std::swap(low_resolution_adaptive_voxel_filter_options_, other->low_resolution_adaptive_voxel_filter_options_);
    std::swap(use_online_correlative_scan_matching_, other->use_online_correlative_scan_matching_);
    std::swap(real_time_correlative_scan_matcher_options_, other->real_time_correlative_scan_matcher_options_);
    std::swap(ceres_scan_matcher_options_, other->ceres_scan_matcher_options_);
    std::swap(motion_filter_options_, other->motion_filter_options_);
    std::swap(imu_gravity_time_constant_, other->imu_gravity_time_constant_);
    std::swap(rotational_histogram_size_, other->rotational_histogram_size_);
    std::swap(submaps_options_, other->submaps_options_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata LocalTrajectoryBuilderOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = LocalTrajectoryBuilderOptions_descriptor_;
  metadata.reflection = LocalTrajectoryBuilderOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_3d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
