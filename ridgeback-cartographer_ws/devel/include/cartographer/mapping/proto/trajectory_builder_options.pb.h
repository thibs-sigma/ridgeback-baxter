// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/trajectory_builder_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "cartographer/mapping_2d/proto/local_trajectory_builder_options.pb.h"
#include "cartographer/mapping_3d/proto/local_trajectory_builder_options.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();

class TrajectoryBuilderOptions;

// ===================================================================

class TrajectoryBuilderOptions : public ::google::protobuf::Message {
 public:
  TrajectoryBuilderOptions();
  virtual ~TrajectoryBuilderOptions();

  TrajectoryBuilderOptions(const TrajectoryBuilderOptions& from);

  inline TrajectoryBuilderOptions& operator=(const TrajectoryBuilderOptions& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrajectoryBuilderOptions& default_instance();

  void Swap(TrajectoryBuilderOptions* other);

  // implements Message ----------------------------------------------

  TrajectoryBuilderOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrajectoryBuilderOptions& from);
  void MergeFrom(const TrajectoryBuilderOptions& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
  inline bool has_trajectory_builder_2d_options() const;
  inline void clear_trajectory_builder_2d_options();
  static const int kTrajectoryBuilder2DOptionsFieldNumber = 1;
  inline const ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions& trajectory_builder_2d_options() const;
  inline ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* mutable_trajectory_builder_2d_options();
  inline ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* release_trajectory_builder_2d_options();
  inline void set_allocated_trajectory_builder_2d_options(::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_2d_options);

  // optional .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
  inline bool has_trajectory_builder_3d_options() const;
  inline void clear_trajectory_builder_3d_options();
  static const int kTrajectoryBuilder3DOptionsFieldNumber = 2;
  inline const ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions& trajectory_builder_3d_options() const;
  inline ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* mutable_trajectory_builder_3d_options();
  inline ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* release_trajectory_builder_3d_options();
  inline void set_allocated_trajectory_builder_3d_options(::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_3d_options);

  // optional bool pure_localization = 3;
  inline bool has_pure_localization() const;
  inline void clear_pure_localization();
  static const int kPureLocalizationFieldNumber = 3;
  inline bool pure_localization() const;
  inline void set_pure_localization(bool value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.TrajectoryBuilderOptions)
 private:
  inline void set_has_trajectory_builder_2d_options();
  inline void clear_has_trajectory_builder_2d_options();
  inline void set_has_trajectory_builder_3d_options();
  inline void clear_has_trajectory_builder_3d_options();
  inline void set_has_pure_localization();
  inline void clear_has_pure_localization();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_2d_options_;
  ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_3d_options_;
  bool pure_localization_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto();

  void InitAsDefaultInstance();
  static TrajectoryBuilderOptions* default_instance_;
};
// ===================================================================


// ===================================================================

// TrajectoryBuilderOptions

// optional .cartographer.mapping_2d.proto.LocalTrajectoryBuilderOptions trajectory_builder_2d_options = 1;
inline bool TrajectoryBuilderOptions::has_trajectory_builder_2d_options() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrajectoryBuilderOptions::set_has_trajectory_builder_2d_options() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TrajectoryBuilderOptions::clear_has_trajectory_builder_2d_options() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TrajectoryBuilderOptions::clear_trajectory_builder_2d_options() {
  if (trajectory_builder_2d_options_ != NULL) trajectory_builder_2d_options_->::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions::Clear();
  clear_has_trajectory_builder_2d_options();
}
inline const ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions& TrajectoryBuilderOptions::trajectory_builder_2d_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
  return trajectory_builder_2d_options_ != NULL ? *trajectory_builder_2d_options_ : *default_instance_->trajectory_builder_2d_options_;
}
inline ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::mutable_trajectory_builder_2d_options() {
  set_has_trajectory_builder_2d_options();
  if (trajectory_builder_2d_options_ == NULL) trajectory_builder_2d_options_ = new ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions;
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
  return trajectory_builder_2d_options_;
}
inline ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::release_trajectory_builder_2d_options() {
  clear_has_trajectory_builder_2d_options();
  ::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* temp = trajectory_builder_2d_options_;
  trajectory_builder_2d_options_ = NULL;
  return temp;
}
inline void TrajectoryBuilderOptions::set_allocated_trajectory_builder_2d_options(::cartographer::mapping_2d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_2d_options) {
  delete trajectory_builder_2d_options_;
  trajectory_builder_2d_options_ = trajectory_builder_2d_options;
  if (trajectory_builder_2d_options) {
    set_has_trajectory_builder_2d_options();
  } else {
    clear_has_trajectory_builder_2d_options();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_2d_options)
}

// optional .cartographer.mapping_3d.proto.LocalTrajectoryBuilderOptions trajectory_builder_3d_options = 2;
inline bool TrajectoryBuilderOptions::has_trajectory_builder_3d_options() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TrajectoryBuilderOptions::set_has_trajectory_builder_3d_options() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TrajectoryBuilderOptions::clear_has_trajectory_builder_3d_options() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TrajectoryBuilderOptions::clear_trajectory_builder_3d_options() {
  if (trajectory_builder_3d_options_ != NULL) trajectory_builder_3d_options_->::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions::Clear();
  clear_has_trajectory_builder_3d_options();
}
inline const ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions& TrajectoryBuilderOptions::trajectory_builder_3d_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
  return trajectory_builder_3d_options_ != NULL ? *trajectory_builder_3d_options_ : *default_instance_->trajectory_builder_3d_options_;
}
inline ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::mutable_trajectory_builder_3d_options() {
  set_has_trajectory_builder_3d_options();
  if (trajectory_builder_3d_options_ == NULL) trajectory_builder_3d_options_ = new ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions;
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
  return trajectory_builder_3d_options_;
}
inline ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* TrajectoryBuilderOptions::release_trajectory_builder_3d_options() {
  clear_has_trajectory_builder_3d_options();
  ::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* temp = trajectory_builder_3d_options_;
  trajectory_builder_3d_options_ = NULL;
  return temp;
}
inline void TrajectoryBuilderOptions::set_allocated_trajectory_builder_3d_options(::cartographer::mapping_3d::proto::LocalTrajectoryBuilderOptions* trajectory_builder_3d_options) {
  delete trajectory_builder_3d_options_;
  trajectory_builder_3d_options_ = trajectory_builder_3d_options;
  if (trajectory_builder_3d_options) {
    set_has_trajectory_builder_3d_options();
  } else {
    clear_has_trajectory_builder_3d_options();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping.proto.TrajectoryBuilderOptions.trajectory_builder_3d_options)
}

// optional bool pure_localization = 3;
inline bool TrajectoryBuilderOptions::has_pure_localization() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TrajectoryBuilderOptions::set_has_pure_localization() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TrajectoryBuilderOptions::clear_has_pure_localization() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TrajectoryBuilderOptions::clear_pure_localization() {
  pure_localization_ = false;
  clear_has_pure_localization();
}
inline bool TrajectoryBuilderOptions::pure_localization() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.TrajectoryBuilderOptions.pure_localization)
  return pure_localization_;
}
inline void TrajectoryBuilderOptions::set_pure_localization(bool value) {
  set_has_pure_localization();
  pure_localization_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.TrajectoryBuilderOptions.pure_localization)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2ftrajectory_5fbuilder_5foptions_2eproto__INCLUDED
