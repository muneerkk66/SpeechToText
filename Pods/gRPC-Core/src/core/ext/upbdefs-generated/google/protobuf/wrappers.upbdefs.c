/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/wrappers.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upbdefs-generated/google/protobuf/wrappers.upbdefs.h"
#else
  #include  "google/protobuf/wrappers.upbdefs.h"
#endif

extern const upb_msglayout google_protobuf_DoubleValue_msginit;
extern const upb_msglayout google_protobuf_FloatValue_msginit;
extern const upb_msglayout google_protobuf_Int64Value_msginit;
extern const upb_msglayout google_protobuf_UInt64Value_msginit;
extern const upb_msglayout google_protobuf_Int32Value_msginit;
extern const upb_msglayout google_protobuf_UInt32Value_msginit;
extern const upb_msglayout google_protobuf_BoolValue_msginit;
extern const upb_msglayout google_protobuf_StringValue_msginit;
extern const upb_msglayout google_protobuf_BytesValue_msginit;

static const upb_msglayout *layouts[9] = {
  &google_protobuf_DoubleValue_msginit,
  &google_protobuf_FloatValue_msginit,
  &google_protobuf_Int64Value_msginit,
  &google_protobuf_UInt64Value_msginit,
  &google_protobuf_Int32Value_msginit,
  &google_protobuf_UInt32Value_msginit,
  &google_protobuf_BoolValue_msginit,
  &google_protobuf_StringValue_msginit,
  &google_protobuf_BytesValue_msginit,
};

static const char descriptor[510] = {'\n', '\036', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 
's', '.', 'p', 'r', 'o', 't', 'o', '\022', '\017', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '\"', 
'#', '\n', '\013', 'D', 'o', 'u', 'b', 'l', 'e', 'V', 'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', 
' ', '\001', '(', '\001', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '\"', '\n', '\n', 'F', 'l', 'o', 'a', 't', 'V', 'a', 'l', 'u', 'e', 
'\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', '\002', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '\"', '\n', 
'\n', 'I', 'n', 't', '6', '4', 'V', 'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', 
'\003', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '#', '\n', '\013', 'U', 'I', 'n', 't', '6', '4', 'V', 'a', 'l', 'u', 'e', '\022', '\024', 
'\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', '\004', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '\"', '\n', '\n', 'I', 
'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', '\005', 'R', 
'\005', 'v', 'a', 'l', 'u', 'e', '\"', '#', '\n', '\013', 'U', 'I', 'n', 't', '3', '2', 'V', 'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 
'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', '\r', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '!', '\n', '\t', 'B', 'o', 'o', 
'l', 'V', 'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', '\010', 'R', '\005', 'v', 'a', 
'l', 'u', 'e', '\"', '#', '\n', '\013', 'S', 't', 'r', 'i', 'n', 'g', 'V', 'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 
'u', 'e', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\005', 'v', 'a', 'l', 'u', 'e', '\"', '\"', '\n', '\n', 'B', 'y', 't', 'e', 's', 'V', 
'a', 'l', 'u', 'e', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\001', ' ', '\001', '(', '\014', 'R', '\005', 'v', 'a', 'l', 'u', 
'e', 'B', '|', '\n', '\023', 'c', 'o', 'm', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 'B', 
'\r', 'W', 'r', 'a', 'p', 'p', 'e', 'r', 's', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', '*', 'g', 'i', 't', 'h', 'u', 'b', '.', 
'c', 'o', 'm', '/', 'g', 'o', 'l', 'a', 'n', 'g', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'p', 't', 'y', 'p', 'e', 
's', '/', 'w', 'r', 'a', 'p', 'p', 'e', 'r', 's', '\370', '\001', '\001', '\242', '\002', '\003', 'G', 'P', 'B', '\252', '\002', '\036', 'G', 'o', 'o', 
'g', 'l', 'e', '.', 'P', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'W', 'e', 'l', 'l', 'K', 'n', 'o', 'w', 'n', 'T', 'y', 'p', 
'e', 's', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[1] = {
  NULL
};

upb_def_init google_protobuf_wrappers_proto_upbdefinit = {
  deps,
  layouts,
  "google/protobuf/wrappers.proto",
  UPB_STRVIEW_INIT(descriptor, 510)
};
