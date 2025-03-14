// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: fileformat.proto
// Protobuf C++ Version: 5.29.1

#ifndef fileformat_2eproto_2epb_2eh
#define fileformat_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5029001
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/message_lite.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_fileformat_2eproto

namespace google {
namespace protobuf {
namespace internal {
template <typename T>
::absl::string_view GetAnyMessageName();
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_fileformat_2eproto {
  static const ::uint32_t offsets[];
};
namespace OSMPBF {
class Blob;
struct BlobDefaultTypeInternal;
extern BlobDefaultTypeInternal _Blob_default_instance_;
class BlobHeader;
struct BlobHeaderDefaultTypeInternal;
extern BlobHeaderDefaultTypeInternal _BlobHeader_default_instance_;
}  // namespace OSMPBF
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace OSMPBF {

// ===================================================================


// -------------------------------------------------------------------

class BlobHeader final
    : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:OSMPBF.BlobHeader) */ {
 public:
  inline BlobHeader() : BlobHeader(nullptr) {}
  ~BlobHeader() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(BlobHeader* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(BlobHeader));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR BlobHeader(
      ::google::protobuf::internal::ConstantInitialized);

  inline BlobHeader(const BlobHeader& from) : BlobHeader(nullptr, from) {}
  inline BlobHeader(BlobHeader&& from) noexcept
      : BlobHeader(nullptr, std::move(from)) {}
  inline BlobHeader& operator=(const BlobHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline BlobHeader& operator=(BlobHeader&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const BlobHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const BlobHeader* internal_default_instance() {
    return reinterpret_cast<const BlobHeader*>(
        &_BlobHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 1;
  friend void swap(BlobHeader& a, BlobHeader& b) { a.Swap(&b); }
  inline void Swap(BlobHeader* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(BlobHeader* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BlobHeader* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::MessageLite::DefaultConstruct<BlobHeader>(arena);
  }
  void CopyFrom(const BlobHeader& from);
  void MergeFrom(const BlobHeader& from) { BlobHeader::MergeImpl(*this, from); }

  private:
  static void MergeImpl(::google::protobuf::MessageLite& to_msg,
                        const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return IsInitializedImpl(*this);
  }

  private:
  static bool IsInitializedImpl(const MessageLite& msg);

  public:
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(BlobHeader* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "OSMPBF.BlobHeader"; }

 protected:
  explicit BlobHeader(::google::protobuf::Arena* arena);
  BlobHeader(::google::protobuf::Arena* arena, const BlobHeader& from);
  BlobHeader(::google::protobuf::Arena* arena, BlobHeader&& from) noexcept
      : BlobHeader(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataLite<18> _class_data_;

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kTypeFieldNumber = 1,
    kIndexdataFieldNumber = 2,
    kDatasizeFieldNumber = 3,
  };
  // required string type = 1;
  bool has_type() const;
  void clear_type() ;
  const std::string& type() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_type(Arg_&& arg, Args_... args);
  std::string* mutable_type();
  PROTOBUF_NODISCARD std::string* release_type();
  void set_allocated_type(std::string* value);

  private:
  const std::string& _internal_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type(
      const std::string& value);
  std::string* _internal_mutable_type();

  public:
  // optional bytes indexdata = 2;
  bool has_indexdata() const;
  void clear_indexdata() ;
  const std::string& indexdata() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_indexdata(Arg_&& arg, Args_... args);
  std::string* mutable_indexdata();
  PROTOBUF_NODISCARD std::string* release_indexdata();
  void set_allocated_indexdata(std::string* value);

  private:
  const std::string& _internal_indexdata() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_indexdata(
      const std::string& value);
  std::string* _internal_mutable_indexdata();

  public:
  // required int32 datasize = 3;
  bool has_datasize() const;
  void clear_datasize() ;
  ::int32_t datasize() const;
  void set_datasize(::int32_t value);

  private:
  ::int32_t _internal_datasize() const;
  void _internal_set_datasize(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:OSMPBF.BlobHeader)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      2, 3, 0,
      0, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const BlobHeader& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr type_;
    ::google::protobuf::internal::ArenaStringPtr indexdata_;
    ::int32_t datasize_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_fileformat_2eproto;
};
// -------------------------------------------------------------------

class Blob final
    : public ::google::protobuf::MessageLite
/* @@protoc_insertion_point(class_definition:OSMPBF.Blob) */ {
 public:
  inline Blob() : Blob(nullptr) {}
  ~Blob() PROTOBUF_FINAL;

#if defined(PROTOBUF_CUSTOM_VTABLE)
  void operator delete(Blob* msg, std::destroying_delete_t) {
    SharedDtor(*msg);
    ::google::protobuf::internal::SizedDelete(msg, sizeof(Blob));
  }
#endif

  template <typename = void>
  explicit PROTOBUF_CONSTEXPR Blob(
      ::google::protobuf::internal::ConstantInitialized);

  inline Blob(const Blob& from) : Blob(nullptr, from) {}
  inline Blob(Blob&& from) noexcept
      : Blob(nullptr, std::move(from)) {}
  inline Blob& operator=(const Blob& from) {
    CopyFrom(from);
    return *this;
  }
  inline Blob& operator=(Blob&& from) noexcept {
    if (this == &from) return *this;
    if (::google::protobuf::internal::CanMoveWithInternalSwap(GetArena(), from.GetArena())) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<std::string>(::google::protobuf::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const Blob& default_instance() {
    return *internal_default_instance();
  }
  static inline const Blob* internal_default_instance() {
    return reinterpret_cast<const Blob*>(
        &_Blob_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(Blob& a, Blob& b) { a.Swap(&b); }
  inline void Swap(Blob* other) {
    if (other == this) return;
    if (::google::protobuf::internal::CanUseInternalSwap(GetArena(), other->GetArena())) {
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Blob* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Blob* New(::google::protobuf::Arena* arena = nullptr) const {
    return ::google::protobuf::MessageLite::DefaultConstruct<Blob>(arena);
  }
  void CopyFrom(const Blob& from);
  void MergeFrom(const Blob& from) { Blob::MergeImpl(*this, from); }

  private:
  static void MergeImpl(::google::protobuf::MessageLite& to_msg,
                        const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() PROTOBUF_FINAL;
  #if defined(PROTOBUF_CUSTOM_VTABLE)
  private:
  static ::size_t ByteSizeLong(const ::google::protobuf::MessageLite& msg);
  static ::uint8_t* _InternalSerialize(
      const MessageLite& msg, ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream);

  public:
  ::size_t ByteSizeLong() const { return ByteSizeLong(*this); }
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const {
    return _InternalSerialize(*this, target, stream);
  }
  #else   // PROTOBUF_CUSTOM_VTABLE
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  #endif  // PROTOBUF_CUSTOM_VTABLE
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  static void SharedDtor(MessageLite& self);
  void InternalSwap(Blob* other);
 private:
  template <typename T>
  friend ::absl::string_view(
      ::google::protobuf::internal::GetAnyMessageName)();
  static ::absl::string_view FullMessageName() { return "OSMPBF.Blob"; }

 protected:
  explicit Blob(::google::protobuf::Arena* arena);
  Blob(::google::protobuf::Arena* arena, const Blob& from);
  Blob(::google::protobuf::Arena* arena, Blob&& from) noexcept
      : Blob(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::internal::ClassData* GetClassData() const PROTOBUF_FINAL;
  static void* PlacementNew_(const void*, void* mem,
                             ::google::protobuf::Arena* arena);
  static constexpr auto InternalNewImpl_();
  static const ::google::protobuf::internal::ClassDataLite<12> _class_data_;

 public:
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kRawFieldNumber = 1,
    kZlibDataFieldNumber = 3,
    kLzmaDataFieldNumber = 4,
    kOBSOLETEBzip2DataFieldNumber = 5,
    kRawSizeFieldNumber = 2,
  };
  // optional bytes raw = 1;
  bool has_raw() const;
  void clear_raw() ;
  const std::string& raw() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_raw(Arg_&& arg, Args_... args);
  std::string* mutable_raw();
  PROTOBUF_NODISCARD std::string* release_raw();
  void set_allocated_raw(std::string* value);

  private:
  const std::string& _internal_raw() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_raw(
      const std::string& value);
  std::string* _internal_mutable_raw();

  public:
  // optional bytes zlib_data = 3;
  bool has_zlib_data() const;
  void clear_zlib_data() ;
  const std::string& zlib_data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_zlib_data(Arg_&& arg, Args_... args);
  std::string* mutable_zlib_data();
  PROTOBUF_NODISCARD std::string* release_zlib_data();
  void set_allocated_zlib_data(std::string* value);

  private:
  const std::string& _internal_zlib_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_zlib_data(
      const std::string& value);
  std::string* _internal_mutable_zlib_data();

  public:
  // optional bytes lzma_data = 4;
  bool has_lzma_data() const;
  void clear_lzma_data() ;
  const std::string& lzma_data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  void set_lzma_data(Arg_&& arg, Args_... args);
  std::string* mutable_lzma_data();
  PROTOBUF_NODISCARD std::string* release_lzma_data();
  void set_allocated_lzma_data(std::string* value);

  private:
  const std::string& _internal_lzma_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_lzma_data(
      const std::string& value);
  std::string* _internal_mutable_lzma_data();

  public:
  // optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
  [[deprecated]]  bool has_obsolete_bzip2_data() const;
  [[deprecated]]  void clear_obsolete_bzip2_data() ;
  [[deprecated]] const std::string& obsolete_bzip2_data() const;
  template <typename Arg_ = const std::string&, typename... Args_>
  [[deprecated]] void set_obsolete_bzip2_data(Arg_&& arg, Args_... args);
  [[deprecated]] std::string* mutable_obsolete_bzip2_data();
  [[deprecated]] PROTOBUF_NODISCARD std::string* release_obsolete_bzip2_data();
  [[deprecated]] void set_allocated_obsolete_bzip2_data(std::string* value);

  private:
  const std::string& _internal_obsolete_bzip2_data() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_obsolete_bzip2_data(
      const std::string& value);
  std::string* _internal_mutable_obsolete_bzip2_data();

  public:
  // optional int32 raw_size = 2;
  bool has_raw_size() const;
  void clear_raw_size() ;
  ::int32_t raw_size() const;
  void set_raw_size(::int32_t value);

  private:
  ::int32_t _internal_raw_size() const;
  void _internal_set_raw_size(::int32_t value);

  public:
  // @@protoc_insertion_point(class_scope:OSMPBF.Blob)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      3, 5, 0,
      0, 2>
      _table_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const Blob& from_msg);
    ::google::protobuf::internal::HasBits<1> _has_bits_;
    ::google::protobuf::internal::CachedSize _cached_size_;
    ::google::protobuf::internal::ArenaStringPtr raw_;
    ::google::protobuf::internal::ArenaStringPtr zlib_data_;
    ::google::protobuf::internal::ArenaStringPtr lzma_data_;
    ::google::protobuf::internal::ArenaStringPtr obsolete_bzip2_data_;
    ::int32_t raw_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_fileformat_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// Blob

// optional bytes raw = 1;
inline bool Blob::has_raw() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void Blob::clear_raw() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.raw_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Blob::raw() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.raw)
  return _internal_raw();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Blob::set_raw(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.raw_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.raw)
}
inline std::string* Blob::mutable_raw() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_raw();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.raw)
  return _s;
}
inline const std::string& Blob::_internal_raw() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.raw_.Get();
}
inline void Blob::_internal_set_raw(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.raw_.Set(value, GetArena());
}
inline std::string* Blob::_internal_mutable_raw() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.raw_.Mutable( GetArena());
}
inline std::string* Blob::release_raw() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.raw)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.raw_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.raw_.Set("", GetArena());
  }
  return released;
}
inline void Blob::set_allocated_raw(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.raw_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.raw_.IsDefault()) {
    _impl_.raw_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.raw)
}

// optional int32 raw_size = 2;
inline bool Blob::has_raw_size() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline void Blob::clear_raw_size() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.raw_size_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline ::int32_t Blob::raw_size() const {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.raw_size)
  return _internal_raw_size();
}
inline void Blob::set_raw_size(::int32_t value) {
  _internal_set_raw_size(value);
  _impl_._has_bits_[0] |= 0x00000010u;
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.raw_size)
}
inline ::int32_t Blob::_internal_raw_size() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.raw_size_;
}
inline void Blob::_internal_set_raw_size(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.raw_size_ = value;
}

// optional bytes zlib_data = 3;
inline bool Blob::has_zlib_data() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void Blob::clear_zlib_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.zlib_data_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Blob::zlib_data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.zlib_data)
  return _internal_zlib_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Blob::set_zlib_data(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.zlib_data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.zlib_data)
}
inline std::string* Blob::mutable_zlib_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_zlib_data();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.zlib_data)
  return _s;
}
inline const std::string& Blob::_internal_zlib_data() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.zlib_data_.Get();
}
inline void Blob::_internal_set_zlib_data(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.zlib_data_.Set(value, GetArena());
}
inline std::string* Blob::_internal_mutable_zlib_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.zlib_data_.Mutable( GetArena());
}
inline std::string* Blob::release_zlib_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.zlib_data)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.zlib_data_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.zlib_data_.Set("", GetArena());
  }
  return released;
}
inline void Blob::set_allocated_zlib_data(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.zlib_data_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.zlib_data_.IsDefault()) {
    _impl_.zlib_data_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.zlib_data)
}

// optional bytes lzma_data = 4;
inline bool Blob::has_lzma_data() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void Blob::clear_lzma_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.lzma_data_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline const std::string& Blob::lzma_data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.lzma_data)
  return _internal_lzma_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Blob::set_lzma_data(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.lzma_data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.lzma_data)
}
inline std::string* Blob::mutable_lzma_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_lzma_data();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.lzma_data)
  return _s;
}
inline const std::string& Blob::_internal_lzma_data() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.lzma_data_.Get();
}
inline void Blob::_internal_set_lzma_data(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.lzma_data_.Set(value, GetArena());
}
inline std::string* Blob::_internal_mutable_lzma_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000004u;
  return _impl_.lzma_data_.Mutable( GetArena());
}
inline std::string* Blob::release_lzma_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.lzma_data)
  if ((_impl_._has_bits_[0] & 0x00000004u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000004u;
  auto* released = _impl_.lzma_data_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.lzma_data_.Set("", GetArena());
  }
  return released;
}
inline void Blob::set_allocated_lzma_data(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000004u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000004u;
  }
  _impl_.lzma_data_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.lzma_data_.IsDefault()) {
    _impl_.lzma_data_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.lzma_data)
}

// optional bytes OBSOLETE_bzip2_data = 5 [deprecated = true];
inline bool Blob::has_obsolete_bzip2_data() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline void Blob::clear_obsolete_bzip2_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.obsolete_bzip2_data_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline const std::string& Blob::obsolete_bzip2_data() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OSMPBF.Blob.OBSOLETE_bzip2_data)
  return _internal_obsolete_bzip2_data();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void Blob::set_obsolete_bzip2_data(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.obsolete_bzip2_data_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OSMPBF.Blob.OBSOLETE_bzip2_data)
}
inline std::string* Blob::mutable_obsolete_bzip2_data() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_obsolete_bzip2_data();
  // @@protoc_insertion_point(field_mutable:OSMPBF.Blob.OBSOLETE_bzip2_data)
  return _s;
}
inline const std::string& Blob::_internal_obsolete_bzip2_data() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.obsolete_bzip2_data_.Get();
}
inline void Blob::_internal_set_obsolete_bzip2_data(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.obsolete_bzip2_data_.Set(value, GetArena());
}
inline std::string* Blob::_internal_mutable_obsolete_bzip2_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000008u;
  return _impl_.obsolete_bzip2_data_.Mutable( GetArena());
}
inline std::string* Blob::release_obsolete_bzip2_data() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OSMPBF.Blob.OBSOLETE_bzip2_data)
  if ((_impl_._has_bits_[0] & 0x00000008u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000008u;
  auto* released = _impl_.obsolete_bzip2_data_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.obsolete_bzip2_data_.Set("", GetArena());
  }
  return released;
}
inline void Blob::set_allocated_obsolete_bzip2_data(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000008u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000008u;
  }
  _impl_.obsolete_bzip2_data_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.obsolete_bzip2_data_.IsDefault()) {
    _impl_.obsolete_bzip2_data_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.Blob.OBSOLETE_bzip2_data)
}

// -------------------------------------------------------------------

// BlobHeader

// required string type = 1;
inline bool BlobHeader::has_type() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline void BlobHeader::clear_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.type_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline const std::string& BlobHeader::type() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OSMPBF.BlobHeader.type)
  return _internal_type();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BlobHeader::set_type(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.type_.Set(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OSMPBF.BlobHeader.type)
}
inline std::string* BlobHeader::mutable_type() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_type();
  // @@protoc_insertion_point(field_mutable:OSMPBF.BlobHeader.type)
  return _s;
}
inline const std::string& BlobHeader::_internal_type() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.type_.Get();
}
inline void BlobHeader::_internal_set_type(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.type_.Set(value, GetArena());
}
inline std::string* BlobHeader::_internal_mutable_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000001u;
  return _impl_.type_.Mutable( GetArena());
}
inline std::string* BlobHeader::release_type() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OSMPBF.BlobHeader.type)
  if ((_impl_._has_bits_[0] & 0x00000001u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000001u;
  auto* released = _impl_.type_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.type_.Set("", GetArena());
  }
  return released;
}
inline void BlobHeader::set_allocated_type(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000001u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000001u;
  }
  _impl_.type_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.type_.IsDefault()) {
    _impl_.type_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.BlobHeader.type)
}

// optional bytes indexdata = 2;
inline bool BlobHeader::has_indexdata() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline void BlobHeader::clear_indexdata() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.indexdata_.ClearToEmpty();
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline const std::string& BlobHeader::indexdata() const
    ABSL_ATTRIBUTE_LIFETIME_BOUND {
  // @@protoc_insertion_point(field_get:OSMPBF.BlobHeader.indexdata)
  return _internal_indexdata();
}
template <typename Arg_, typename... Args_>
inline PROTOBUF_ALWAYS_INLINE void BlobHeader::set_indexdata(Arg_&& arg,
                                                     Args_... args) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.indexdata_.SetBytes(static_cast<Arg_&&>(arg), args..., GetArena());
  // @@protoc_insertion_point(field_set:OSMPBF.BlobHeader.indexdata)
}
inline std::string* BlobHeader::mutable_indexdata() ABSL_ATTRIBUTE_LIFETIME_BOUND {
  std::string* _s = _internal_mutable_indexdata();
  // @@protoc_insertion_point(field_mutable:OSMPBF.BlobHeader.indexdata)
  return _s;
}
inline const std::string& BlobHeader::_internal_indexdata() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.indexdata_.Get();
}
inline void BlobHeader::_internal_set_indexdata(const std::string& value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.indexdata_.Set(value, GetArena());
}
inline std::string* BlobHeader::_internal_mutable_indexdata() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_._has_bits_[0] |= 0x00000002u;
  return _impl_.indexdata_.Mutable( GetArena());
}
inline std::string* BlobHeader::release_indexdata() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  // @@protoc_insertion_point(field_release:OSMPBF.BlobHeader.indexdata)
  if ((_impl_._has_bits_[0] & 0x00000002u) == 0) {
    return nullptr;
  }
  _impl_._has_bits_[0] &= ~0x00000002u;
  auto* released = _impl_.indexdata_.Release();
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString()) {
    _impl_.indexdata_.Set("", GetArena());
  }
  return released;
}
inline void BlobHeader::set_allocated_indexdata(std::string* value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  if (value != nullptr) {
    _impl_._has_bits_[0] |= 0x00000002u;
  } else {
    _impl_._has_bits_[0] &= ~0x00000002u;
  }
  _impl_.indexdata_.SetAllocated(value, GetArena());
  if (::google::protobuf::internal::DebugHardenForceCopyDefaultString() && _impl_.indexdata_.IsDefault()) {
    _impl_.indexdata_.Set("", GetArena());
  }
  // @@protoc_insertion_point(field_set_allocated:OSMPBF.BlobHeader.indexdata)
}

// required int32 datasize = 3;
inline bool BlobHeader::has_datasize() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline void BlobHeader::clear_datasize() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.datasize_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline ::int32_t BlobHeader::datasize() const {
  // @@protoc_insertion_point(field_get:OSMPBF.BlobHeader.datasize)
  return _internal_datasize();
}
inline void BlobHeader::set_datasize(::int32_t value) {
  _internal_set_datasize(value);
  _impl_._has_bits_[0] |= 0x00000004u;
  // @@protoc_insertion_point(field_set:OSMPBF.BlobHeader.datasize)
}
inline ::int32_t BlobHeader::_internal_datasize() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.datasize_;
}
inline void BlobHeader::_internal_set_datasize(::int32_t value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.datasize_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace OSMPBF


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // fileformat_2eproto_2epb_2eh
