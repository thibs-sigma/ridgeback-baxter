// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto

#ifndef PROTOBUF_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto__INCLUDED

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
#include "cartographer/common/proto/ceres_solver_options.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_2d {
namespace scan_matching {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();

class CeresScanMatcherOptions;

// ===================================================================

class CeresScanMatcherOptions : public ::google::protobuf::Message {
 public:
  CeresScanMatcherOptions();
  virtual ~CeresScanMatcherOptions();

  CeresScanMatcherOptions(const CeresScanMatcherOptions& from);

  inline CeresScanMatcherOptions& operator=(const CeresScanMatcherOptions& from) {
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
  static const CeresScanMatcherOptions& default_instance();

  void Swap(CeresScanMatcherOptions* other);

  // implements Message ----------------------------------------------

  CeresScanMatcherOptions* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CeresScanMatcherOptions& from);
  void MergeFrom(const CeresScanMatcherOptions& from);
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

  // optional double occupied_space_weight = 1;
  inline bool has_occupied_space_weight() const;
  inline void clear_occupied_space_weight();
  static const int kOccupiedSpaceWeightFieldNumber = 1;
  inline double occupied_space_weight() const;
  inline void set_occupied_space_weight(double value);

  // optional double translation_weight = 2;
  inline bool has_translation_weight() const;
  inline void clear_translation_weight();
  static const int kTranslationWeightFieldNumber = 2;
  inline double translation_weight() const;
  inline void set_translation_weight(double value);

  // optional double rotation_weight = 3;
  inline bool has_rotation_weight() const;
  inline void clear_rotation_weight();
  static const int kRotationWeightFieldNumber = 3;
  inline double rotation_weight() const;
  inline void set_rotation_weight(double value);

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
  inline bool has_ceres_solver_options() const;
  inline void clear_ceres_solver_options();
  static const int kCeresSolverOptionsFieldNumber = 9;
  inline const ::cartographer::common::proto::CeresSolverOptions& ceres_solver_options() const;
  inline ::cartographer::common::proto::CeresSolverOptions* mutable_ceres_solver_options();
  inline ::cartographer::common::proto::CeresSolverOptions* release_ceres_solver_options();
  inline void set_allocated_ceres_solver_options(::cartographer::common::proto::CeresSolverOptions* ceres_solver_options);

  // @@protoc_insertion_point(class_scope:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
 private:
  inline void set_has_occupied_space_weight();
  inline void clear_has_occupied_space_weight();
  inline void set_has_translation_weight();
  inline void clear_has_translation_weight();
  inline void set_has_rotation_weight();
  inline void clear_has_rotation_weight();
  inline void set_has_ceres_solver_options();
  inline void clear_has_ceres_solver_options();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  double occupied_space_weight_;
  double translation_weight_;
  double rotation_weight_;
  ::cartographer::common::proto::CeresSolverOptions* ceres_solver_options_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto();

  void InitAsDefaultInstance();
  static CeresScanMatcherOptions* default_instance_;
};
// ===================================================================


// ===================================================================

// CeresScanMatcherOptions

// optional double occupied_space_weight = 1;
inline bool CeresScanMatcherOptions::has_occupied_space_weight() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CeresScanMatcherOptions::set_has_occupied_space_weight() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CeresScanMatcherOptions::clear_has_occupied_space_weight() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CeresScanMatcherOptions::clear_occupied_space_weight() {
  occupied_space_weight_ = 0;
  clear_has_occupied_space_weight();
}
inline double CeresScanMatcherOptions::occupied_space_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.occupied_space_weight)
  return occupied_space_weight_;
}
inline void CeresScanMatcherOptions::set_occupied_space_weight(double value) {
  set_has_occupied_space_weight();
  occupied_space_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.occupied_space_weight)
}

// optional double translation_weight = 2;
inline bool CeresScanMatcherOptions::has_translation_weight() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CeresScanMatcherOptions::set_has_translation_weight() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CeresScanMatcherOptions::clear_has_translation_weight() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CeresScanMatcherOptions::clear_translation_weight() {
  translation_weight_ = 0;
  clear_has_translation_weight();
}
inline double CeresScanMatcherOptions::translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.translation_weight)
  return translation_weight_;
}
inline void CeresScanMatcherOptions::set_translation_weight(double value) {
  set_has_translation_weight();
  translation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.translation_weight)
}

// optional double rotation_weight = 3;
inline bool CeresScanMatcherOptions::has_rotation_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CeresScanMatcherOptions::set_has_rotation_weight() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CeresScanMatcherOptions::clear_has_rotation_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CeresScanMatcherOptions::clear_rotation_weight() {
  rotation_weight_ = 0;
  clear_has_rotation_weight();
}
inline double CeresScanMatcherOptions::rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.rotation_weight)
  return rotation_weight_;
}
inline void CeresScanMatcherOptions::set_rotation_weight(double value) {
  set_has_rotation_weight();
  rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.rotation_weight)
}

// optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
inline bool CeresScanMatcherOptions::has_ceres_solver_options() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CeresScanMatcherOptions::set_has_ceres_solver_options() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CeresScanMatcherOptions::clear_has_ceres_solver_options() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CeresScanMatcherOptions::clear_ceres_solver_options() {
  if (ceres_solver_options_ != NULL) ceres_solver_options_->::cartographer::common::proto::CeresSolverOptions::Clear();
  clear_has_ceres_solver_options();
}
inline const ::cartographer::common::proto::CeresSolverOptions& CeresScanMatcherOptions::ceres_solver_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
  return ceres_solver_options_ != NULL ? *ceres_solver_options_ : *default_instance_->ceres_solver_options_;
}
inline ::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions::mutable_ceres_solver_options() {
  set_has_ceres_solver_options();
  if (ceres_solver_options_ == NULL) ceres_solver_options_ = new ::cartographer::common::proto::CeresSolverOptions;
  // @@protoc_insertion_point(field_mutable:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
  return ceres_solver_options_;
}
inline ::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions::release_ceres_solver_options() {
  clear_has_ceres_solver_options();
  ::cartographer::common::proto::CeresSolverOptions* temp = ceres_solver_options_;
  ceres_solver_options_ = NULL;
  return temp;
}
inline void CeresScanMatcherOptions::set_allocated_ceres_solver_options(::cartographer::common::proto::CeresSolverOptions* ceres_solver_options) {
  delete ceres_solver_options_;
  ceres_solver_options_ = ceres_solver_options;
  if (ceres_solver_options) {
    set_has_ceres_solver_options();
  } else {
    clear_has_ceres_solver_options();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping_2d
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto__INCLUDED
