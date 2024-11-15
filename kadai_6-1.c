#include <stdio.h>

int main(void)
{
    int a, b, c;
    
    a = 777; //
    b = 50; //
    c = 5; //
    
    //変数と定数の比較
    if (a > c)
    printf("aはcよりも大きい数字です\n");
    if (b != c)
    printf("bとcは等しくない数字です\n");
    if (a >= b)
    printf("aはb以上の数字である\n");
    if (b < a)
    printf("bはaよりも小さい数字である\n");
       
       
    return 0;
}
