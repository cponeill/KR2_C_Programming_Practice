#include <Windows.h>
#include "Marble.h"

int wmain(int argc, wchar_t* argv[])
{
  /* Normal Text*/
  CARBLE cOne[] = "This is a test of a string obfuscation technique.";

  /* Text with braces, semi colons escaped characters (including \x). */
  CARBLE cTwo[] = " Text with weird {spaces} in; the text\n\n\tabc\x22\x33 124";

  /* You can also use curly braces to define your string/data (must be two characters following 0x). */
  CARBLE cThree = {
    0x32, 0xD7, 0x08, 0x57, 0x34, 0x34, 0xC8, 0x4B, 0xC5, 0xA8, 0x53, 0x45, 0xF2, 0x0D, 0xB7, 0xF0,
    0x5F, 0xD2, 0xED, 0xEA, 0xE1, 0x73, 0x2B, 0xCA, 0xFE
  };
  return 0;
}
