/*
====================================================================================================
                           C++ FUNDAMENTAL DATA TYPES - REFERENCE TABLE
====================================================================================================

┌────────────────────┬───────────────┬─────────────────────────────────────────────┬──────────────────────────┐
│     DATA TYPE      │     SIZE      │                    RANGE                    │       DESCRIPTION        │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ signed char        │  1 byte        │  -128 to 127                                │  8-bit signed integer    │
│                    │  (8 bit)       │  (-2^7 to 2^7 - 1)                          │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ unsigned char      │  1 byte        │  0 to 255                                  │  8-bit unsigned integer  │
│                    │  (8 bit)       │  (0 to 2^8 - 1)                            │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ short              │  2 bytes       │  -32,768 to 32,767                          │  16-bit signed integer   │
│                    │ (16 bit)       │  (-2^15 to 2^15 - 1)                        │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ unsigned short     │  2 bytes       │  0 to 65,535                               │  16-bit unsigned integer │
│                    │ (16 bit)       │  (0 to 2^16 - 1)                           │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ int                │  4 bytes*      │  -2,147,483,648 to 2,147,483,647            │  32-bit signed integer   │
│                    │ (32 bit)       │  (-2^31 to 2^31 - 1)                        │  (Most commonly used)    │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ unsigned int       │  4 bytes*      │  0 to 4,294,967,295                         │  32-bit unsigned integer │
│                    │ (32 bit)       │  (0 to 2^32 - 1)                           │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ long               │  4 or 8 bytes* │  Platform dependent                         │  Signed integer          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ long long          │  8 bytes       │  -9,223,372,036,854,775,808 to              │  64-bit signed integer   │
│                    │ (64 bit)       │   9,223,372,036,854,775,807                 │  (Use LL suffix)         │
│                    │               │  (-2^63 to 2^63 - 1)                        │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ unsigned long long │  8 bytes       │  0 to 18,446,744,073,709,551,615            │  64-bit unsigned integer │
│                    │ (64 bit)       │  (0 to 2^64 - 1)                           │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ float              │  4 bytes       │  ≈ ±3.4E+38                                │  32-bit IEEE 754         │
│                    │ (32 bit)       │  (~6–7 decimal digits)                     │  floating point          │
│                    │               │                                             │  (Use 'f' suffix)        │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ double             │  8 bytes       │  ≈ ±1.7E+308                               │  64-bit IEEE 754         │
│                    │ (64 bit)       │  (~15 decimal digits)                      │  floating point          │
│                    │               │                                             │  (Default for decimals)  │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ long double        │  8–16 bytes*   │  Implementation dependent                  │  Extended precision FP   │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ char               │  1 byte        │  -128 to 127 OR 0 to 255*                  │  Character / small int   │
│                    │ (8 bit)        │  (signedness is compiler dependent)        │                          │
├────────────────────┼───────────────┼─────────────────────────────────────────────┼──────────────────────────┤
│ bool               │  1 byte*       │  true or false                             │  Logical value           │
└────────────────────┴───────────────┴─────────────────────────────────────────────┴──────────────────────────┘

* Size and range may vary by compiler and platform (use sizeof() to verify)

====================================================================================================
                              DEFAULT VALUES
====================================================================================================

    • Local variables → UNINITIALIZED (garbage values)
    • Global / static variables:

        int             → 0
        float           → 0.0f
        double          → 0.0
        char            → '\0'
        bool            → false
        pointers        → nullptr

====================================================================================================
                                        USAGE EXAMPLES
====================================================================================================

    signed char age = 25;
    unsigned short year = 2024;
    int population = 1000000;
    long long nationalDebt = 9223372036854775807LL;
    float pi = 3.14159f;
    double scientificValue = 1.23456789012345;
    char grade = 'A';
    bool isCppFun = true;

====================================================================================================
                                        IMPORTANT NOTES
====================================================================================================

    • Integer overflow for SIGNED types is UNDEFINED BEHAVIOR
    • Unsigned integer overflow wraps around modulo 2^n
    • Use <climits> or <limits> to get exact min/max values
    • Prefer fixed-width types for portability:
          int8_t, int16_t, int32_t, int64_t (from <cstdint>)
    • char is NOT guaranteed to be signed (unlike Java)
    • bool typically occupies 1 byte, not 1 bit
    • long size differs:
          Windows → 4 bytes
          Linux/macOS → 8 bytes

====================================================================================================
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    // Integer types
    signed char sc = -100;
    unsigned char uc = 200;

    short s = -32000;
    unsigned short us = 65000;

    int i = 1'000'000;
    unsigned int ui = 4'000'000'000U;

    long l = 123456789L;                 // size is platform dependent
    long long ll = 9'000'000'000LL;
    unsigned long long ull = 18'000'000'000ULL;

    // Floating point types
    float f = 3.14f;
    double d = 1.234567890123;
    long double ld = 3.141592653589793238L;

    // Character & boolean
    char c = 'A';
    bool ok = true;

    // Output everything
    cout << "signed char: " << int(sc) << '\n';
    cout << "unsigned char: " << int(uc) << '\n';

    cout << "short: " << s << '\n';
    cout << "unsigned short: " << us << '\n';

    cout << "int: " << i << '\n';
    cout << "unsigned int: " << ui << '\n';

    cout << "long: " << l << '\n';
    cout << "long long: " << ll << '\n';
    cout << "unsigned long long: " << ull << '\n';

    cout << "float: " << f << '\n';
    cout << "double: " << d << '\n';
    cout << "long double: " << ld << '\n';

    cout << "char: " << c << " (ASCII: " << int(c) << ")\n";
    cout << "bool: " << ok << '\n';

    // Safe arithmetic example
    long long sum = ll + i;
    cout << "sum (long long + int): " << sum << '\n';
}