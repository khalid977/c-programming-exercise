#include<stdio.h>
int main()
{
    int a=5;
    
    int b=++a;
    int c=b++;
    int d=c+10;
    
    printf("%d\n",b);
    printf("%d\n",c);
    printf("%d",d);
    
    return 0;
}

