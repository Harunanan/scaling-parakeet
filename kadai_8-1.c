#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int i,s,c;
    srand(time(0));
    
    i = (rand() % 21);
    s = (rand() % (21-i));
    c = 20-i-s;
    printf("スタッツは記憶力が%d、瞬発力が%d、魅力が%dです。\n",i,s,c);
    if(i>s && i>c)
    {
        printf("クラスはmageです。\n");
    }
        if(s>i && s>c)
    {
        printf("クラスはknightです。\n");
    }
        if(c>i && c>s)
    {
        printf("クラスはtheifです。\n");
    }
    if(i==s && i>c)
    {
        printf("クラスはmageとknightデュアルクラスです。");
    }
    if(i==c && i>s)
    {
        printf("クラスのmageとthiefのデュアルクラスです。");
    }
    if(c==s && c>i)
    {
        printf("クラスはthiefとknightのデュアルクラスです");
    }
    return 0;
    
}
