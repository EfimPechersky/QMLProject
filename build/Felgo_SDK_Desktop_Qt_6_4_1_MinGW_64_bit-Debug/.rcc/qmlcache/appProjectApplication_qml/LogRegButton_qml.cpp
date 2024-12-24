// /qml/LogRegButton.qml
#include <QtQml/qqmlprivate.h>
#include <QtCore/qdatetime.h>
#include <QtCore/qobject.h>
#include <QtCore/qstring.h>
#include <QtCore/qstringlist.h>
#include <QtCore/qurl.h>
#include <QtCore/qvariant.h>
#include <QtQml/qjsengine.h>
#include <QtQml/qjsprimitivevalue.h>
#include <QtQml/qjsvalue.h>
#include <QtQml/qqmlcomponent.h>
#include <QtQml/qqmlcontext.h>
#include <QtQml/qqmlengine.h>
#include <type_traits>
namespace QmlCacheGeneratedCode {
namespace _qml_LogRegButton_qml {
extern const unsigned char qmlData alignas(16) [] = {

0x71,0x76,0x34,0x63,0x64,0x61,0x74,0x61,
0x36,0x0,0x0,0x0,0x1,0x4,0x6,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0xe,0x0,0x0,0x38,0x64,0x38,0x31,
0x33,0x35,0x36,0x66,0x62,0x64,0x30,0x32,
0x37,0x65,0x39,0x31,0x36,0x35,0x62,0x63,
0x62,0x32,0x38,0x30,0x63,0x62,0x39,0x32,
0x66,0x36,0x66,0x65,0x65,0x63,0x62,0x66,
0x65,0x37,0x39,0x65,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb6,0x12,0x52,0x3f,
0xf3,0xf8,0x74,0x9e,0xc1,0x97,0x42,0x58,
0x1e,0x85,0x61,0x60,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0x24,0x0,0x0,0x0,0x58,0x4,0x0,0x0,
0x8,0x0,0x0,0x0,0xf8,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0x3,0x0,0x0,0x0,0x18,0x1,0x0,0x0,
0xd,0x0,0x0,0x0,0x24,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x58,0x1,0x0,0x0,
0x1,0x0,0x0,0x0,0x60,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0x0,0x0,0x0,0x0,0x68,0x1,0x0,0x0,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe0,0x8,0x0,0x0,
0x68,0x1,0x0,0x0,0xb8,0x1,0x0,0x0,
0x8,0x2,0x0,0x0,0x50,0x2,0x0,0x0,
0x98,0x2,0x0,0x0,0x8,0x3,0x0,0x0,
0x78,0x3,0x0,0x0,0xe0,0x3,0x0,0x0,
0x28,0x4,0x0,0x0,0x38,0x4,0x0,0x0,
0x48,0x4,0x0,0x0,0x23,0x2,0x0,0x0,
0x40,0x1,0x0,0x0,0x23,0x2,0x0,0x0,
0x60,0x1,0x0,0x0,0x23,0x2,0x0,0x0,
0x23,0x2,0x0,0x0,0xd3,0x0,0x0,0x0,
0x61,0x0,0x0,0x0,0xd3,0x0,0x0,0x0,
0x61,0x0,0x0,0x0,0x53,0x0,0x0,0x0,
0xb0,0x0,0x0,0x0,0x23,0x2,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xd8,0xbf,
0x40,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x12,0x0,0x0,0x0,
0x2e,0x0,0x3c,0x1,0x18,0x7,0x10,0x2,
0xa2,0x7,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0xd,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x8,0x0,0x0,0x0,
0x13,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x2e,0x2,0x3c,0x3,0x18,0x7,0x10,0x2,
0xa2,0x7,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0xe,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x2e,0x4,0x18,0x6,0x2,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x11,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x14,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x14,0x0,0x0,0x0,
0x2e,0x5,0x18,0x6,0x2,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x1d,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0x9,0x0,0x0,0x0,
0x1a,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1a,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1b,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x1c,0x0,0x0,0x0,
0xcc,0x2e,0x6,0x18,0x7,0x12,0x23,0x18,
0x8,0x42,0x7,0x7,0x1a,0x8,0x6,0xd6,
0x16,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x13,0x0,0x0,0x0,
0x1f,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0x9,0x0,0x0,0x0,
0x1d,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1d,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1e,0x0,0x0,0x0,
0xf,0x0,0x0,0x0,0x1f,0x0,0x0,0x0,
0xcc,0x2e,0x8,0x18,0x7,0x12,0x18,0x18,
0x8,0x42,0x9,0x7,0x1a,0x8,0x6,0xd6,
0x16,0x6,0x2,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x50,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x21,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0xff,0xff,0xff,0xff,0xa,0x0,0x0,0x0,
0x21,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x21,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x22,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x23,0x0,0x0,0x0,
0xcc,0x2e,0xa,0x18,0x7,0xac,0xb,0x7,
0x0,0x0,0x18,0x6,0xd6,0x16,0x6,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x40,0x0,0x0,0x0,0x5,0x0,0x0,0x0,
0x1b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x38,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0xff,0xff,0xff,0xff,0x7,0x0,0x0,0x0,
0x19,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x7,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x19,0x0,0x0,0x0,
0x2e,0xc,0x18,0x6,0x2,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe8,0x4,0x0,0x0,0xf0,0x4,0x0,0x0,
0x8,0x5,0x0,0x0,0x18,0x5,0x0,0x0,
0x40,0x5,0x0,0x0,0x58,0x5,0x0,0x0,
0x70,0x5,0x0,0x0,0x80,0x5,0x0,0x0,
0x98,0x5,0x0,0x0,0xb0,0x5,0x0,0x0,
0xc8,0x5,0x0,0x0,0xd8,0x5,0x0,0x0,
0xf8,0x5,0x0,0x0,0x10,0x6,0x0,0x0,
0x28,0x6,0x0,0x0,0x38,0x6,0x0,0x0,
0x50,0x6,0x0,0x0,0x68,0x6,0x0,0x0,
0xa0,0x6,0x0,0x0,0xb0,0x6,0x0,0x0,
0xc0,0x6,0x0,0x0,0xd0,0x6,0x0,0x0,
0x0,0x7,0x0,0x0,0x18,0x7,0x0,0x0,
0x48,0x7,0x0,0x0,0x60,0x7,0x0,0x0,
0x78,0x7,0x0,0x0,0x88,0x7,0x0,0x0,
0xb8,0x7,0x0,0x0,0xd0,0x7,0x0,0x0,
0x8,0x8,0x0,0x0,0x28,0x8,0x0,0x0,
0x60,0x8,0x0,0x0,0x78,0x8,0x0,0x0,
0xb0,0x8,0x0,0x0,0xc8,0x8,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x46,0x0,0x65,0x0,
0x6c,0x0,0x67,0x0,0x6f,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x51,0x0,0x74,0x0,
0x51,0x0,0x75,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x2e,0x0,0x43,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x72,0x0,0x6f,0x0,
0x6c,0x0,0x73,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x52,0x0,0x65,0x0,
0x63,0x0,0x74,0x0,0x61,0x0,0x6e,0x0,
0x67,0x0,0x6c,0x0,0x65,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x62,0x0,0x75,0x0,
0x74,0x0,0x72,0x0,0x65,0x0,0x63,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x6f,0x0,0x72,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x23,0x0,0x30,0x0,
0x30,0x0,0x30,0x0,0x30,0x0,0x30,0x0,
0x30,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x62,0x0,0x75,0x0,
0x74,0x0,0x74,0x0,0x65,0x0,0x78,0x0,
0x74,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x69,0x0,0x6e,0x0,
0x6e,0x0,0x65,0x0,0x72,0x0,0x72,0x0,
0x65,0x0,0x63,0x0,0x74,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x74,0x0,0x65,0x0,
0x78,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x62,0x0,0x75,0x0,
0x74,0x0,0x74,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x72,0x0,0x61,0x0,
0x64,0x0,0x69,0x0,0x75,0x0,0x73,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x63,0x0,0x6f,0x0,
0x6c,0x0,0x69,0x0,0x6e,0x0,0x72,0x0,
0x65,0x0,0x63,0x0,0x74,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x54,0x0,0x65,0x0,
0x78,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x61,0x0,0x6e,0x0,
0x63,0x0,0x68,0x0,0x6f,0x0,0x72,0x0,
0x73,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x63,0x0,0x65,0x0,
0x6e,0x0,0x74,0x0,0x65,0x0,0x72,0x0,
0x49,0x0,0x6e,0x0,0x0,0x0,0x0,0x0,
0x17,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x63,0x0,0x65,0x0,0x6e,0x0,
0x74,0x0,0x65,0x0,0x72,0x0,0x49,0x0,
0x6e,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x6f,0x0,
0x6e,0x0,0x74,0x0,0x0,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x62,0x0,0x6f,0x0,
0x6c,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x77,0x0,0x69,0x0,
0x64,0x0,0x74,0x0,0x68,0x0,0x0,0x0,
0x14,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x77,0x0,0x69,0x0,0x64,0x0,
0x74,0x0,0x68,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x68,0x0,0x65,0x0,
0x69,0x0,0x67,0x0,0x68,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x15,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x68,0x0,0x65,0x0,0x69,0x0,
0x67,0x0,0x68,0x0,0x74,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x23,0x0,0x46,0x0,
0x41,0x0,0x43,0x0,0x38,0x0,0x35,0x0,
0x42,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x4d,0x0,0x6f,0x0,
0x75,0x0,0x73,0x0,0x65,0x0,0x41,0x0,
0x72,0x0,0x65,0x0,0x61,0x0,0x0,0x0,
0x4,0x0,0x0,0x0,0x66,0x0,0x69,0x0,
0x6c,0x0,0x6c,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x66,0x0,0x69,0x0,0x6c,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x50,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x50,0x0,
0x72,0x0,0x65,0x0,0x73,0x0,0x73,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x52,0x0,0x65,0x0,0x6c,0x0,0x65,0x0,
0x61,0x0,0x73,0x0,0x65,0x0,0x64,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x19,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x52,0x0,
0x65,0x0,0x6c,0x0,0x65,0x0,0x61,0x0,
0x73,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x6f,0x0,0x6e,0x0,
0x43,0x0,0x6c,0x0,0x69,0x0,0x63,0x0,
0x6b,0x0,0x65,0x0,0x64,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x65,0x0,0x78,0x0,
0x70,0x0,0x72,0x0,0x65,0x0,0x73,0x0,
0x73,0x0,0x69,0x0,0x6f,0x0,0x6e,0x0,
0x20,0x0,0x66,0x0,0x6f,0x0,0x72,0x0,
0x20,0x0,0x6f,0x0,0x6e,0x0,0x43,0x0,
0x6c,0x0,0x69,0x0,0x63,0x0,0x6b,0x0,
0x65,0x0,0x64,0x0,0x0,0x0,0x0,0x0,
0x6,0x0,0x0,0x0,0x70,0x0,0x61,0x0,
0x72,0x0,0x65,0x0,0x6e,0x0,0x74,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x7,0x0,0x0,0x0,0x23,0x0,0x46,0x0,
0x43,0x0,0x45,0x0,0x31,0x0,0x41,0x0,
0x37,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x3,0x0,0x0,0x0,0x10,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x4c,0x0,0x0,0x0,
0x1,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x1,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x1,0x0,0x0,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x2,0x0,0x10,0x0,0xff,0xff,0x0,0x0,
0x1,0x0,0x0,0x0,0x3,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x3,0x0,0x10,0x0,
0xff,0xff,0x0,0x0,0x6c,0x0,0x0,0x0,
0x4c,0x1,0x0,0x0,0x34,0x2,0x0,0x0,
0xbc,0x2,0x0,0x0,0x2c,0x3,0x0,0x0,
0x9c,0x3,0x0,0x0,0xc,0x4,0x0,0x0,
0xc4,0x4,0x0,0x0,0x4,0x0,0x0,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x1,0x0,0x0,0x0,
0x68,0x0,0x0,0x0,0x68,0x0,0x0,0x0,
0x1,0x0,0x4,0x0,0x6c,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xcc,0x0,0x0,0x0,
0x4,0x0,0x10,0x0,0x5,0x0,0x50,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xcc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0x0,0x0,0x9,0x0,0x0,0x0,
0xa,0x0,0x0,0x0,0x7,0x0,0x50,0x0,
0x7,0x0,0xc0,0x1,0xcc,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x9,0x0,0x50,0x0,0x9,0x0,0xc0,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x7,0x0,0x0,0x0,
0x6,0x0,0x50,0x0,0x6,0x0,0xb0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xa,0x0,0x50,0x0,0xa,0x0,0x50,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x0,0x50,0x0,0x18,0x0,0x50,0x0,
0xb,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x8,0x0,0xc0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x4,0x0,0x0,0x0,
0xd,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x6,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xe4,0x0,0x0,0x0,
0xa,0x0,0x50,0x0,0xb,0x0,0x90,0x0,
0xe4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x2,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x16,0x0,0x90,0x0,0x16,0x0,0x0,0x1,
0x6,0x0,0x0,0x0,0x0,0x0,0x3,0x0,
0x0,0x0,0x0,0x0,0x18,0x0,0x0,0x0,
0x15,0x0,0x90,0x0,0x15,0x0,0xf0,0x0,
0x16,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x90,0x0,0x13,0x0,0x0,0x1,
0x14,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x90,0x0,0x12,0x0,0xf0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x8,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0xc,0x0,0x90,0x0,
0xf,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x90,0x0,0x14,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0xe,0x0,0x0,0x0,
0x9,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x2,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x84,0x0,0x0,0x0,
0xc,0x0,0x90,0x0,0xd,0x0,0xd0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x84,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x12,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0xd0,0x0,0xf,0x0,0x20,0x1,
0xf,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0xd0,0x0,0xe,0x0,0x50,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0xe,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x2,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xe,0x0,0x50,0x1,0xe,0x0,0xe0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0xf,0x0,0xd0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x13,0x0,0x0,0x0,0x0,0x0,0x1,0x0,
0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xf,0x0,0x20,0x1,0xf,0x0,0x80,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x14,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x14,0x0,0x10,0x1,0x14,0x0,0xb0,0x1,
0x0,0x0,0x0,0x0,0x19,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x4,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0xb4,0x0,0x0,0x0,
0x18,0x0,0x50,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xb4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x20,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x21,0x0,0x90,0x0,0x21,0x0,0x40,0x1,
0x1e,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x5,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1d,0x0,0x90,0x0,0x1d,0x0,0x50,0x1,
0x1c,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x4,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x90,0x0,0x1a,0x0,0x40,0x1,
0xf,0x0,0x0,0x0,0x0,0x0,0xa,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x19,0x0,0x90,0x0,0x19,0x0,0x10,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0xff,0xff,
0xff,0xff,0xff,0xff,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x54,0x0,0x0,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x1,0x0,0x54,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x6c,0x0,0x0,0x0,
0x19,0x0,0x90,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x6c,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x1a,0x0,0x0,0x0,0x0,0x0,0x7,0x0,
0x7,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x19,0x0,0x10,0x1,0x19,0x0,0x60,0x1,
0x0,0x0,0x0,0x0
};
QT_WARNING_PUSH
QT_WARNING_DISABLE_MSVC(4573)

template <typename Binding>
void wrapCall(const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr, Binding &&binding)
{
    using return_type = std::invoke_result_t<Binding, const QQmlPrivate::AOTCompiledContext *, void **>;
    if constexpr (std::is_same_v<return_type, void>) {
       Q_UNUSED(dataPtr);
       binding(aotContext, argumentsPtr);
    } else {
        if (dataPtr) {
           new (dataPtr) return_type(binding(aotContext, argumentsPtr));
        } else {
           binding(aotContext, argumentsPtr);
        }
    }
}
extern const QQmlPrivate::AOTCompiledFunction aotBuiltFunctions[] = {
{ 0, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r7_1;
double r2_2;
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(0, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(0, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(1, r2_1, &r2_2)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(1, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_StoreReg
r7_1 = r2_2;
// generate_LoadInt
r2_2 = double(2);
// generate_Sub
r2_2 = (r7_1 - r2_2);
// generate_Ret
return r2_2;
});}
 },{ 1, QMetaType::fromType<double>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
double r7_1;
double r2_2;
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(2, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(2, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return double();
}
// generate_GetLookup
while (!aotContext->getObjectLookup(3, r2_1, &r2_2)) {
aotContext->setInstructionPointer(4);
aotContext->initGetObjectLookup(3, r2_1, QMetaType::fromType<double>());
if (aotContext->engine->hasError())
    return double();
}
// generate_StoreReg
r7_1 = r2_2;
// generate_LoadInt
r2_2 = double(2);
// generate_Sub
r2_2 = (r7_1 - r2_2);
// generate_Ret
return r2_2;
});}
 },{ 2, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(4, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(4, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
// generate_Ret
return r2_1;
});}
 },{ 3, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(5, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(5, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
// generate_Ret
return r2_1;
});}
 },{ 4, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r7_1;
QObject *r2_1;
QString r2_2;
// onPressed: {
// generate_CreateCallContext
{
// colinrect.color="#FCE1A7"
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(6, &r2_1)) {
aotContext->setInstructionPointer(3);
aotContext->initLoadContextIdLookup(6);
if (aotContext->engine->hasError())
    return ;
}
// generate_StoreReg
r7_1 = r2_1;
// generate_LoadRuntimeString
r2_2 = QStringLiteral("#FCE1A7");
// generate_SetLookup
{
auto converted = QVariant::fromValue(r2_2);
const QMetaType argType = aotContext->lookupResultMetaType(7);
if (argType.isValid())
    converted.convert(argType);
while (!aotContext->setObjectLookup(7, r7_1, converted.data())) {
aotContext->setInstructionPointer(12);
aotContext->initSetObjectLookup(7, r7_1, argType);
if (aotContext->engine->hasError())
    return ;
const QMetaType argType = aotContext->lookupResultMetaType(7);
if (argType.isValid())
    converted.convert(argType);
}
}
// generate_PopContext
;}
// generate_Ret
return;
});}
 },{ 5, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r7_1;
QString r2_2;
QObject *r2_1;
// onReleased: {
// generate_CreateCallContext
{
// colinrect.color="#FAC85B"
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(8, &r2_1)) {
aotContext->setInstructionPointer(3);
aotContext->initLoadContextIdLookup(8);
if (aotContext->engine->hasError())
    return ;
}
// generate_StoreReg
r7_1 = r2_1;
// generate_LoadRuntimeString
r2_2 = QStringLiteral("#FAC85B");
// generate_SetLookup
{
auto converted = QVariant::fromValue(r2_2);
const QMetaType argType = aotContext->lookupResultMetaType(9);
if (argType.isValid())
    converted.convert(argType);
while (!aotContext->setObjectLookup(9, r7_1, converted.data())) {
aotContext->setInstructionPointer(12);
aotContext->initSetObjectLookup(9, r7_1, argType);
if (aotContext->engine->hasError())
    return ;
const QMetaType argType = aotContext->lookupResultMetaType(9);
if (argType.isValid())
    converted.convert(argType);
}
}
// generate_PopContext
;}
// generate_Ret
return;
});}
 },{ 6, QMetaType::fromType<void>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r7_1;
QObject *r2_1;
// onClicked: {
// generate_CreateCallContext
{
// butrect.buttonClicked()
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadContextIdLookup(10, &r2_1)) {
aotContext->setInstructionPointer(3);
aotContext->initLoadContextIdLookup(10);
if (aotContext->engine->hasError())
    return ;
}
// generate_StoreReg
r7_1 = r2_1;
// generate_CallPropertyLookup
{
void *args[] = { nullptr };
const QMetaType types[] = { QMetaType() };
while (!aotContext->callObjectPropertyLookup(11, r7_1, args, types, 0)) {
aotContext->setInstructionPointer(10);
aotContext->initCallObjectPropertyLookup(11);
if (aotContext->engine->hasError())
    return ;
}
}
// generate_PopContext
;}
// generate_Ret
return;
});}
 },{ 7, QMetaType::fromType<QObject*>(), {  }, 
    [](const QQmlPrivate::AOTCompiledContext *aotContext, void *dataPtr, void **argumentsPtr) {
        wrapCall(aotContext, dataPtr, argumentsPtr, [](const QQmlPrivate::AOTCompiledContext *aotContext, void **argumentsPtr) {
Q_UNUSED(aotContext);
Q_UNUSED(argumentsPtr);
QObject *r2_1;
// generate_LoadQmlContextPropertyLookup
while (!aotContext->loadScopeObjectPropertyLookup(12, &r2_1)) {
aotContext->setInstructionPointer(2);
aotContext->initLoadScopeObjectPropertyLookup(12, []() { static const auto t = QMetaType::fromName("QQuickItem*"); return t; }());
if (aotContext->engine->hasError())
    return static_cast<QObject *>(nullptr);
}
// generate_Ret
return r2_1;
});}
 },{ 0, QMetaType::fromType<void>(), {}, nullptr }};
QT_WARNING_POP
}
}
