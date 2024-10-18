#include <stdio.h>

int main()
{
    int k,i, result;
    
    printf("How many books?");
    scanf("%d" , &k);
    printf("How many eggs?");
    scanf("%d" , &i);
    
    result = k +  i;
    
    printf("The number of books and eggs is %d\n", result);
    
    return 0;
    
}