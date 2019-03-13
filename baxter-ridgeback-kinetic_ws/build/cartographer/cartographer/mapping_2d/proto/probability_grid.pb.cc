// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/proto/probability_grid.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_2d/proto/probability_grid.pb.h"

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
namespace proto {

namespace {

const ::google::protobuf::Descriptor* ProbabilityGrid_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ProbabilityGrid_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping_2d/proto/probability_grid.proto");
  GOOGLE_CHECK(file != NULL);
  ProbabilityGrid_descriptor_ = file->message_type(0);
  static const int ProbabilityGrid_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, limits_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, cells_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, max_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, max_y_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, min_x_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, min_y_),
  };
  ProbabilityGrid_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ProbabilityGrid_descriptor_,
      ProbabilityGrid::default_instance_,
      ProbabilityGrid_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ProbabilityGrid, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ProbabilityGrid));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ProbabilityGrid_descriptor_, &ProbabilityGrid::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto() {
  delete ProbabilityGrid::default_instance_;
  delete ProbabilityGrid_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping_2d::proto::protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fmap_5flimits_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n4cartographer/mapping_2d/proto/probabil"
    "ity_grid.proto\022\035cartographer.mapping_2d."
    "proto\032.cartographer/mapping_2d/proto/map"
    "_limits.proto\"\226\001\n\017ProbabilityGrid\0228\n\006lim"
    "its\030\001 \001(\0132(.cartographer.mapping_2d.prot"
    "o.MapLimits\022\r\n\005cells\030\002 \003(\005\022\r\n\005max_x\030\004 \001("
    "\005\022\r\n\005max_y\030\005 \001(\005\022\r\n\005min_x\030\006 \001(\005\022\r\n\005min_y"
    "\030\007 \001(\005", 286);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_2d/proto/probability_grid.proto", &protobuf_RegisterTypes);
  ProbabilityGrid::default_instance_ = new ProbabilityGrid();
  ProbabilityGrid::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ProbabilityGrid::kLimitsFieldNumber;
const int ProbabilityGrid::kCellsFieldNumber;
const int ProbabilityGrid::kMaxXFieldNumber;
const int ProbabilityGrid::kMaxYFieldNumber;
const int ProbabilityGrid::kMinXFieldNumber;
const int ProbabilityGrid::kMinYFieldNumber;
#endif  // !_MSC_VER

ProbabilityGrid::ProbabilityGrid()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping_2d.proto.ProbabilityGrid)
}

void ProbabilityGrid::InitAsDefaultInstance() {
  limits_ = const_cast< ::cartographer::mapping_2d::proto::MapLimits*>(&::cartographer::mapping_2d::proto::MapLimits::default_instance());
}

ProbabilityGrid::ProbabilityGrid(const ProbabilityGrid& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping_2d.proto.ProbabilityGrid)
}

void ProbabilityGrid::SharedCtor() {
  _cached_size_ = 0;
  limits_ = NULL;
  max_x_ = 0;
  max_y_ = 0;
  min_x_ = 0;
  min_y_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ProbabilityGrid::~ProbabilityGrid() {
  // @@protoc_insertion_point(destructor:cartographer.mapping_2d.proto.ProbabilityGrid)
  SharedDtor();
}

void ProbabilityGrid::SharedDtor() {
  if (this != default_instance_) {
    delete limits_;
  }
}

void ProbabilityGrid::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ProbabilityGrid::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ProbabilityGrid_descriptor_;
}

const ProbabilityGrid& ProbabilityGrid::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_5f2d_2fproto_2fprobability_5fgrid_2eproto();
  return *default_instance_;
}

ProbabilityGrid* ProbabilityGrid::default_instance_ = NULL;

ProbabilityGrid* ProbabilityGrid::New() const {
  return new ProbabilityGrid;
}

void ProbabilityGrid::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ProbabilityGrid*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 61) {
    ZR_(max_x_, min_y_);
    if (has_limits()) {
      if (limits_ != NULL) limits_->::cartographer::mapping_2d::proto::MapLimits::Clear();
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  cells_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ProbabilityGrid::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping_2d.proto.ProbabilityGrid)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .cartographer.mapping_2d.proto.MapLimits limits = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_limits()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_cells;
        break;
      }

      // repeated int32 cells = 2;
      case 2: {
        if (tag == 16) {
         parse_cells:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 16, input, this->mutable_cells())));
        } else if (tag == 18) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_cells())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_cells;
        if (input->ExpectTag(32)) goto parse_max_x;
        break;
      }

      // optional int32 max_x = 4;
      case 4: {
        if (tag == 32) {
         parse_max_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_x_)));
          set_has_max_x();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_max_y;
        break;
      }

      // optional int32 max_y = 5;
      case 5: {
        if (tag == 40) {
         parse_max_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &max_y_)));
          set_has_max_y();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_min_x;
        break;
      }

      // optional int32 min_x = 6;
      case 6: {
        if (tag == 48) {
         parse_min_x:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_x_)));
          set_has_min_x();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(56)) goto parse_min_y;
        break;
      }

      // optional int32 min_y = 7;
      case 7: {
        if (tag == 56) {
         parse_min_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &min_y_)));
          set_has_min_y();
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
  // @@protoc_insertion_point(parse_success:cartographer.mapping_2d.proto.ProbabilityGrid)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping_2d.proto.ProbabilityGrid)
  return false;
#undef DO_
}

void ProbabilityGrid::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping_2d.proto.ProbabilityGrid)
  // optional .cartographer.mapping_2d.proto.MapLimits limits = 1;
  if (has_limits()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->limits(), output);
  }

  // repeated int32 cells = 2;
  for (int i = 0; i < this->cells_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      2, this->cells(i), output);
  }

  // optional int32 max_x = 4;
  if (has_max_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->max_x(), output);
  }

  // optional int32 max_y = 5;
  if (has_max_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->max_y(), output);
  }

  // optional int32 min_x = 6;
  if (has_min_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->min_x(), output);
  }

  // optional int32 min_y = 7;
  if (has_min_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->min_y(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping_2d.proto.ProbabilityGrid)
}

::google::protobuf::uint8* ProbabilityGrid::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping_2d.proto.ProbabilityGrid)
  // optional .cartographer.mapping_2d.proto.MapLimits limits = 1;
  if (has_limits()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->limits(), target);
  }

  // repeated int32 cells = 2;
  for (int i = 0; i < this->cells_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(2, this->cells(i), target);
  }

  // optional int32 max_x = 4;
  if (has_max_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->max_x(), target);
  }

  // optional int32 max_y = 5;
  if (has_max_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->max_y(), target);
  }

  // optional int32 min_x = 6;
  if (has_min_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->min_x(), target);
  }

  // optional int32 min_y = 7;
  if (has_min_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->min_y(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping_2d.proto.ProbabilityGrid)
  return target;
}

int ProbabilityGrid::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .cartographer.mapping_2d.proto.MapLimits limits = 1;
    if (has_limits()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->limits());
    }

    // optional int32 max_x = 4;
    if (has_max_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_x());
    }

    // optional int32 max_y = 5;
    if (has_max_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->max_y());
    }

    // optional int32 min_x = 6;
    if (has_min_x()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->min_x());
    }

    // optional int32 min_y = 7;
    if (has_min_y()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->min_y());
    }

  }
  // repeated int32 cells = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->cells_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->cells(i));
    }
    total_size += 1 * this->cells_size() + data_size;
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

void ProbabilityGrid::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ProbabilityGrid* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ProbabilityGrid*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ProbabilityGrid::MergeFrom(const ProbabilityGrid& from) {
  GOOGLE_CHECK_NE(&from, this);
  cells_.MergeFrom(from.cells_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_limits()) {
      mutable_limits()->::cartographer::mapping_2d::proto::MapLimits::MergeFrom(from.limits());
    }
    if (from.has_max_x()) {
      set_max_x(from.max_x());
    }
    if (from.has_max_y()) {
      set_max_y(from.max_y());
    }
    if (from.has_min_x()) {
      set_min_x(from.min_x());
    }
    if (from.has_min_y()) {
      set_min_y(from.min_y());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ProbabilityGrid::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ProbabilityGrid::CopyFrom(const ProbabilityGrid& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ProbabilityGrid::IsInitialized() const {

  return true;
}

void ProbabilityGrid::Swap(ProbabilityGrid* other) {
  if (other != this) {
    std::swap(limits_, other->limits_);
    cells_.Swap(&other->cells_);
    std::swap(max_x_, other->max_x_);
    std::swap(max_y_, other->max_y_);
    std::swap(min_x_, other->min_x_);
    std::swap(min_y_, other->min_y_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ProbabilityGrid::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ProbabilityGrid_descriptor_;
  metadata.reflection = ProbabilityGrid_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping_2d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)