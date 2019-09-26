#include <stdio.h>
#include <stdlib.h>
#include <x86intrin.h>
// compile with: gcc intrinsics.c -msse4.2 -o intrin_test

int main() {
    int res = _mm_popcnt_u32(0x7fffffff);
    printf("%d\n", res);
    return 0;
}
