// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: spot_fx_md_1.proto

#ifndef PROTOBUF_spot_5ffx_5fmd_5f1_2eproto__INCLUDED
#define PROTOBUF_spot_5ffx_5fmd_5f1_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
// @@protoc_insertion_point(includes)

namespace capitalk {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_spot_5ffx_5fmd_5f1_2eproto();
void protobuf_AssignDesc_spot_5ffx_5fmd_5f1_2eproto();
void protobuf_ShutdownFile_spot_5ffx_5fmd_5f1_2eproto();

class order_t;
class mic_bbo;
class instrument_bbo;

enum order_t_side_t {
  order_t_side_t_BID = 0,
  order_t_side_t_ASK = 1
};
bool order_t_side_t_IsValid(int value);
const order_t_side_t order_t_side_t_side_t_MIN = order_t_side_t_BID;
const order_t_side_t order_t_side_t_side_t_MAX = order_t_side_t_ASK;
const int order_t_side_t_side_t_ARRAYSIZE = order_t_side_t_side_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* order_t_side_t_descriptor();
inline const ::std::string& order_t_side_t_Name(order_t_side_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    order_t_side_t_descriptor(), value);
}
inline bool order_t_side_t_Parse(
    const ::std::string& name, order_t_side_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<order_t_side_t>(
    order_t_side_t_descriptor(), name, value);
}
enum order_t_quote_type_t {
  order_t_quote_type_t_INDICATIVE = 0,
  order_t_quote_type_t_TRADEABLE = 1
};
bool order_t_quote_type_t_IsValid(int value);
const order_t_quote_type_t order_t_quote_type_t_quote_type_t_MIN = order_t_quote_type_t_INDICATIVE;
const order_t_quote_type_t order_t_quote_type_t_quote_type_t_MAX = order_t_quote_type_t_TRADEABLE;
const int order_t_quote_type_t_quote_type_t_ARRAYSIZE = order_t_quote_type_t_quote_type_t_MAX + 1;

const ::google::protobuf::EnumDescriptor* order_t_quote_type_t_descriptor();
inline const ::std::string& order_t_quote_type_t_Name(order_t_quote_type_t value) {
  return ::google::protobuf::internal::NameOfEnum(
    order_t_quote_type_t_descriptor(), value);
}
inline bool order_t_quote_type_t_Parse(
    const ::std::string& name, order_t_quote_type_t* value) {
  return ::google::protobuf::internal::ParseNamedEnum<order_t_quote_type_t>(
    order_t_quote_type_t_descriptor(), name, value);
}
// ===================================================================

class order_t : public ::google::protobuf::Message {
 public:
  order_t();
  virtual ~order_t();
  
  order_t(const order_t& from);
  
  inline order_t& operator=(const order_t& from) {
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
  static const order_t& default_instance();
  
  void Swap(order_t* other);
  
  // implements Message ----------------------------------------------
  
  order_t* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const order_t& from);
  void MergeFrom(const order_t& from);
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
  
  typedef order_t_side_t side_t;
  static const side_t BID = order_t_side_t_BID;
  static const side_t ASK = order_t_side_t_ASK;
  static inline bool side_t_IsValid(int value) {
    return order_t_side_t_IsValid(value);
  }
  static const side_t side_t_MIN =
    order_t_side_t_side_t_MIN;
  static const side_t side_t_MAX =
    order_t_side_t_side_t_MAX;
  static const int side_t_ARRAYSIZE =
    order_t_side_t_side_t_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  side_t_descriptor() {
    return order_t_side_t_descriptor();
  }
  static inline const ::std::string& side_t_Name(side_t value) {
    return order_t_side_t_Name(value);
  }
  static inline bool side_t_Parse(const ::std::string& name,
      side_t* value) {
    return order_t_side_t_Parse(name, value);
  }
  
  typedef order_t_quote_type_t quote_type_t;
  static const quote_type_t INDICATIVE = order_t_quote_type_t_INDICATIVE;
  static const quote_type_t TRADEABLE = order_t_quote_type_t_TRADEABLE;
  static inline bool quote_type_t_IsValid(int value) {
    return order_t_quote_type_t_IsValid(value);
  }
  static const quote_type_t quote_type_t_MIN =
    order_t_quote_type_t_quote_type_t_MIN;
  static const quote_type_t quote_type_t_MAX =
    order_t_quote_type_t_quote_type_t_MAX;
  static const int quote_type_t_ARRAYSIZE =
    order_t_quote_type_t_quote_type_t_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  quote_type_t_descriptor() {
    return order_t_quote_type_t_descriptor();
  }
  static inline const ::std::string& quote_type_t_Name(quote_type_t value) {
    return order_t_quote_type_t_Name(value);
  }
  static inline bool quote_type_t_Parse(const ::std::string& name,
      quote_type_t* value) {
    return order_t_quote_type_t_Parse(name, value);
  }
  
  // accessors -------------------------------------------------------
  
  // required string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  
  // required string mic = 2;
  inline bool has_mic() const;
  inline void clear_mic();
  static const int kMicFieldNumber = 2;
  inline const ::std::string& mic() const;
  inline void set_mic(const ::std::string& value);
  inline void set_mic(const char* value);
  inline void set_mic(const char* value, size_t size);
  inline ::std::string* mutable_mic();
  inline ::std::string* release_mic();
  
  // required int32 qid = 3;
  inline bool has_qid() const;
  inline void clear_qid();
  static const int kQidFieldNumber = 3;
  inline ::google::protobuf::int32 qid() const;
  inline void set_qid(::google::protobuf::int32 value);
  
  // required .capitalk.order_t.side_t side = 4;
  inline bool has_side() const;
  inline void clear_side();
  static const int kSideFieldNumber = 4;
  inline ::capitalk::order_t_side_t side() const;
  inline void set_side(::capitalk::order_t_side_t value);
  
  // required double size = 5;
  inline bool has_size() const;
  inline void clear_size();
  static const int kSizeFieldNumber = 5;
  inline double size() const;
  inline void set_size(double value);
  
  // required double price = 6;
  inline bool has_price() const;
  inline void clear_price();
  static const int kPriceFieldNumber = 6;
  inline double price() const;
  inline void set_price(double value);
  
  // @@protoc_insertion_point(class_scope:capitalk.order_t)
 private:
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_mic();
  inline void clear_has_mic();
  inline void set_has_qid();
  inline void clear_has_qid();
  inline void set_has_side();
  inline void clear_has_side();
  inline void set_has_size();
  inline void clear_has_size();
  inline void set_has_price();
  inline void clear_has_price();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* name_;
  ::std::string* mic_;
  ::google::protobuf::int32 qid_;
  int side_;
  double size_;
  double price_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_spot_5ffx_5fmd_5f1_2eproto();
  friend void protobuf_AssignDesc_spot_5ffx_5fmd_5f1_2eproto();
  friend void protobuf_ShutdownFile_spot_5ffx_5fmd_5f1_2eproto();
  
  void InitAsDefaultInstance();
  static order_t* default_instance_;
};
// -------------------------------------------------------------------

class mic_bbo : public ::google::protobuf::Message {
 public:
  mic_bbo();
  virtual ~mic_bbo();
  
  mic_bbo(const mic_bbo& from);
  
  inline mic_bbo& operator=(const mic_bbo& from) {
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
  static const mic_bbo& default_instance();
  
  void Swap(mic_bbo* other);
  
  // implements Message ----------------------------------------------
  
  mic_bbo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const mic_bbo& from);
  void MergeFrom(const mic_bbo& from);
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
  
  // required string mic = 1;
  inline bool has_mic() const;
  inline void clear_mic();
  static const int kMicFieldNumber = 1;
  inline const ::std::string& mic() const;
  inline void set_mic(const ::std::string& value);
  inline void set_mic(const char* value);
  inline void set_mic(const char* value, size_t size);
  inline ::std::string* mutable_mic();
  inline ::std::string* release_mic();
  
  // required string symbol = 2;
  inline bool has_symbol() const;
  inline void clear_symbol();
  static const int kSymbolFieldNumber = 2;
  inline const ::std::string& symbol() const;
  inline void set_symbol(const ::std::string& value);
  inline void set_symbol(const char* value);
  inline void set_symbol(const char* value, size_t size);
  inline ::std::string* mutable_symbol();
  inline ::std::string* release_symbol();
  
  // required double bid_size = 3;
  inline bool has_bid_size() const;
  inline void clear_bid_size();
  static const int kBidSizeFieldNumber = 3;
  inline double bid_size() const;
  inline void set_bid_size(double value);
  
  // required double bid_price = 4;
  inline bool has_bid_price() const;
  inline void clear_bid_price();
  static const int kBidPriceFieldNumber = 4;
  inline double bid_price() const;
  inline void set_bid_price(double value);
  
  // required double ask_size = 5;
  inline bool has_ask_size() const;
  inline void clear_ask_size();
  static const int kAskSizeFieldNumber = 5;
  inline double ask_size() const;
  inline void set_ask_size(double value);
  
  // required double ask_price = 6;
  inline bool has_ask_price() const;
  inline void clear_ask_price();
  static const int kAskPriceFieldNumber = 6;
  inline double ask_price() const;
  inline void set_ask_price(double value);
  
  // @@protoc_insertion_point(class_scope:capitalk.mic_bbo)
 private:
  inline void set_has_mic();
  inline void clear_has_mic();
  inline void set_has_symbol();
  inline void clear_has_symbol();
  inline void set_has_bid_size();
  inline void clear_has_bid_size();
  inline void set_has_bid_price();
  inline void clear_has_bid_price();
  inline void set_has_ask_size();
  inline void clear_has_ask_size();
  inline void set_has_ask_price();
  inline void clear_has_ask_price();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* mic_;
  ::std::string* symbol_;
  double bid_size_;
  double bid_price_;
  double ask_size_;
  double ask_price_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(6 + 31) / 32];
  
  friend void  protobuf_AddDesc_spot_5ffx_5fmd_5f1_2eproto();
  friend void protobuf_AssignDesc_spot_5ffx_5fmd_5f1_2eproto();
  friend void protobuf_ShutdownFile_spot_5ffx_5fmd_5f1_2eproto();
  
  void InitAsDefaultInstance();
  static mic_bbo* default_instance_;
};
// -------------------------------------------------------------------

class instrument_bbo : public ::google::protobuf::Message {
 public:
  instrument_bbo();
  virtual ~instrument_bbo();
  
  instrument_bbo(const instrument_bbo& from);
  
  inline instrument_bbo& operator=(const instrument_bbo& from) {
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
  static const instrument_bbo& default_instance();
  
  void Swap(instrument_bbo* other);
  
  // implements Message ----------------------------------------------
  
  instrument_bbo* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const instrument_bbo& from);
  void MergeFrom(const instrument_bbo& from);
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
  
  // required string symbol = 1;
  inline bool has_symbol() const;
  inline void clear_symbol();
  static const int kSymbolFieldNumber = 1;
  inline const ::std::string& symbol() const;
  inline void set_symbol(const ::std::string& value);
  inline void set_symbol(const char* value);
  inline void set_symbol(const char* value, size_t size);
  inline ::std::string* mutable_symbol();
  inline ::std::string* release_symbol();
  
  // required string bb_mic = 2;
  inline bool has_bb_mic() const;
  inline void clear_bb_mic();
  static const int kBbMicFieldNumber = 2;
  inline const ::std::string& bb_mic() const;
  inline void set_bb_mic(const ::std::string& value);
  inline void set_bb_mic(const char* value);
  inline void set_bb_mic(const char* value, size_t size);
  inline ::std::string* mutable_bb_mic();
  inline ::std::string* release_bb_mic();
  
  // required double bb_price = 3;
  inline bool has_bb_price() const;
  inline void clear_bb_price();
  static const int kBbPriceFieldNumber = 3;
  inline double bb_price() const;
  inline void set_bb_price(double value);
  
  // required double bb_size = 4;
  inline bool has_bb_size() const;
  inline void clear_bb_size();
  static const int kBbSizeFieldNumber = 4;
  inline double bb_size() const;
  inline void set_bb_size(double value);
  
  // required string ba_mic = 5;
  inline bool has_ba_mic() const;
  inline void clear_ba_mic();
  static const int kBaMicFieldNumber = 5;
  inline const ::std::string& ba_mic() const;
  inline void set_ba_mic(const ::std::string& value);
  inline void set_ba_mic(const char* value);
  inline void set_ba_mic(const char* value, size_t size);
  inline ::std::string* mutable_ba_mic();
  inline ::std::string* release_ba_mic();
  
  // required double ba_price = 6;
  inline bool has_ba_price() const;
  inline void clear_ba_price();
  static const int kBaPriceFieldNumber = 6;
  inline double ba_price() const;
  inline void set_ba_price(double value);
  
  // required double ba_size = 7;
  inline bool has_ba_size() const;
  inline void clear_ba_size();
  static const int kBaSizeFieldNumber = 7;
  inline double ba_size() const;
  inline void set_ba_size(double value);
  
  // @@protoc_insertion_point(class_scope:capitalk.instrument_bbo)
 private:
  inline void set_has_symbol();
  inline void clear_has_symbol();
  inline void set_has_bb_mic();
  inline void clear_has_bb_mic();
  inline void set_has_bb_price();
  inline void clear_has_bb_price();
  inline void set_has_bb_size();
  inline void clear_has_bb_size();
  inline void set_has_ba_mic();
  inline void clear_has_ba_mic();
  inline void set_has_ba_price();
  inline void clear_has_ba_price();
  inline void set_has_ba_size();
  inline void clear_has_ba_size();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  ::std::string* symbol_;
  ::std::string* bb_mic_;
  double bb_price_;
  double bb_size_;
  ::std::string* ba_mic_;
  double ba_price_;
  double ba_size_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(7 + 31) / 32];
  
  friend void  protobuf_AddDesc_spot_5ffx_5fmd_5f1_2eproto();
  friend void protobuf_AssignDesc_spot_5ffx_5fmd_5f1_2eproto();
  friend void protobuf_ShutdownFile_spot_5ffx_5fmd_5f1_2eproto();
  
  void InitAsDefaultInstance();
  static instrument_bbo* default_instance_;
};
// ===================================================================


// ===================================================================

// order_t

// required string name = 1;
inline bool order_t::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void order_t::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void order_t::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void order_t::clear_name() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& order_t::name() const {
  return *name_;
}
inline void order_t::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void order_t::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(value);
}
inline void order_t::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* order_t::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    name_ = new ::std::string;
  }
  return name_;
}
inline ::std::string* order_t::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string mic = 2;
inline bool order_t::has_mic() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void order_t::set_has_mic() {
  _has_bits_[0] |= 0x00000002u;
}
inline void order_t::clear_has_mic() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void order_t::clear_mic() {
  if (mic_ != &::google::protobuf::internal::kEmptyString) {
    mic_->clear();
  }
  clear_has_mic();
}
inline const ::std::string& order_t::mic() const {
  return *mic_;
}
inline void order_t::set_mic(const ::std::string& value) {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  mic_->assign(value);
}
inline void order_t::set_mic(const char* value) {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  mic_->assign(value);
}
inline void order_t::set_mic(const char* value, size_t size) {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  mic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* order_t::mutable_mic() {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  return mic_;
}
inline ::std::string* order_t::release_mic() {
  clear_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mic_;
    mic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required int32 qid = 3;
inline bool order_t::has_qid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void order_t::set_has_qid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void order_t::clear_has_qid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void order_t::clear_qid() {
  qid_ = 0;
  clear_has_qid();
}
inline ::google::protobuf::int32 order_t::qid() const {
  return qid_;
}
inline void order_t::set_qid(::google::protobuf::int32 value) {
  set_has_qid();
  qid_ = value;
}

// required .capitalk.order_t.side_t side = 4;
inline bool order_t::has_side() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void order_t::set_has_side() {
  _has_bits_[0] |= 0x00000008u;
}
inline void order_t::clear_has_side() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void order_t::clear_side() {
  side_ = 0;
  clear_has_side();
}
inline ::capitalk::order_t_side_t order_t::side() const {
  return static_cast< ::capitalk::order_t_side_t >(side_);
}
inline void order_t::set_side(::capitalk::order_t_side_t value) {
  GOOGLE_DCHECK(::capitalk::order_t_side_t_IsValid(value));
  set_has_side();
  side_ = value;
}

// required double size = 5;
inline bool order_t::has_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void order_t::set_has_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void order_t::clear_has_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void order_t::clear_size() {
  size_ = 0;
  clear_has_size();
}
inline double order_t::size() const {
  return size_;
}
inline void order_t::set_size(double value) {
  set_has_size();
  size_ = value;
}

// required double price = 6;
inline bool order_t::has_price() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void order_t::set_has_price() {
  _has_bits_[0] |= 0x00000020u;
}
inline void order_t::clear_has_price() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void order_t::clear_price() {
  price_ = 0;
  clear_has_price();
}
inline double order_t::price() const {
  return price_;
}
inline void order_t::set_price(double value) {
  set_has_price();
  price_ = value;
}

// -------------------------------------------------------------------

// mic_bbo

// required string mic = 1;
inline bool mic_bbo::has_mic() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void mic_bbo::set_has_mic() {
  _has_bits_[0] |= 0x00000001u;
}
inline void mic_bbo::clear_has_mic() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void mic_bbo::clear_mic() {
  if (mic_ != &::google::protobuf::internal::kEmptyString) {
    mic_->clear();
  }
  clear_has_mic();
}
inline const ::std::string& mic_bbo::mic() const {
  return *mic_;
}
inline void mic_bbo::set_mic(const ::std::string& value) {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  mic_->assign(value);
}
inline void mic_bbo::set_mic(const char* value) {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  mic_->assign(value);
}
inline void mic_bbo::set_mic(const char* value, size_t size) {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  mic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* mic_bbo::mutable_mic() {
  set_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    mic_ = new ::std::string;
  }
  return mic_;
}
inline ::std::string* mic_bbo::release_mic() {
  clear_has_mic();
  if (mic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = mic_;
    mic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string symbol = 2;
inline bool mic_bbo::has_symbol() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void mic_bbo::set_has_symbol() {
  _has_bits_[0] |= 0x00000002u;
}
inline void mic_bbo::clear_has_symbol() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void mic_bbo::clear_symbol() {
  if (symbol_ != &::google::protobuf::internal::kEmptyString) {
    symbol_->clear();
  }
  clear_has_symbol();
}
inline const ::std::string& mic_bbo::symbol() const {
  return *symbol_;
}
inline void mic_bbo::set_symbol(const ::std::string& value) {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  symbol_->assign(value);
}
inline void mic_bbo::set_symbol(const char* value) {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  symbol_->assign(value);
}
inline void mic_bbo::set_symbol(const char* value, size_t size) {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  symbol_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* mic_bbo::mutable_symbol() {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  return symbol_;
}
inline ::std::string* mic_bbo::release_symbol() {
  clear_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = symbol_;
    symbol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required double bid_size = 3;
inline bool mic_bbo::has_bid_size() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void mic_bbo::set_has_bid_size() {
  _has_bits_[0] |= 0x00000004u;
}
inline void mic_bbo::clear_has_bid_size() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void mic_bbo::clear_bid_size() {
  bid_size_ = 0;
  clear_has_bid_size();
}
inline double mic_bbo::bid_size() const {
  return bid_size_;
}
inline void mic_bbo::set_bid_size(double value) {
  set_has_bid_size();
  bid_size_ = value;
}

// required double bid_price = 4;
inline bool mic_bbo::has_bid_price() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void mic_bbo::set_has_bid_price() {
  _has_bits_[0] |= 0x00000008u;
}
inline void mic_bbo::clear_has_bid_price() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void mic_bbo::clear_bid_price() {
  bid_price_ = 0;
  clear_has_bid_price();
}
inline double mic_bbo::bid_price() const {
  return bid_price_;
}
inline void mic_bbo::set_bid_price(double value) {
  set_has_bid_price();
  bid_price_ = value;
}

// required double ask_size = 5;
inline bool mic_bbo::has_ask_size() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void mic_bbo::set_has_ask_size() {
  _has_bits_[0] |= 0x00000010u;
}
inline void mic_bbo::clear_has_ask_size() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void mic_bbo::clear_ask_size() {
  ask_size_ = 0;
  clear_has_ask_size();
}
inline double mic_bbo::ask_size() const {
  return ask_size_;
}
inline void mic_bbo::set_ask_size(double value) {
  set_has_ask_size();
  ask_size_ = value;
}

// required double ask_price = 6;
inline bool mic_bbo::has_ask_price() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void mic_bbo::set_has_ask_price() {
  _has_bits_[0] |= 0x00000020u;
}
inline void mic_bbo::clear_has_ask_price() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void mic_bbo::clear_ask_price() {
  ask_price_ = 0;
  clear_has_ask_price();
}
inline double mic_bbo::ask_price() const {
  return ask_price_;
}
inline void mic_bbo::set_ask_price(double value) {
  set_has_ask_price();
  ask_price_ = value;
}

// -------------------------------------------------------------------

// instrument_bbo

// required string symbol = 1;
inline bool instrument_bbo::has_symbol() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void instrument_bbo::set_has_symbol() {
  _has_bits_[0] |= 0x00000001u;
}
inline void instrument_bbo::clear_has_symbol() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void instrument_bbo::clear_symbol() {
  if (symbol_ != &::google::protobuf::internal::kEmptyString) {
    symbol_->clear();
  }
  clear_has_symbol();
}
inline const ::std::string& instrument_bbo::symbol() const {
  return *symbol_;
}
inline void instrument_bbo::set_symbol(const ::std::string& value) {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  symbol_->assign(value);
}
inline void instrument_bbo::set_symbol(const char* value) {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  symbol_->assign(value);
}
inline void instrument_bbo::set_symbol(const char* value, size_t size) {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  symbol_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* instrument_bbo::mutable_symbol() {
  set_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    symbol_ = new ::std::string;
  }
  return symbol_;
}
inline ::std::string* instrument_bbo::release_symbol() {
  clear_has_symbol();
  if (symbol_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = symbol_;
    symbol_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required string bb_mic = 2;
inline bool instrument_bbo::has_bb_mic() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void instrument_bbo::set_has_bb_mic() {
  _has_bits_[0] |= 0x00000002u;
}
inline void instrument_bbo::clear_has_bb_mic() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void instrument_bbo::clear_bb_mic() {
  if (bb_mic_ != &::google::protobuf::internal::kEmptyString) {
    bb_mic_->clear();
  }
  clear_has_bb_mic();
}
inline const ::std::string& instrument_bbo::bb_mic() const {
  return *bb_mic_;
}
inline void instrument_bbo::set_bb_mic(const ::std::string& value) {
  set_has_bb_mic();
  if (bb_mic_ == &::google::protobuf::internal::kEmptyString) {
    bb_mic_ = new ::std::string;
  }
  bb_mic_->assign(value);
}
inline void instrument_bbo::set_bb_mic(const char* value) {
  set_has_bb_mic();
  if (bb_mic_ == &::google::protobuf::internal::kEmptyString) {
    bb_mic_ = new ::std::string;
  }
  bb_mic_->assign(value);
}
inline void instrument_bbo::set_bb_mic(const char* value, size_t size) {
  set_has_bb_mic();
  if (bb_mic_ == &::google::protobuf::internal::kEmptyString) {
    bb_mic_ = new ::std::string;
  }
  bb_mic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* instrument_bbo::mutable_bb_mic() {
  set_has_bb_mic();
  if (bb_mic_ == &::google::protobuf::internal::kEmptyString) {
    bb_mic_ = new ::std::string;
  }
  return bb_mic_;
}
inline ::std::string* instrument_bbo::release_bb_mic() {
  clear_has_bb_mic();
  if (bb_mic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = bb_mic_;
    bb_mic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required double bb_price = 3;
inline bool instrument_bbo::has_bb_price() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void instrument_bbo::set_has_bb_price() {
  _has_bits_[0] |= 0x00000004u;
}
inline void instrument_bbo::clear_has_bb_price() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void instrument_bbo::clear_bb_price() {
  bb_price_ = 0;
  clear_has_bb_price();
}
inline double instrument_bbo::bb_price() const {
  return bb_price_;
}
inline void instrument_bbo::set_bb_price(double value) {
  set_has_bb_price();
  bb_price_ = value;
}

// required double bb_size = 4;
inline bool instrument_bbo::has_bb_size() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void instrument_bbo::set_has_bb_size() {
  _has_bits_[0] |= 0x00000008u;
}
inline void instrument_bbo::clear_has_bb_size() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void instrument_bbo::clear_bb_size() {
  bb_size_ = 0;
  clear_has_bb_size();
}
inline double instrument_bbo::bb_size() const {
  return bb_size_;
}
inline void instrument_bbo::set_bb_size(double value) {
  set_has_bb_size();
  bb_size_ = value;
}

// required string ba_mic = 5;
inline bool instrument_bbo::has_ba_mic() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void instrument_bbo::set_has_ba_mic() {
  _has_bits_[0] |= 0x00000010u;
}
inline void instrument_bbo::clear_has_ba_mic() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void instrument_bbo::clear_ba_mic() {
  if (ba_mic_ != &::google::protobuf::internal::kEmptyString) {
    ba_mic_->clear();
  }
  clear_has_ba_mic();
}
inline const ::std::string& instrument_bbo::ba_mic() const {
  return *ba_mic_;
}
inline void instrument_bbo::set_ba_mic(const ::std::string& value) {
  set_has_ba_mic();
  if (ba_mic_ == &::google::protobuf::internal::kEmptyString) {
    ba_mic_ = new ::std::string;
  }
  ba_mic_->assign(value);
}
inline void instrument_bbo::set_ba_mic(const char* value) {
  set_has_ba_mic();
  if (ba_mic_ == &::google::protobuf::internal::kEmptyString) {
    ba_mic_ = new ::std::string;
  }
  ba_mic_->assign(value);
}
inline void instrument_bbo::set_ba_mic(const char* value, size_t size) {
  set_has_ba_mic();
  if (ba_mic_ == &::google::protobuf::internal::kEmptyString) {
    ba_mic_ = new ::std::string;
  }
  ba_mic_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* instrument_bbo::mutable_ba_mic() {
  set_has_ba_mic();
  if (ba_mic_ == &::google::protobuf::internal::kEmptyString) {
    ba_mic_ = new ::std::string;
  }
  return ba_mic_;
}
inline ::std::string* instrument_bbo::release_ba_mic() {
  clear_has_ba_mic();
  if (ba_mic_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = ba_mic_;
    ba_mic_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// required double ba_price = 6;
inline bool instrument_bbo::has_ba_price() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void instrument_bbo::set_has_ba_price() {
  _has_bits_[0] |= 0x00000020u;
}
inline void instrument_bbo::clear_has_ba_price() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void instrument_bbo::clear_ba_price() {
  ba_price_ = 0;
  clear_has_ba_price();
}
inline double instrument_bbo::ba_price() const {
  return ba_price_;
}
inline void instrument_bbo::set_ba_price(double value) {
  set_has_ba_price();
  ba_price_ = value;
}

// required double ba_size = 7;
inline bool instrument_bbo::has_ba_size() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void instrument_bbo::set_has_ba_size() {
  _has_bits_[0] |= 0x00000040u;
}
inline void instrument_bbo::clear_has_ba_size() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void instrument_bbo::clear_ba_size() {
  ba_size_ = 0;
  clear_has_ba_size();
}
inline double instrument_bbo::ba_size() const {
  return ba_size_;
}
inline void instrument_bbo::set_ba_size(double value) {
  set_has_ba_size();
  ba_size_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace capitalk

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< ::capitalk::order_t_side_t>() {
  return ::capitalk::order_t_side_t_descriptor();
}
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::capitalk::order_t_quote_type_t>() {
  return ::capitalk::order_t_quote_type_t_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_spot_5ffx_5fmd_5f1_2eproto__INCLUDED
