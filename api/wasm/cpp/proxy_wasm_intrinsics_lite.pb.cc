// Generated by the protocol buffer compiler. DO NOT EDIT!
// source: proxy_wasm_intrinsics_lite.proto

#include "proxy_wasm_intrinsics_lite.pb.h"

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/wire_format_lite_inl.h>

#include <algorithm>

// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_struct_5flite_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_struct_5flite_2eproto ::google::protobuf::internal::
    SCCInfo<0>
        scc_info_ListValue;
} // namespace protobuf_struct_5flite_2eproto
class WKTDefaultTypeInternal {
public:
  ::google::protobuf::internal::ExplicitlyConstructed<WKT> _instance;
} _WKT_default_instance_;
namespace protobuf_proxy_5fwasm_5fintrinsics_5flite_2eproto {
static void InitDefaultsWKT() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::_WKT_default_instance_;
    new (ptr)::WKT();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::WKT::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_WKT = {
    {ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1,
     InitDefaultsWKT},
    {
        &protobuf_struct_5flite_2eproto::scc_info_ListValue.base,
    }};

void InitDefaults() { ::google::protobuf::internal::InitSCC(&scc_info_WKT.base); }

} // namespace protobuf_proxy_5fwasm_5fintrinsics_5flite_2eproto

// ===================================================================

void WKT::InitAsDefaultInstance() {
  ::_WKT_default_instance_._instance.get_mutable()->struct__ =
      const_cast<::google::protobuf::Struct*>(
          ::google::protobuf::Struct::internal_default_instance());
}
void WKT::clear_struct_() {
  if (GetArenaNoVirtual() == NULL && struct__ != NULL) {
    delete struct__;
  }
  struct__ = NULL;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int WKT::kStructFieldNumber;
#endif // !defined(_MSC_VER) || _MSC_VER >= 1900

WKT::WKT() : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proxy_5fwasm_5fintrinsics_5flite_2eproto::scc_info_WKT.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:WKT)
}
WKT::WKT(const WKT& from) : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_struct_()) {
    struct__ = new ::google::protobuf::Struct(*from.struct__);
  } else {
    struct__ = NULL;
  }
  // @@protoc_insertion_point(copy_constructor:WKT)
}

void WKT::SharedCtor() { struct__ = NULL; }

WKT::~WKT() {
  // @@protoc_insertion_point(destructor:WKT)
  SharedDtor();
}

void WKT::SharedDtor() {
  if (this != internal_default_instance())
    delete struct__;
}

void WKT::SetCachedSize(int size) const { _cached_size_.Set(size); }
const WKT& WKT::default_instance() {
  ::google::protobuf::internal::InitSCC(
      &protobuf_proxy_5fwasm_5fintrinsics_5flite_2eproto::scc_info_WKT.base);
  return *internal_default_instance();
}

void WKT::Clear() {
  // @@protoc_insertion_point(message_clear_start:WKT)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void)cached_has_bits;

  if (GetArenaNoVirtual() == NULL && struct__ != NULL) {
    delete struct__;
  }
  struct__ = NULL;
  _internal_metadata_.Clear();
}

bool WKT::MergePartialFromCodedStream(::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION)                                                                            \
  if (!GOOGLE_PREDICT_TRUE(EXPRESSION))                                                            \
  goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(&_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(&unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:WKT)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second)
      goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
    // .google.protobuf.Struct struct = 1;
    case 1: {
      if (static_cast<::google::protobuf::uint8>(tag) ==
          static_cast<::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
        DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, mutable_struct_()));
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
      DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag,
                                                                  &unknown_fields_stream));
      break;
    }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:WKT)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:WKT)
  return false;
#undef DO_
}

void WKT::SerializeWithCachedSizes(::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:WKT)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  // .google.protobuf.Struct struct = 1;
  if (this->has_struct_()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(1, this->_internal_struct_(),
                                                               output);
  }

  output->WriteRaw(
      (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()
           ? _internal_metadata_.unknown_fields()
           : _internal_metadata_.default_instance())
          .data(),
      static_cast<int>((::google::protobuf::internal::GetProto3PreserveUnknownsDefault()
                            ? _internal_metadata_.unknown_fields()
                            : _internal_metadata_.default_instance())
                           .size()));
  // @@protoc_insertion_point(serialize_end:WKT)
}

size_t WKT::ByteSizeLong() const {
  // @@protoc_insertion_point(message_byte_size_start:WKT)
  size_t total_size = 0;

  total_size += (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()
                     ? _internal_metadata_.unknown_fields()
                     : _internal_metadata_.default_instance())
                    .size();

  // .google.protobuf.Struct struct = 1;
  if (this->has_struct_()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::MessageSize(*struct__);
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void WKT::CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const WKT*>(&from));
}

void WKT::MergeFrom(const WKT& from) {
  // @@protoc_insertion_point(class_specific_merge_from_start:WKT)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void)cached_has_bits;

  if (from.has_struct_()) {
    mutable_struct_()->::google::protobuf::Struct::MergeFrom(from.struct_());
  }
}

void WKT::CopyFrom(const WKT& from) {
  // @@protoc_insertion_point(class_specific_copy_from_start:WKT)
  if (&from == this)
    return;
  Clear();
  MergeFrom(from);
}

bool WKT::IsInitialized() const { return true; }

void WKT::Swap(WKT* other) {
  if (other == this)
    return;
  InternalSwap(other);
}
void WKT::InternalSwap(WKT* other) {
  using std::swap;
  swap(struct__, other->struct__);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::std::string WKT::GetTypeName() const { return "WKT"; }

// @@protoc_insertion_point(namespace_scope)
namespace google {
namespace protobuf {
template <>
GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::WKT* Arena::CreateMaybeMessage<::WKT>(Arena* arena) {
  return Arena::CreateInternal<::WKT>(arena);
}
} // namespace protobuf
} // namespace google

// @@protoc_insertion_point(global_scope)