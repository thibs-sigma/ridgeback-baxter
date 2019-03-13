// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/ground_truth/proto/relations.proto

#ifndef PROTOBUF_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto__INCLUDED

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
#include "cartographer/transform/proto/transform.pb.h"
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace ground_truth {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();
void protobuf_AssignDesc_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();
void protobuf_ShutdownFile_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();

class Relation;
class GroundTruth;

// ===================================================================

class Relation : public ::google::protobuf::Message {
 public:
  Relation();
  virtual ~Relation();

  Relation(const Relation& from);

  inline Relation& operator=(const Relation& from) {
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
  static const Relation& default_instance();

  void Swap(Relation* other);

  // implements Message ----------------------------------------------

  Relation* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Relation& from);
  void MergeFrom(const Relation& from);
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

  // optional int64 timestamp1 = 1;
  inline bool has_timestamp1() const;
  inline void clear_timestamp1();
  static const int kTimestamp1FieldNumber = 1;
  inline ::google::protobuf::int64 timestamp1() const;
  inline void set_timestamp1(::google::protobuf::int64 value);

  // optional int64 timestamp2 = 2;
  inline bool has_timestamp2() const;
  inline void clear_timestamp2();
  static const int kTimestamp2FieldNumber = 2;
  inline ::google::protobuf::int64 timestamp2() const;
  inline void set_timestamp2(::google::protobuf::int64 value);

  // optional .cartographer.transform.proto.Rigid3d expected = 3;
  inline bool has_expected() const;
  inline void clear_expected();
  static const int kExpectedFieldNumber = 3;
  inline const ::cartographer::transform::proto::Rigid3d& expected() const;
  inline ::cartographer::transform::proto::Rigid3d* mutable_expected();
  inline ::cartographer::transform::proto::Rigid3d* release_expected();
  inline void set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected);

  // @@protoc_insertion_point(class_scope:cartographer.ground_truth.proto.Relation)
 private:
  inline void set_has_timestamp1();
  inline void clear_has_timestamp1();
  inline void set_has_timestamp2();
  inline void clear_has_timestamp2();
  inline void set_has_expected();
  inline void clear_has_expected();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 timestamp1_;
  ::google::protobuf::int64 timestamp2_;
  ::cartographer::transform::proto::Rigid3d* expected_;
  friend void  protobuf_AddDesc_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();

  void InitAsDefaultInstance();
  static Relation* default_instance_;
};
// -------------------------------------------------------------------

class GroundTruth : public ::google::protobuf::Message {
 public:
  GroundTruth();
  virtual ~GroundTruth();

  GroundTruth(const GroundTruth& from);

  inline GroundTruth& operator=(const GroundTruth& from) {
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
  static const GroundTruth& default_instance();

  void Swap(GroundTruth* other);

  // implements Message ----------------------------------------------

  GroundTruth* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GroundTruth& from);
  void MergeFrom(const GroundTruth& from);
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

  // repeated .cartographer.ground_truth.proto.Relation relation = 1;
  inline int relation_size() const;
  inline void clear_relation();
  static const int kRelationFieldNumber = 1;
  inline const ::cartographer::ground_truth::proto::Relation& relation(int index) const;
  inline ::cartographer::ground_truth::proto::Relation* mutable_relation(int index);
  inline ::cartographer::ground_truth::proto::Relation* add_relation();
  inline const ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
      relation() const;
  inline ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
      mutable_relation();

  // @@protoc_insertion_point(class_scope:cartographer.ground_truth.proto.GroundTruth)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation > relation_;
  friend void  protobuf_AddDesc_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto();

  void InitAsDefaultInstance();
  static GroundTruth* default_instance_;
};
// ===================================================================


// ===================================================================

// Relation

// optional int64 timestamp1 = 1;
inline bool Relation::has_timestamp1() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Relation::set_has_timestamp1() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Relation::clear_has_timestamp1() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Relation::clear_timestamp1() {
  timestamp1_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp1();
}
inline ::google::protobuf::int64 Relation::timestamp1() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp1)
  return timestamp1_;
}
inline void Relation::set_timestamp1(::google::protobuf::int64 value) {
  set_has_timestamp1();
  timestamp1_ = value;
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp1)
}

// optional int64 timestamp2 = 2;
inline bool Relation::has_timestamp2() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Relation::set_has_timestamp2() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Relation::clear_has_timestamp2() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Relation::clear_timestamp2() {
  timestamp2_ = GOOGLE_LONGLONG(0);
  clear_has_timestamp2();
}
inline ::google::protobuf::int64 Relation::timestamp2() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.timestamp2)
  return timestamp2_;
}
inline void Relation::set_timestamp2(::google::protobuf::int64 value) {
  set_has_timestamp2();
  timestamp2_ = value;
  // @@protoc_insertion_point(field_set:cartographer.ground_truth.proto.Relation.timestamp2)
}

// optional .cartographer.transform.proto.Rigid3d expected = 3;
inline bool Relation::has_expected() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Relation::set_has_expected() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Relation::clear_has_expected() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Relation::clear_expected() {
  if (expected_ != NULL) expected_->::cartographer::transform::proto::Rigid3d::Clear();
  clear_has_expected();
}
inline const ::cartographer::transform::proto::Rigid3d& Relation::expected() const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.Relation.expected)
  return expected_ != NULL ? *expected_ : *default_instance_->expected_;
}
inline ::cartographer::transform::proto::Rigid3d* Relation::mutable_expected() {
  set_has_expected();
  if (expected_ == NULL) expected_ = new ::cartographer::transform::proto::Rigid3d;
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.Relation.expected)
  return expected_;
}
inline ::cartographer::transform::proto::Rigid3d* Relation::release_expected() {
  clear_has_expected();
  ::cartographer::transform::proto::Rigid3d* temp = expected_;
  expected_ = NULL;
  return temp;
}
inline void Relation::set_allocated_expected(::cartographer::transform::proto::Rigid3d* expected) {
  delete expected_;
  expected_ = expected;
  if (expected) {
    set_has_expected();
  } else {
    clear_has_expected();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.ground_truth.proto.Relation.expected)
}

// -------------------------------------------------------------------

// GroundTruth

// repeated .cartographer.ground_truth.proto.Relation relation = 1;
inline int GroundTruth::relation_size() const {
  return relation_.size();
}
inline void GroundTruth::clear_relation() {
  relation_.Clear();
}
inline const ::cartographer::ground_truth::proto::Relation& GroundTruth::relation(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Get(index);
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::mutable_relation(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Mutable(index);
}
inline ::cartographer::ground_truth::proto::Relation* GroundTruth::add_relation() {
  // @@protoc_insertion_point(field_add:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >&
GroundTruth::relation() const {
  // @@protoc_insertion_point(field_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return relation_;
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::ground_truth::proto::Relation >*
GroundTruth::mutable_relation() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.ground_truth.proto.GroundTruth.relation)
  return &relation_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace ground_truth
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fground_5ftruth_2fproto_2frelations_2eproto__INCLUDED