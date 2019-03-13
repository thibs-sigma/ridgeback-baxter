// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/proto/cell_limits.proto

#ifndef PROTOBUF_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto__INCLUDED

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
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_2d {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto();

class CellLimits;

// ===================================================================

class CellLimits : public ::google::protobuf::Message {
 public:
  CellLimits();
  virtual ~CellLimits();

  CellLimits(const CellLimits& from);

  inline CellLimits& operator=(const CellLimits& from) {
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
  static const CellLimits& default_instance();

  void Swap(CellLimits* other);

  // implements Message ----------------------------------------------

  CellLimits* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CellLimits& from);
  void MergeFrom(const CellLimits& from);
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

  // optional int32 num_x_cells = 1;
  inline bool has_num_x_cells() const;
  inline void clear_num_x_cells();
  static const int kNumXCellsFieldNumber = 1;
  inline ::google::protobuf::int32 num_x_cells() const;
  inline void set_num_x_cells(::google::protobuf::int32 value);

  // optional int32 num_y_cells = 2;
  inline bool has_num_y_cells() const;
  inline void clear_num_y_cells();
  static const int kNumYCellsFieldNumber = 2;
  inline ::google::protobuf::int32 num_y_cells() const;
  inline void set_num_y_cells(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:cartographer.mapping_2d.proto.CellLimits)
 private:
  inline void set_has_num_x_cells();
  inline void clear_has_num_x_cells();
  inline void set_has_num_y_cells();
  inline void clear_has_num_y_cells();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 num_x_cells_;
  ::google::protobuf::int32 num_y_cells_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto();

  void InitAsDefaultInstance();
  static CellLimits* default_instance_;
};
// ===================================================================


// ===================================================================

// CellLimits

// optional int32 num_x_cells = 1;
inline bool CellLimits::has_num_x_cells() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CellLimits::set_has_num_x_cells() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CellLimits::clear_has_num_x_cells() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CellLimits::clear_num_x_cells() {
  num_x_cells_ = 0;
  clear_has_num_x_cells();
}
inline ::google::protobuf::int32 CellLimits::num_x_cells() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.proto.CellLimits.num_x_cells)
  return num_x_cells_;
}
inline void CellLimits::set_num_x_cells(::google::protobuf::int32 value) {
  set_has_num_x_cells();
  num_x_cells_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.proto.CellLimits.num_x_cells)
}

// optional int32 num_y_cells = 2;
inline bool CellLimits::has_num_y_cells() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CellLimits::set_has_num_y_cells() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CellLimits::clear_has_num_y_cells() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CellLimits::clear_num_y_cells() {
  num_y_cells_ = 0;
  clear_has_num_y_cells();
}
inline ::google::protobuf::int32 CellLimits::num_y_cells() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.proto.CellLimits.num_y_cells)
  return num_y_cells_;
}
inline void CellLimits::set_num_y_cells(::google::protobuf::int32 value) {
  set_has_num_y_cells();
  num_y_cells_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.proto.CellLimits.num_y_cells)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_2d
}  // namespace cartographer

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_cartographer_2fmapping_5f2d_2fproto_2fcell_5flimits_2eproto__INCLUDED