#include <float.h>
#include <limits.h>
#include <stdio.h>

int main(void)
{
    printf("long型の最大値:%l\n", LONG_MAX);
    printf("long型の最小値:%l\n", LONG_MIN);
    printf("float型の精度:%f\n", FLT_DIG);
    printf("long double型の最大値:%ld\n", LDBL_MAX);
    printf("long double型の最小値:%ld\n", LDBL_MIN);
    
    return 0;
}
