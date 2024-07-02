#include <tutf8e.h>

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int pass = 0;
  int fail = 0;
  int ret;
  char *copy;
  size_t input_length, output_length;
  char buffer[1024];

  static const char english[] = {
    0x41, 0x20, 0x71, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x62, 0x72, 0x6f, 0x77, 0x6e, 0x20, 0x66, 0x6f, 0x78, 0x20, 0x6a, 0x75, 0x6d, 0x70, 0x73, 0x20,
    0x6f, 0x76, 0x65, 0x72, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x61, 0x7a, 0x79, 0x20, 0x64, 0x6f, 0x67, 0x00,
  };
  static const char finnish[] = {
    0x41, 0x6c, 0x62, 0x65, 0x72, 0x74, 0x20, 0x6f, 0x73, 0x74, 0x69, 0x20, 0x66, 0x61, 0x67, 0x6f, 0x74, 0x69, 0x6e, 0x20, 0x6a, 0x61, 0x20, 0x74,
    0xf6, 0x72, 0xe4, 0x79, 0x74, 0x74, 0x69, 0x20, 0x70, 0x75, 0x68, 0x6b, 0x75, 0x76, 0x61, 0x6e, 0x20, 0x6d, 0x65, 0x6c, 0x6f, 0x64, 0x69, 0x61,
    0x6e, 0x2e, 0x00,
  };
  static const char czech[] = {
    0x4e, 0x65, 0x63, 0x68, 0xbb, 0x20, 0x6a, 0x69, 0xbe, 0x20, 0x68, 0xf8, 0xed, 0xb9, 0x6e, 0xe9, 0x20, 0x73, 0x61, 0x78, 0x6f, 0x66, 0x6f, 0x6e,
    0x79, 0x20, 0xef, 0xe1, 0x62, 0x6c, 0xf9, 0x20, 0x72, 0x6f, 0x7a, 0x65, 0x7a, 0x76, 0x75, 0xe8, 0xed, 0x20, 0x73, 0xed, 0xf2, 0x20, 0xfa, 0x64,
    0xec, 0x73, 0x6e, 0xfd, 0x6d, 0x69, 0x20, 0x74, 0xf3, 0x6e, 0x79, 0x20, 0x77, 0x61, 0x6c, 0x74, 0x7a, 0x75, 0x2c, 0x20, 0x74, 0x61, 0x6e, 0x67,
    0x61, 0x20, 0x61, 0x20, 0x71, 0x75, 0x69, 0x63, 0x6b, 0x73, 0x74, 0x65, 0x70, 0x75, 0x2e, 0x00,
  };
  static const char turkish[] = {
    0x50, 0x69, 0x6a, 0x61, 0x6d, 0x61, 0x6c, 0xb9, 0x20, 0x68, 0x61, 0x73, 0x74, 0x61, 0x20, 0x79, 0x61, 0xbb, 0xb9, 0x7a, 0x20, 0xba, 0x6f, 0x66,
    0xf6, 0x72, 0x65, 0x20, 0xe7, 0x61, 0x62, 0x75, 0x63, 0x61, 0x6b, 0x20, 0x67, 0xfc, 0x76, 0x65, 0x6e, 0x64, 0x69, 0x2e, 0x00,
  };
  static const char estonian[] = {
    0x50, 0xf5, 0x64, 0x75, 0x72, 0x20, 0x5a, 0x61, 0x67, 0x72, 0x65, 0x62, 0x69, 0x20, 0x74, 0xb9, 0x65, 0x6c, 0x6c, 0x6f, 0x6d, 0xe4, 0x6e, 0x67,
    0x69, 0x6a, 0x61, 0x2d, 0x66, 0xf6, 0x6c, 0x6a, 0x65, 0x74, 0x6f, 0x6e, 0x69, 0x73, 0x74, 0x20, 0x43, 0x69, 0x71, 0x6f, 0x20, 0x6b, 0xfc, 0x6c,
    0x6d, 0x65, 0x74, 0x61, 0x73, 0x20, 0x6b, 0x65, 0x68, 0x76, 0x61, 0x73, 0x20, 0x67, 0x61, 0x72, 0x61, 0x61, 0xbe, 0x69, 0x73, 0x00,
  };
  static const char russian[] = {
    0xb2, 0x20, 0xe7, 0xd0, 0xe9, 0xd0, 0xe5, 0x20, 0xee, 0xd3, 0xd0, 0x20, 0xd6, 0xd8, 0xdb, 0x20, 0xd1, 0xeb, 0x20, 0xe6, 0xd8, 0xe2, 0xe0, 0xe3,
    0xe1, 0x3f, 0x20, 0xb4, 0xd0, 0x2c, 0x20, 0xdd, 0xde, 0x20, 0xe4, 0xd0, 0xdb, 0xec, 0xe8, 0xd8, 0xd2, 0xeb, 0xd9, 0x20, 0xed, 0xda, 0xd7, 0xd5,
    0xdc, 0xdf, 0xdb, 0xef, 0xe0, 0x21, 0x00,
  };
  static const char greek[] = {
    0xe4, 0xe9, 0xe1, 0xf6, 0xf5, 0xeb, 0xdc, 0xee, 0xf4, 0xe5, 0x20, 0xe3, 0xe5, 0xed, 0xe9, 0xea, 0xdc, 0x20, 0xf4, 0xe7, 0x20, 0xe6, 0xf9, 0xde,
    0x20, 0xf3, 0xe1, 0xf2, 0x20, 0xe1, 0xf0, 0xfc, 0x20, 0xe2, 0xe1, 0xe8, 0xe5, 0xe9, 0xdc, 0x20, 0xf8, 0xf5, 0xf7, 0xe9, 0xea, 0xdc, 0x20, 0xf4,
    0xf1, 0xe1, 0xfd, 0xec, 0xe1, 0xf4, 0xe1, 0x00,
  };
  static const char hebrew[] = {
    0xf2, 0xe8, 0xec, 0xf3, 0x20, 0xe0, 0xe1, 0xf7, 0x20, 0xf0, 0xf1, 0x20, 0xe3, 0xf8, 0xea, 0x20, 0xee, 0xe6, 0xe2, 0xef, 0x20, 0xf9, 0xe4, 0xfa,
    0xf4, 0xe5, 0xf6, 0xf5, 0x20, 0xeb, 0xe9, 0x20, 0xe7, 0xed, 0x00,
  };
  static const char turkish2[] = {
    0x50, 0x69, 0x6a, 0x61, 0x6d, 0x61, 0x6c, 0xfd, 0x20, 0x68, 0x61, 0x73, 0x74, 0x61, 0x20, 0x79, 0x61, 0xf0, 0xfd, 0x7a, 0x20, 0xfe, 0x6f, 0x66,
    0xf6, 0x72, 0x65, 0x20, 0xe7, 0x61, 0x62, 0x75, 0x63, 0x61, 0x6b, 0x20, 0x67, 0xfc, 0x76, 0x65, 0x6e, 0x64, 0x69, 0x2e, 0x00,
  };
  static const char swedish[] = {
    0x46, 0x6c, 0x79, 0x67, 0x61, 0x6e, 0x64, 0x65, 0x20, 0x62, 0xe4, 0x63, 0x6b, 0x61, 0x73, 0x69, 0x6e, 0x65, 0x72, 0x20, 0x73, 0xf6, 0x6b, 0x61,
    0x20, 0x68, 0x77, 0x69, 0x6c, 0x61, 0x20, 0x70, 0xe5, 0x20, 0x6d, 0x6a, 0x75, 0x6b, 0x61, 0x20, 0x74, 0x75, 0x76, 0x6f, 0x72, 0x2e, 0x00,
  };
  static const char thai[] = {
    0xe0, 0xbb, 0xe7, 0xb9, 0xc1, 0xb9, 0xd8, 0xc9, 0xc2, 0xec, 0xca, 0xd8, 0xb4, 0xbb, 0xc3, 0xd0, 0xe0, 0xca, 0xc3, 0xd4, 0xb0, 0xe0, 0xc5, 0xd4,
    0xc8, 0xa4, 0xd8, 0xb3, 0xa4, 0xe8, 0xd2, 0x20, 0xa1, 0xc7, 0xe8, 0xd2, 0xba, 0xc3, 0xc3, 0xb4, 0xd2, 0xbd, 0xd9, 0xa7, 0xca, 0xd1, 0xb5, 0xc7,
    0xec, 0xe0, 0xb4, 0xc3, 0xd1, 0xa8, 0xa9, 0xd2, 0xb9, 0x20, 0xa8, 0xa7, 0xbd, 0xe8, 0xd2, 0xbf, 0xd1, 0xb9, 0xbe, 0xd1, 0xb2, 0xb9, 0xd2, 0xc7,
    0xd4, 0xaa, 0xd2, 0xa1, 0xd2, 0xc3, 0x20, 0xcd, 0xc2, 0xe8, 0xd2, 0xc5, 0xe9, 0xd2, 0xa7, 0xbc, 0xc5, 0xd2, 0xad, 0xc4, 0xe5, 0xe0, 0xa2, 0xe8,
    0xb9, 0xa6, 0xe8, 0xd2, 0xba, 0xd5, 0xb1, 0xd2, 0xe3, 0xa4, 0xc3, 0x20, 0xe4, 0xc1, 0xe8, 0xb6, 0xd7, 0xcd, 0xe2, 0xb7, 0xc9, 0xe2, 0xa1, 0xc3,
    0xb8, 0xe1, 0xaa, 0xe8, 0xa7, 0xab, 0xd1, 0xb4, 0xce, 0xd6, 0xb4, 0xce, 0xd1, 0xb4, 0xb4, 0xe8, 0xd2, 0x20, 0xcb, 0xd1, 0xb4, 0xcd, 0xc0, 0xd1,
    0xc2, 0xe0, 0xcb, 0xc1, 0xd7, 0xcd, 0xb9, 0xa1, 0xd5, 0xcc, 0xd2, 0xcd, 0xd1, 0xaa, 0xac, 0xd2, 0xca, 0xd1, 0xc2, 0x20, 0xbb, 0xaf, 0xd4, 0xba,
    0xd1, 0xb5, 0xd4, 0xbb, 0xc3, 0xd0, 0xbe, 0xc4, 0xb5, 0xd4, 0xa1, 0xae, 0xa1, 0xd3, 0xcb, 0xb9, 0xb4, 0xe3, 0xa8, 0x20, 0xbe, 0xd9, 0xb4, 0xa8,
    0xd2, 0xe3, 0xcb, 0xe9, 0xa8, 0xea, 0xd0, 0xe6, 0x20, 0xa8, 0xeb, 0xd2, 0xe6, 0x20, 0xb9, 0xe8, 0xd2, 0xbf, 0xd1, 0xa7, 0xe0, 0xcd, 0xc2, 0xcf,
    0x00,
  };
  static const char polish[] = {
    0x4a, 0x65, 0xfd, 0x75, 0x20, 0x6b, 0x6c, 0xe0, 0x74, 0x77, 0x2c, 0x20, 0x73, 0x70, 0xf9, 0xf3, 0x64, 0xea, 0x20, 0x46, 0x69, 0x6e, 0x6f, 0x6d,
    0x20, 0x63, 0x7a, 0xe6, 0xfa, 0xe3, 0x20, 0x67, 0x72, 0x79, 0x20, 0x68, 0x61, 0xf1, 0x62, 0x21, 0x00,
  };

  static const char englishUTF8[] = {
    0x41, 0x20, 0x71, 0x75, 0x69, 0x63, 0x6b, 0x20, 0x62, 0x72, 0x6f, 0x77, 0x6e, 0x20, 0x66, 0x6f, 0x78, 0x20, 0x6a, 0x75, 0x6d, 0x70, 0x73, 0x20,
    0x6f, 0x76, 0x65, 0x72, 0x20, 0x74, 0x68, 0x65, 0x20, 0x6c, 0x61, 0x7a, 0x79, 0x20, 0x64, 0x6f, 0x67, 0x00,
  };
  static const char finnishUTF8[] = {
    0x41, 0x6c, 0x62, 0x65, 0x72, 0x74, 0x20, 0x6f, 0x73, 0x74, 0x69, 0x20, 0x66, 0x61, 0x67, 0x6f, 0x74, 0x69, 0x6e, 0x20, 0x6a, 0x61, 0x20, 0x74,
    0xc3, 0xb6, 0x72, 0xc3, 0xa4, 0x79, 0x74, 0x74, 0x69, 0x20, 0x70, 0x75, 0x68, 0x6b, 0x75, 0x76, 0x61, 0x6e, 0x20, 0x6d, 0x65, 0x6c, 0x6f, 0x64,
    0x69, 0x61, 0x6e, 0x2e, 0x00,
  };
  static const char czechUTF8[] = {
    0x4e, 0x65, 0x63, 0x68, 0xc5, 0xa5, 0x20, 0x6a, 0x69, 0xc5, 0xbe, 0x20, 0x68, 0xc5, 0x99, 0xc3, 0xad, 0xc5, 0xa1, 0x6e, 0xc3, 0xa9, 0x20, 0x73,
    0x61, 0x78, 0x6f, 0x66, 0x6f, 0x6e, 0x79, 0x20, 0xc4, 0x8f, 0xc3, 0xa1, 0x62, 0x6c, 0xc5, 0xaf, 0x20, 0x72, 0x6f, 0x7a, 0x65, 0x7a, 0x76, 0x75,
    0xc4, 0x8d, 0xc3, 0xad, 0x20, 0x73, 0xc3, 0xad, 0xc5, 0x88, 0x20, 0xc3, 0xba, 0x64, 0xc4, 0x9b, 0x73, 0x6e, 0xc3, 0xbd, 0x6d, 0x69, 0x20, 0x74,
    0xc3, 0xb3, 0x6e, 0x79, 0x20, 0x77, 0x61, 0x6c, 0x74, 0x7a, 0x75, 0x2c, 0x20, 0x74, 0x61, 0x6e, 0x67, 0x61, 0x20, 0x61, 0x20, 0x71, 0x75, 0x69,
    0x63, 0x6b, 0x73, 0x74, 0x65, 0x70, 0x75, 0x2e, 0x00,
  };
  static const char turkishUTF8[] = {
    0x50, 0x69, 0x6a, 0x61, 0x6d, 0x61, 0x6c, 0xc4, 0xb1, 0x20, 0x68, 0x61, 0x73, 0x74, 0x61, 0x20, 0x79, 0x61, 0xc4, 0x9f, 0xc4, 0xb1, 0x7a, 0x20,
    0xc5, 0x9f, 0x6f, 0x66, 0xc3, 0xb6, 0x72, 0x65, 0x20, 0xc3, 0xa7, 0x61, 0x62, 0x75, 0x63, 0x61, 0x6b, 0x20, 0x67, 0xc3, 0xbc, 0x76, 0x65, 0x6e,
    0x64, 0x69, 0x2e, 0x00,
  };
  static const char estonianUTF8[] = {
    0x50, 0xc3, 0xb5, 0x64, 0x75, 0x72, 0x20, 0x5a, 0x61, 0x67, 0x72, 0x65, 0x62, 0x69, 0x20, 0x74, 0xc5, 0xa1, 0x65, 0x6c, 0x6c, 0x6f, 0x6d, 0xc3,
    0xa4, 0x6e, 0x67, 0x69, 0x6a, 0x61, 0x2d, 0x66, 0xc3, 0xb6, 0x6c, 0x6a, 0x65, 0x74, 0x6f, 0x6e, 0x69, 0x73, 0x74, 0x20, 0x43, 0x69, 0x71, 0x6f,
    0x20, 0x6b, 0xc3, 0xbc, 0x6c, 0x6d, 0x65, 0x74, 0x61, 0x73, 0x20, 0x6b, 0x65, 0x68, 0x76, 0x61, 0x73, 0x20, 0x67, 0x61, 0x72, 0x61, 0x61, 0xc5,
    0xbe, 0x69, 0x73, 0x00,
  };
  static const char russianUTF8[] = {
    0xd0, 0x92, 0x20, 0xd1, 0x87, 0xd0, 0xb0, 0xd1, 0x89, 0xd0, 0xb0, 0xd1, 0x85, 0x20, 0xd1, 0x8e, 0xd0, 0xb3, 0xd0, 0xb0, 0x20, 0xd0, 0xb6, 0xd0,
    0xb8, 0xd0, 0xbb, 0x20, 0xd0, 0xb1, 0xd1, 0x8b, 0x20, 0xd1, 0x86, 0xd0, 0xb8, 0xd1, 0x82, 0xd1, 0x80, 0xd1, 0x83, 0xd1, 0x81, 0x3f, 0x20, 0xd0,
    0x94, 0xd0, 0xb0, 0x2c, 0x20, 0xd0, 0xbd, 0xd0, 0xbe, 0x20, 0xd1, 0x84, 0xd0, 0xb0, 0xd0, 0xbb, 0xd1, 0x8c, 0xd1, 0x88, 0xd0, 0xb8, 0xd0, 0xb2,
    0xd1, 0x8b, 0xd0, 0xb9, 0x20, 0xd1, 0x8d, 0xd0, 0xba, 0xd0, 0xb7, 0xd0, 0xb5, 0xd0, 0xbc, 0xd0, 0xbf, 0xd0, 0xbb, 0xd1, 0x8f, 0xd1, 0x80, 0x21,
    0x00,
  };
  static const char greekUTF8[] = {
    0xce, 0xb4, 0xce, 0xb9, 0xce, 0xb1, 0xcf, 0x86, 0xcf, 0x85, 0xce, 0xbb, 0xce, 0xac, 0xce, 0xbe, 0xcf, 0x84, 0xce, 0xb5, 0x20, 0xce, 0xb3, 0xce,
    0xb5, 0xce, 0xbd, 0xce, 0xb9, 0xce, 0xba, 0xce, 0xac, 0x20, 0xcf, 0x84, 0xce, 0xb7, 0x20, 0xce, 0xb6, 0xcf, 0x89, 0xce, 0xae, 0x20, 0xcf, 0x83,
    0xce, 0xb1, 0xcf, 0x82, 0x20, 0xce, 0xb1, 0xcf, 0x80, 0xcf, 0x8c, 0x20, 0xce, 0xb2, 0xce, 0xb1, 0xce, 0xb8, 0xce, 0xb5, 0xce, 0xb9, 0xce, 0xac,
    0x20, 0xcf, 0x88, 0xcf, 0x85, 0xcf, 0x87, 0xce, 0xb9, 0xce, 0xba, 0xce, 0xac, 0x20, 0xcf, 0x84, 0xcf, 0x81, 0xce, 0xb1, 0xcf, 0x8d, 0xce, 0xbc,
    0xce, 0xb1, 0xcf, 0x84, 0xce, 0xb1, 0x00,
  };
  static const char hebrewUTF8[] = {
    0xd7, 0xa2, 0xd7, 0x98, 0xd7, 0x9c, 0xd7, 0xa3, 0x20, 0xd7, 0x90, 0xd7, 0x91, 0xd7, 0xa7, 0x20, 0xd7, 0xa0, 0xd7, 0xa1, 0x20, 0xd7, 0x93, 0xd7,
    0xa8, 0xd7, 0x9a, 0x20, 0xd7, 0x9e, 0xd7, 0x96, 0xd7, 0x92, 0xd7, 0x9f, 0x20, 0xd7, 0xa9, 0xd7, 0x94, 0xd7, 0xaa, 0xd7, 0xa4, 0xd7, 0x95, 0xd7,
    0xa6, 0xd7, 0xa5, 0x20, 0xd7, 0x9b, 0xd7, 0x99, 0x20, 0xd7, 0x97, 0xd7, 0x9d, 0x00,
  };
  static const char turkish2UTF8[] = {
    0x50, 0x69, 0x6a, 0x61, 0x6d, 0x61, 0x6c, 0xc4, 0xb1, 0x20, 0x68, 0x61, 0x73, 0x74, 0x61, 0x20, 0x79, 0x61, 0xc4, 0x9f, 0xc4, 0xb1, 0x7a, 0x20,
    0xc5, 0x9f, 0x6f, 0x66, 0xc3, 0xb6, 0x72, 0x65, 0x20, 0xc3, 0xa7, 0x61, 0x62, 0x75, 0x63, 0x61, 0x6b, 0x20, 0x67, 0xc3, 0xbc, 0x76, 0x65, 0x6e,
    0x64, 0x69, 0x2e, 0x00,
  };
  static const char swedishUTF8[] = {
    0x46, 0x6c, 0x79, 0x67, 0x61, 0x6e, 0x64, 0x65, 0x20, 0x62, 0xc3, 0xa4, 0x63, 0x6b, 0x61, 0x73, 0x69, 0x6e, 0x65, 0x72, 0x20, 0x73, 0xc3, 0xb6,
    0x6b, 0x61, 0x20, 0x68, 0x77, 0x69, 0x6c, 0x61, 0x20, 0x70, 0xc3, 0xa5, 0x20, 0x6d, 0x6a, 0x75, 0x6b, 0x61, 0x20, 0x74, 0x75, 0x76, 0x6f, 0x72,
    0x2e, 0x00,
  };
  static const char thaiUTF8[] = {
    0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0x9b, 0xe0, 0xb9, 0x87, 0xe0, 0xb8, 0x99, 0xe0, 0xb8, 0xa1, 0xe0, 0xb8, 0x99, 0xe0, 0xb8, 0xb8, 0xe0, 0xb8, 0xa9,
    0xe0, 0xb8, 0xa2, 0xe0, 0xb9, 0x8c, 0xe0, 0xb8, 0xaa, 0xe0, 0xb8, 0xb8, 0xe0, 0xb8, 0x94, 0xe0, 0xb8, 0x9b, 0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0xb0,
    0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0xaa, 0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0xb4, 0xe0, 0xb8, 0x90, 0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0xa5, 0xe0, 0xb8, 0xb4,
    0xe0, 0xb8, 0xa8, 0xe0, 0xb8, 0x84, 0xe0, 0xb8, 0xb8, 0xe0, 0xb8, 0x93, 0xe0, 0xb8, 0x84, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0xb2, 0x20, 0xe0, 0xb8,
    0x81, 0xe0, 0xb8, 0xa7, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0x9a, 0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0x94, 0xe0, 0xb8,
    0xb2, 0xe0, 0xb8, 0x9d, 0xe0, 0xb8, 0xb9, 0xe0, 0xb8, 0x87, 0xe0, 0xb8, 0xaa, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x95, 0xe0, 0xb8, 0xa7, 0xe0, 0xb9,
    0x8c, 0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0x94, 0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x88, 0xe0, 0xb8, 0x89, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8,
    0x99, 0x20, 0xe0, 0xb8, 0x88, 0xe0, 0xb8, 0x87, 0xe0, 0xb8, 0x9d, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0x9f, 0xe0, 0xb8, 0xb1, 0xe0,
    0xb8, 0x99, 0xe0, 0xb8, 0x9e, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x92, 0xe0, 0xb8, 0x99, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0xa7, 0xe0, 0xb8, 0xb4, 0xe0,
    0xb8, 0x8a, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0x81, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0xa3, 0x20, 0xe0, 0xb8, 0xad, 0xe0, 0xb8, 0xa2, 0xe0, 0xb9, 0x88,
    0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0xa5, 0xe0, 0xb9, 0x89, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0x87, 0xe0, 0xb8, 0x9c, 0xe0, 0xb8, 0xa5, 0xe0, 0xb8, 0xb2,
    0xe0, 0xb8, 0x8d, 0xe0, 0xb8, 0xa4, 0xe0, 0xb9, 0x85, 0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0x82, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0x99, 0xe0, 0xb8, 0x86,
    0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0x9a, 0xe0, 0xb8, 0xb5, 0xe0, 0xb8, 0x91, 0xe0, 0xb8, 0xb2, 0xe0, 0xb9, 0x83, 0xe0, 0xb8, 0x84,
    0xe0, 0xb8, 0xa3, 0x20, 0xe0, 0xb9, 0x84, 0xe0, 0xb8, 0xa1, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0x96, 0xe0, 0xb8, 0xb7, 0xe0, 0xb8, 0xad, 0xe0, 0xb9,
    0x82, 0xe0, 0xb8, 0x97, 0xe0, 0xb8, 0xa9, 0xe0, 0xb9, 0x82, 0xe0, 0xb8, 0x81, 0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0x98, 0xe0, 0xb9, 0x81, 0xe0, 0xb8,
    0x8a, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0x87, 0xe0, 0xb8, 0x8b, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x94, 0xe0, 0xb8, 0xae, 0xe0, 0xb8, 0xb6, 0xe0, 0xb8,
    0x94, 0xe0, 0xb8, 0xae, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x94, 0xe0, 0xb8, 0x94, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0xb2, 0x20, 0xe0, 0xb8, 0xab, 0xe0,
    0xb8, 0xb1, 0xe0, 0xb8, 0x94, 0xe0, 0xb8, 0xad, 0xe0, 0xb8, 0xa0, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0xa2, 0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0xab, 0xe0,
    0xb8, 0xa1, 0xe0, 0xb8, 0xb7, 0xe0, 0xb8, 0xad, 0xe0, 0xb8, 0x99, 0xe0, 0xb8, 0x81, 0xe0, 0xb8, 0xb5, 0xe0, 0xb8, 0xac, 0xe0, 0xb8, 0xb2, 0xe0,
    0xb8, 0xad, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x8a, 0xe0, 0xb8, 0x8c, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0xaa, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0xa2, 0x20,
    0xe0, 0xb8, 0x9b, 0xe0, 0xb8, 0x8f, 0xe0, 0xb8, 0xb4, 0xe0, 0xb8, 0x9a, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x95, 0xe0, 0xb8, 0xb4, 0xe0, 0xb8, 0x9b,
    0xe0, 0xb8, 0xa3, 0xe0, 0xb8, 0xb0, 0xe0, 0xb8, 0x9e, 0xe0, 0xb8, 0xa4, 0xe0, 0xb8, 0x95, 0xe0, 0xb8, 0xb4, 0xe0, 0xb8, 0x81, 0xe0, 0xb8, 0x8e,
    0xe0, 0xb8, 0x81, 0xe0, 0xb8, 0xb3, 0xe0, 0xb8, 0xab, 0xe0, 0xb8, 0x99, 0xe0, 0xb8, 0x94, 0xe0, 0xb9, 0x83, 0xe0, 0xb8, 0x88, 0x20, 0xe0, 0xb8,
    0x9e, 0xe0, 0xb8, 0xb9, 0xe0, 0xb8, 0x94, 0xe0, 0xb8, 0x88, 0xe0, 0xb8, 0xb2, 0xe0, 0xb9, 0x83, 0xe0, 0xb8, 0xab, 0xe0, 0xb9, 0x89, 0xe0, 0xb8,
    0x88, 0xe0, 0xb9, 0x8a, 0xe0, 0xb8, 0xb0, 0xe0, 0xb9, 0x86, 0x20, 0xe0, 0xb8, 0x88, 0xe0, 0xb9, 0x8b, 0xe0, 0xb8, 0xb2, 0xe0, 0xb9, 0x86, 0x20,
    0xe0, 0xb8, 0x99, 0xe0, 0xb9, 0x88, 0xe0, 0xb8, 0xb2, 0xe0, 0xb8, 0x9f, 0xe0, 0xb8, 0xb1, 0xe0, 0xb8, 0x87, 0xe0, 0xb9, 0x80, 0xe0, 0xb8, 0xad,
    0xe0, 0xb8, 0xa2, 0xe0, 0xb8, 0xaf, 0x00,
  };
  static const char polishUTF8[] = {
    0x4a, 0x65, 0xc5, 0xbc, 0x75, 0x20, 0x6b, 0x6c, 0xc4, 0x85, 0x74, 0x77, 0x2c, 0x20, 0x73, 0x70, 0xc5, 0x82, 0xc3, 0xb3, 0x64, 0xc5, 0xba, 0x20,
    0x46, 0x69, 0x6e, 0x6f, 0x6d, 0x20, 0x63, 0x7a, 0xc4, 0x99, 0xc5, 0x9b, 0xc4, 0x87, 0x20, 0x67, 0x72, 0x79, 0x20, 0x68, 0x61, 0xc5, 0x84, 0x62,
    0x21, 0x00,
  };

  /* string encode to UTF8, error on invalid input */
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_1, english, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, englishUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode english test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_1, finnish, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, finnishUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode finnish test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_2, czech, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, czechUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode czech test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_3, turkish, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, turkishUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode turkish test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_4, estonian, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, estonianUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode estonian test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_5, russian, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, russianUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode russian test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_7, greek, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, greekUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode greek test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_8, hebrew, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, hebrewUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode hebrew test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_9, turkish2, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, turkish2UTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode turkish2 test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_10, swedish, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, swedishUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode swedish test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_11, thai, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, thaiUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode thai test\n");
    fail++;
  }

  output_length = sizeof(buffer);
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_13, polish, NULL, buffer, &output_length);
  if (!ret && !strcmp(buffer, polishUTF8)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode polish test\n");
    fail++;
  }


  /* buffer encode to UTF8, error on invalid input */
  input_length = strlen(english);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_1, english, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(englishUTF8) && !strncmp(buffer, englishUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode english test\n");
    fail++;
  }

  input_length = strlen(finnish);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_1, finnish, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(finnishUTF8) && !strncmp(buffer, finnishUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode finnish test\n");
    fail++;
  }

  input_length = strlen(czech);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_2, czech, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(czechUTF8) && !strncmp(buffer, czechUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode czech test\n");
    fail++;
  }

  input_length = strlen(turkish);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_3, turkish, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(turkishUTF8) && !strncmp(buffer, turkishUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode turkish test\n");
    fail++;
  }

  input_length = strlen(estonian);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_4, estonian, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(estonianUTF8) && !strncmp(buffer, estonianUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode estonian test\n");
    fail++;
  }

  input_length = strlen(russian);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_5, russian, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(russianUTF8) && !strncmp(buffer, russianUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode russian test\n");
    fail++;
  }

  input_length = strlen(greek);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_7, greek, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(greekUTF8) && !strncmp(buffer, greekUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode greek test\n");
    fail++;
  }

  input_length = strlen(hebrew);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_8, hebrew, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(hebrewUTF8) && !strncmp(buffer, hebrewUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode hebrew test\n");
    fail++;
  }

  input_length = strlen(turkish2);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_9, turkish2, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(turkish2UTF8) && !strncmp(buffer, turkish2UTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode turkish2 test\n");
    fail++;
  }

  input_length = strlen(swedish);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_10, swedish, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(swedishUTF8) && !strncmp(buffer, swedishUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode swedish test\n");
    fail++;
  }

  input_length = strlen(thai);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_11, thai, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(thaiUTF8) && !strncmp(buffer, thaiUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode thai test\n");
    fail++;
  }

  input_length = strlen(polish);
  output_length = sizeof(buffer);
  ret = tutf8e_encoder_buffer_encode(tutf8e_encoder_iso_8859_13, polish, input_length, NULL, buffer, &output_length);
  if (!ret && (output_length+1)==sizeof(polishUTF8) && !strncmp(buffer, polishUTF8, output_length)) {
    pass++;
  } else {
    printf("Failed to encode polish test\n");
    fail++;
  }


  /* string encode to UTF8, first input character invalid -> ? */
  output_length = sizeof(buffer);
  copy = strdup(greek);
  copy[0] = 255;
  buffer[0] = 255;
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_7, copy, "?", buffer, &output_length);
  if (!ret && buffer[0]=='?') {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode greek test\n");
    fail++;
  }
  free(copy);

  output_length = sizeof(buffer);
  copy = strdup(thai);
  copy[0] = 255;
  buffer[0] = 255;
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_11, copy, "?", buffer, &output_length);
  if (!ret && buffer[0]=='?') {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode thai test\n");
    fail++;
  }
  free(copy);


  /* string encode to UTF8, first input character invalid -> [INVALID] */
  output_length = sizeof(buffer);
  copy = strdup(greek);
  copy[0] = 255;
  buffer[0] = 255;
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_7, copy, "[INVALID]", buffer, &output_length);
  if (!ret && !strncmp(buffer, "[INVALID]", 9)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode greek test\n");
    fail++;
  }
  free(copy);

  output_length = sizeof(buffer);
  copy = strdup(thai);
  copy[0] = 255;
  buffer[0] = 255;
  ret = tutf8e_encoder_string_encode(tutf8e_encoder_iso_8859_11, copy, "[INVALID]", buffer, &output_length);
  if (!ret && !strncmp(buffer, "[INVALID]", 9)) {
    printf("%s\n", buffer);
    pass++;
  } else {
    printf("Failed to encode thai test\n");
    fail++;
  }
  free(copy);

  printf("%d passed, %d failed tests\n", pass, fail);
}