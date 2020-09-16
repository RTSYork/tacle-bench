Results of 'app', 'kernel', 'sequential' and 'test' benchmark checks
=======

GCC
---

PASS: 57/57
FAIL: 0/57


pycparser
-----

PASS: 110/110
FAIL:   0/110

Notes:
- Needs to use GCC `cpp` in order to correctly parse `_Pragma()` (clang `cpp` doesn't work)
- Has more success with GCC `cpp` output than clang, even without `_Pragma()`
- Does not support pragmas in the middle of other statements (i.e. between the return type and name of a function definition)


Expressions
---

PASS: 107/110
FAIL:   3/110

Notes:
- All three tests parse ok but take a very long time to create output then fail, suggesting that graphviz generation is probably an issue.
- Seems to fail when there is a "\" within a string constant


PicoC
---

PASS: 41/57
FAIL: 16/57

Notes:
- Global variables seemingly share scope across all files
- Pragmas must be on their own line (i.e. not in the middle of a definition)
- Doesn't fully take into account type qualifiers or storage classes, so results might be inconsistent
- Some macros with parameters fail to parse correctly - moving the code inline works
- Typed defined in macros do not parse - changing these to typdefs works
- Bit field structs are not supported
- Function pointers are not supported
- Some pointer arithmetic causes parse errors or segfaults


CINT
---

PASS: 45/57
FAIL: 12/57

Notes:
- Possibly misleading results as the interpreter doesn't always seem to exit with an error code when execution fails
- Need to check some individual benchmarks to create a reliable test set-up
