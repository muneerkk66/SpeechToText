/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     google/protobuf/any.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#if COCOAPODS==1
  #include  "third_party/upb/upb/def.h"
#else
  #include  "upb/def.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upbdefs-generated/google/protobuf/any.upbdefs.h"
#else
  #include  "google/protobuf/any.upbdefs.h"
#endif

extern const upb_msglayout google_protobuf_Any_msginit;

static const upb_msglayout *layouts[1] = {
  &google_protobuf_Any_msginit,
};

static const char descriptor[221] = {'\n', '\031', 'g', 'o', 'o', 'g', 'l', 'e', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'a', 'n', 'y', '.', 'p', 'r', 'o', 
't', 'o', '\022', '\017', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '\"', '6', '\n', '\003', 'A', 'n', 
'y', '\022', '\031', '\n', '\010', 't', 'y', 'p', 'e', '_', 'u', 'r', 'l', '\030', '\001', ' ', '\001', '(', '\t', 'R', '\007', 't', 'y', 'p', 'e', 
'U', 'r', 'l', '\022', '\024', '\n', '\005', 'v', 'a', 'l', 'u', 'e', '\030', '\002', ' ', '\001', '(', '\014', 'R', '\005', 'v', 'a', 'l', 'u', 'e', 
'B', 'o', '\n', '\023', 'c', 'o', 'm', '.', 'g', 'o', 'o', 'g', 'l', 'e', '.', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', 'B', '\010', 
'A', 'n', 'y', 'P', 'r', 'o', 't', 'o', 'P', '\001', 'Z', '%', 'g', 'i', 't', 'h', 'u', 'b', '.', 'c', 'o', 'm', '/', 'g', 'o', 
'l', 'a', 'n', 'g', '/', 'p', 'r', 'o', 't', 'o', 'b', 'u', 'f', '/', 'p', 't', 'y', 'p', 'e', 's', '/', 'a', 'n', 'y', '\242', 
'\002', '\003', 'G', 'P', 'B', '\252', '\002', '\036', 'G', 'o', 'o', 'g', 'l', 'e', '.', 'P', 'r', 'o', 't', 'o', 'b', 'u', 'f', '.', 'W', 
'e', 'l', 'l', 'K', 'n', 'o', 'w', 'n', 'T', 'y', 'p', 'e', 's', 'b', '\006', 'p', 'r', 'o', 't', 'o', '3', 
};

static upb_def_init *deps[1] = {
  NULL
};

upb_def_init google_protobuf_any_proto_upbdefinit = {
  deps,
  layouts,
  "google/protobuf/any.proto",
  UPB_STRVIEW_INIT(descriptor, 221)
};
