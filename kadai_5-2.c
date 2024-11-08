#include <stdio.h>

int main()
{
    int k;
    printf("髪の長い人は何人いますか?");
    scanf("%d", &k);
    
    int m;
    printf("髪の短い人は何人いますか?");
    scanf("%d",&m);
    
    if (k>m)
    {
        printf("髪の長い人のほうが多い");
    }
    else if (k<m)
    {
        printf("髪の短い人のほうが多い");
    }
    else 
    {
        printf("髪の短い人と長い人の数が同じ");
    }
    return 0;
}
