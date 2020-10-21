// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: object_detection/protos/graph_rewriter.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "object_detection/protos/graph_rewriter.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace object_detection {
namespace protos {
class GraphRewriterDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<GraphRewriter>
     _instance;
} _GraphRewriter_default_instance_;
class QuantizationDefaultTypeInternal {
public:
 ::google::protobuf::internal::ExplicitlyConstructed<Quantization>
     _instance;
} _Quantization_default_instance_;

namespace protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[2];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
  { NULL, NULL, 0, -1, -1, -1, -1, NULL, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphRewriter, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphRewriter, _internal_metadata_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphRewriter, _extensions_),
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GraphRewriter, quantization_),
  0,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quantization, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quantization, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quantization, delay_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quantization, weight_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quantization, activation_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Quantization, symmetric_),
  2,
  3,
  1,
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 6, sizeof(GraphRewriter)},
  { 7, 16, sizeof(Quantization)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_GraphRewriter_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&_Quantization_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "object_detection/protos/graph_rewriter.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

}  // namespace
void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _GraphRewriter_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_GraphRewriter_default_instance_);_Quantization_default_instance_._instance.DefaultConstruct();
  ::google::protobuf::internal::OnShutdownDestroyMessage(
      &_Quantization_default_instance_);_GraphRewriter_default_instance_._instance.get_mutable()->quantization_ = const_cast< ::object_detection::protos::Quantization*>(
      ::object_detection::protos::Quantization::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
namespace {
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n,object_detection/protos/graph_rewriter"
      ".proto\022\027object_detection.protos\"W\n\rGraph"
      "Rewriter\022;\n\014quantization\030\001 \001(\0132%.object_"
      "detection.protos.Quantization*\t\010\350\007\020\200\200\200\200\002"
      "\"s\n\014Quantization\022\025\n\005delay\030\001 \001(\005:\006500000\022"
      "\026\n\013weight_bits\030\002 \001(\005:\0018\022\032\n\017activation_bi"
      "ts\030\003 \001(\005:\0018\022\030\n\tsymmetric\030\004 \001(\010:\005false"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 277);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "object_detection/protos/graph_rewriter.proto", &protobuf_RegisterTypes);
}
} // anonymous namespace

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int GraphRewriter::kQuantizationFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

GraphRewriter::GraphRewriter()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.GraphRewriter)
}
GraphRewriter::GraphRewriter(const GraphRewriter& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  _extensions_.MergeFrom(from._extensions_);
  if (from.has_quantization()) {
    quantization_ = new ::object_detection::protos::Quantization(*from.quantization_);
  } else {
    quantization_ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.GraphRewriter)
}

void GraphRewriter::SharedCtor() {
  _cached_size_ = 0;
  quantization_ = NULL;
}

GraphRewriter::~GraphRewriter() {
  // @@protoc_insertion_point(destructor:object_detection.protos.GraphRewriter)
  SharedDtor();
}

void GraphRewriter::SharedDtor() {
  if (this != internal_default_instance()) delete quantization_;
}

void GraphRewriter::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GraphRewriter::descriptor() {
  protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const GraphRewriter& GraphRewriter::default_instance() {
  protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::InitDefaults();
  return *internal_default_instance();
}

GraphRewriter* GraphRewriter::New(::google::protobuf::Arena* arena) const {
  GraphRewriter* n = new GraphRewriter;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void GraphRewriter::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.GraphRewriter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _extensions_.Clear();
  if (has_quantization()) {
    GOOGLE_DCHECK(quantization_ != NULL);
    quantization_->::object_detection::protos::Quantization::Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool GraphRewriter::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.GraphRewriter)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .object_detection.protos.Quantization quantization = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_quantization()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        if ((8000u <= tag)) {
          DO_(_extensions_.ParseField(tag, input,
              internal_default_instance(),
              _internal_metadata_.mutable_unknown_fields()));
          continue;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:object_detection.protos.GraphRewriter)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.GraphRewriter)
  return false;
#undef DO_
}

void GraphRewriter::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.GraphRewriter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .object_detection.protos.Quantization quantization = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, *this->quantization_, output);
  }

  // Extension range [1000, 536870912)
  _extensions_.SerializeWithCachedSizes(
      1000, 536870912, output);

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.GraphRewriter)
}

::google::protobuf::uint8* GraphRewriter::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.GraphRewriter)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .object_detection.protos.Quantization quantization = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        1, *this->quantization_, deterministic, target);
  }

  // Extension range [1000, 536870912)
  target = _extensions_.InternalSerializeWithCachedSizesToArray(
      1000, 536870912, deterministic, target);

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.GraphRewriter)
  return target;
}

size_t GraphRewriter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.GraphRewriter)
  size_t total_size = 0;

  total_size += _extensions_.ByteSize();

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional .object_detection.protos.Quantization quantization = 1;
  if (has_quantization()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->quantization_);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GraphRewriter::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.GraphRewriter)
  GOOGLE_DCHECK_NE(&from, this);
  const GraphRewriter* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const GraphRewriter>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.GraphRewriter)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.GraphRewriter)
    MergeFrom(*source);
  }
}

void GraphRewriter::MergeFrom(const GraphRewriter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.GraphRewriter)
  GOOGLE_DCHECK_NE(&from, this);
  _extensions_.MergeFrom(from._extensions_);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_quantization()) {
    mutable_quantization()->::object_detection::protos::Quantization::MergeFrom(from.quantization());
  }
}

void GraphRewriter::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.GraphRewriter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GraphRewriter::CopyFrom(const GraphRewriter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.GraphRewriter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GraphRewriter::IsInitialized() const {
  if (!_extensions_.IsInitialized()) {
    return false;
  }

  return true;
}

void GraphRewriter::Swap(GraphRewriter* other) {
  if (other == this) return;
  InternalSwap(other);
}
void GraphRewriter::InternalSwap(GraphRewriter* other) {
  using std::swap;
  swap(quantization_, other->quantization_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
  _extensions_.Swap(&other->_extensions_);
}

::google::protobuf::Metadata GraphRewriter::GetMetadata() const {
  protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// GraphRewriter

// optional .object_detection.protos.Quantization quantization = 1;
bool GraphRewriter::has_quantization() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void GraphRewriter::set_has_quantization() {
  _has_bits_[0] |= 0x00000001u;
}
void GraphRewriter::clear_has_quantization() {
  _has_bits_[0] &= ~0x00000001u;
}
void GraphRewriter::clear_quantization() {
  if (quantization_ != NULL) quantization_->::object_detection::protos::Quantization::Clear();
  clear_has_quantization();
}
const ::object_detection::protos::Quantization& GraphRewriter::quantization() const {
  const ::object_detection::protos::Quantization* p = quantization_;
  // @@protoc_insertion_point(field_get:object_detection.protos.GraphRewriter.quantization)
  return p != NULL ? *p : *reinterpret_cast<const ::object_detection::protos::Quantization*>(
      &::object_detection::protos::_Quantization_default_instance_);
}
::object_detection::protos::Quantization* GraphRewriter::mutable_quantization() {
  set_has_quantization();
  if (quantization_ == NULL) {
    quantization_ = new ::object_detection::protos::Quantization;
  }
  // @@protoc_insertion_point(field_mutable:object_detection.protos.GraphRewriter.quantization)
  return quantization_;
}
::object_detection::protos::Quantization* GraphRewriter::release_quantization() {
  // @@protoc_insertion_point(field_release:object_detection.protos.GraphRewriter.quantization)
  clear_has_quantization();
  ::object_detection::protos::Quantization* temp = quantization_;
  quantization_ = NULL;
  return temp;
}
void GraphRewriter::set_allocated_quantization(::object_detection::protos::Quantization* quantization) {
  delete quantization_;
  quantization_ = quantization;
  if (quantization) {
    set_has_quantization();
  } else {
    clear_has_quantization();
  }
  // @@protoc_insertion_point(field_set_allocated:object_detection.protos.GraphRewriter.quantization)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Quantization::kDelayFieldNumber;
const int Quantization::kWeightBitsFieldNumber;
const int Quantization::kActivationBitsFieldNumber;
const int Quantization::kSymmetricFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Quantization::Quantization()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:object_detection.protos.Quantization)
}
Quantization::Quantization(const Quantization& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::memcpy(&symmetric_, &from.symmetric_,
    static_cast<size_t>(reinterpret_cast<char*>(&weight_bits_) -
    reinterpret_cast<char*>(&symmetric_)) + sizeof(weight_bits_));
  // @@protoc_insertion_point(copy_constructor:object_detection.protos.Quantization)
}

void Quantization::SharedCtor() {
  _cached_size_ = 0;
  symmetric_ = false;
  activation_bits_ = 8;
  delay_ = 500000;
  weight_bits_ = 8;
}

Quantization::~Quantization() {
  // @@protoc_insertion_point(destructor:object_detection.protos.Quantization)
  SharedDtor();
}

void Quantization::SharedDtor() {
}

void Quantization::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Quantization::descriptor() {
  protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const Quantization& Quantization::default_instance() {
  protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::InitDefaults();
  return *internal_default_instance();
}

Quantization* Quantization::New(::google::protobuf::Arena* arena) const {
  Quantization* n = new Quantization;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Quantization::Clear() {
// @@protoc_insertion_point(message_clear_start:object_detection.protos.Quantization)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 15u) {
    symmetric_ = false;
    activation_bits_ = 8;
    delay_ = 500000;
    weight_bits_ = 8;
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool Quantization::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:object_detection.protos.Quantization)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 delay = 1 [default = 500000];
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_delay();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &delay_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 weight_bits = 2 [default = 8];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_weight_bits();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &weight_bits_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 activation_bits = 3 [default = 8];
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_activation_bits();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &activation_bits_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool symmetric = 4 [default = false];
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          set_has_symmetric();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &symmetric_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:object_detection.protos.Quantization)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:object_detection.protos.Quantization)
  return false;
#undef DO_
}

void Quantization::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:object_detection.protos.Quantization)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 delay = 1 [default = 500000];
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->delay(), output);
  }

  // optional int32 weight_bits = 2 [default = 8];
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->weight_bits(), output);
  }

  // optional int32 activation_bits = 3 [default = 8];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->activation_bits(), output);
  }

  // optional bool symmetric = 4 [default = false];
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->symmetric(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:object_detection.protos.Quantization)
}

::google::protobuf::uint8* Quantization::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:object_detection.protos.Quantization)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 delay = 1 [default = 500000];
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->delay(), target);
  }

  // optional int32 weight_bits = 2 [default = 8];
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->weight_bits(), target);
  }

  // optional int32 activation_bits = 3 [default = 8];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->activation_bits(), target);
  }

  // optional bool symmetric = 4 [default = false];
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->symmetric(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:object_detection.protos.Quantization)
  return target;
}

size_t Quantization::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:object_detection.protos.Quantization)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional bool symmetric = 4 [default = false];
    if (has_symmetric()) {
      total_size += 1 + 1;
    }

    // optional int32 activation_bits = 3 [default = 8];
    if (has_activation_bits()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->activation_bits());
    }

    // optional int32 delay = 1 [default = 500000];
    if (has_delay()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->delay());
    }

    // optional int32 weight_bits = 2 [default = 8];
    if (has_weight_bits()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->weight_bits());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Quantization::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:object_detection.protos.Quantization)
  GOOGLE_DCHECK_NE(&from, this);
  const Quantization* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const Quantization>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:object_detection.protos.Quantization)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:object_detection.protos.Quantization)
    MergeFrom(*source);
  }
}

void Quantization::MergeFrom(const Quantization& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:object_detection.protos.Quantization)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      symmetric_ = from.symmetric_;
    }
    if (cached_has_bits & 0x00000002u) {
      activation_bits_ = from.activation_bits_;
    }
    if (cached_has_bits & 0x00000004u) {
      delay_ = from.delay_;
    }
    if (cached_has_bits & 0x00000008u) {
      weight_bits_ = from.weight_bits_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Quantization::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:object_detection.protos.Quantization)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Quantization::CopyFrom(const Quantization& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:object_detection.protos.Quantization)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Quantization::IsInitialized() const {
  return true;
}

void Quantization::Swap(Quantization* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Quantization::InternalSwap(Quantization* other) {
  using std::swap;
  swap(symmetric_, other->symmetric_);
  swap(activation_bits_, other->activation_bits_);
  swap(delay_, other->delay_);
  swap(weight_bits_, other->weight_bits_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Quantization::GetMetadata() const {
  protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_object_5fdetection_2fprotos_2fgraph_5frewriter_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Quantization

// optional int32 delay = 1 [default = 500000];
bool Quantization::has_delay() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void Quantization::set_has_delay() {
  _has_bits_[0] |= 0x00000004u;
}
void Quantization::clear_has_delay() {
  _has_bits_[0] &= ~0x00000004u;
}
void Quantization::clear_delay() {
  delay_ = 500000;
  clear_has_delay();
}
::google::protobuf::int32 Quantization::delay() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.Quantization.delay)
  return delay_;
}
void Quantization::set_delay(::google::protobuf::int32 value) {
  set_has_delay();
  delay_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.Quantization.delay)
}

// optional int32 weight_bits = 2 [default = 8];
bool Quantization::has_weight_bits() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void Quantization::set_has_weight_bits() {
  _has_bits_[0] |= 0x00000008u;
}
void Quantization::clear_has_weight_bits() {
  _has_bits_[0] &= ~0x00000008u;
}
void Quantization::clear_weight_bits() {
  weight_bits_ = 8;
  clear_has_weight_bits();
}
::google::protobuf::int32 Quantization::weight_bits() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.Quantization.weight_bits)
  return weight_bits_;
}
void Quantization::set_weight_bits(::google::protobuf::int32 value) {
  set_has_weight_bits();
  weight_bits_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.Quantization.weight_bits)
}

// optional int32 activation_bits = 3 [default = 8];
bool Quantization::has_activation_bits() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void Quantization::set_has_activation_bits() {
  _has_bits_[0] |= 0x00000002u;
}
void Quantization::clear_has_activation_bits() {
  _has_bits_[0] &= ~0x00000002u;
}
void Quantization::clear_activation_bits() {
  activation_bits_ = 8;
  clear_has_activation_bits();
}
::google::protobuf::int32 Quantization::activation_bits() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.Quantization.activation_bits)
  return activation_bits_;
}
void Quantization::set_activation_bits(::google::protobuf::int32 value) {
  set_has_activation_bits();
  activation_bits_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.Quantization.activation_bits)
}

// optional bool symmetric = 4 [default = false];
bool Quantization::has_symmetric() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void Quantization::set_has_symmetric() {
  _has_bits_[0] |= 0x00000001u;
}
void Quantization::clear_has_symmetric() {
  _has_bits_[0] &= ~0x00000001u;
}
void Quantization::clear_symmetric() {
  symmetric_ = false;
  clear_has_symmetric();
}
bool Quantization::symmetric() const {
  // @@protoc_insertion_point(field_get:object_detection.protos.Quantization.symmetric)
  return symmetric_;
}
void Quantization::set_symmetric(bool value) {
  set_has_symmetric();
  symmetric_ = value;
  // @@protoc_insertion_point(field_set:object_detection.protos.Quantization.symmetric)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace object_detection

// @@protoc_insertion_point(global_scope)