// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/connected_components.proto

#ifndef PROTOBUF_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto__INCLUDED
#define PROTOBUF_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto__INCLUDED

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
namespace mapping {
namespace proto {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();

class ConnectedComponents;
class ConnectedComponents_ConnectedComponent;

// ===================================================================

class ConnectedComponents_ConnectedComponent : public ::google::protobuf::Message {
 public:
  ConnectedComponents_ConnectedComponent();
  virtual ~ConnectedComponents_ConnectedComponent();

  ConnectedComponents_ConnectedComponent(const ConnectedComponents_ConnectedComponent& from);

  inline ConnectedComponents_ConnectedComponent& operator=(const ConnectedComponents_ConnectedComponent& from) {
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
  static const ConnectedComponents_ConnectedComponent& default_instance();

  void Swap(ConnectedComponents_ConnectedComponent* other);

  // implements Message ----------------------------------------------

  ConnectedComponents_ConnectedComponent* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectedComponents_ConnectedComponent& from);
  void MergeFrom(const ConnectedComponents_ConnectedComponent& from);
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

  // repeated int32 trajectory_id = 1;
  inline int trajectory_id_size() const;
  inline void clear_trajectory_id();
  static const int kTrajectoryIdFieldNumber = 1;
  inline ::google::protobuf::int32 trajectory_id(int index) const;
  inline void set_trajectory_id(int index, ::google::protobuf::int32 value);
  inline void add_trajectory_id(::google::protobuf::int32 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
      trajectory_id() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
      mutable_trajectory_id();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int32 > trajectory_id_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();

  void InitAsDefaultInstance();
  static ConnectedComponents_ConnectedComponent* default_instance_;
};
// -------------------------------------------------------------------

class ConnectedComponents : public ::google::protobuf::Message {
 public:
  ConnectedComponents();
  virtual ~ConnectedComponents();

  ConnectedComponents(const ConnectedComponents& from);

  inline ConnectedComponents& operator=(const ConnectedComponents& from) {
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
  static const ConnectedComponents& default_instance();

  void Swap(ConnectedComponents* other);

  // implements Message ----------------------------------------------

  ConnectedComponents* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ConnectedComponents& from);
  void MergeFrom(const ConnectedComponents& from);
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

  typedef ConnectedComponents_ConnectedComponent ConnectedComponent;

  // accessors -------------------------------------------------------

  // repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
  inline int connected_component_size() const;
  inline void clear_connected_component();
  static const int kConnectedComponentFieldNumber = 1;
  inline const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& connected_component(int index) const;
  inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* mutable_connected_component(int index);
  inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* add_connected_component();
  inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >&
      connected_component() const;
  inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >*
      mutable_connected_component();

  // @@protoc_insertion_point(class_scope:cartographer.mapping.proto.ConnectedComponents)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent > connected_component_;
  friend void  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();
  friend void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto();

  void InitAsDefaultInstance();
  static ConnectedComponents* default_instance_;
};
// ===================================================================


// ===================================================================

// ConnectedComponents_ConnectedComponent

// repeated int32 trajectory_id = 1;
inline int ConnectedComponents_ConnectedComponent::trajectory_id_size() const {
  return trajectory_id_.size();
}
inline void ConnectedComponents_ConnectedComponent::clear_trajectory_id() {
  trajectory_id_.Clear();
}
inline ::google::protobuf::int32 ConnectedComponents_ConnectedComponent::trajectory_id(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return trajectory_id_.Get(index);
}
inline void ConnectedComponents_ConnectedComponent::set_trajectory_id(int index, ::google::protobuf::int32 value) {
  trajectory_id_.Set(index, value);
  // @@protoc_insertion_point(field_set:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
}
inline void ConnectedComponents_ConnectedComponent::add_trajectory_id(::google::protobuf::int32 value) {
  trajectory_id_.Add(value);
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int32 >&
ConnectedComponents_ConnectedComponent::trajectory_id() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return trajectory_id_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int32 >*
ConnectedComponents_ConnectedComponent::mutable_trajectory_id() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.ConnectedComponents.ConnectedComponent.trajectory_id)
  return &trajectory_id_;
}

// -------------------------------------------------------------------

// ConnectedComponents

// repeated .cartographer.mapping.proto.ConnectedComponents.ConnectedComponent connected_component = 1;
inline int ConnectedComponents::connected_component_size() const {
  return connected_component_.size();
}
inline void ConnectedComponents::clear_connected_component() {
  connected_component_.Clear();
}
inline const ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent& ConnectedComponents::connected_component(int index) const {
  // @@protoc_insertion_point(field_get:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Get(index);
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::mutable_connected_component(int index) {
  // @@protoc_insertion_point(field_mutable:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Mutable(index);
}
inline ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent* ConnectedComponents::add_connected_component() {
  // @@protoc_insertion_point(field_add:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >&
ConnectedComponents::connected_component() const {
  // @@protoc_insertion_point(field_list:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return connected_component_;
}
inline ::google::protobuf::RepeatedPtrField< ::cartographer::mapping::proto::ConnectedComponents_ConnectedComponent >*
ConnectedComponents::mutable_connected_component() {
  // @@protoc_insertion_point(field_mutable_list:cartographer.mapping.proto.ConnectedComponents.connected_component)
  return &connected_component_;
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

#endif  // PROTOBUF_cartographer_2fmapping_2fproto_2fconnected_5fcomponents_2eproto__INCLUDED
