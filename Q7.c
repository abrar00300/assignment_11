#include<stdio.h>
void fabo(int n)
{
    int a=0,b=1,c;
    printf("first %d terms of fabonachii are --\n %d\t%d\t",n,a,b);
    while(n-2)
    {
        c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
        n--;
    }
}
int main()
{
    int n;
    printf("enter N =");
    scanf("%d",&n);
    fabo(n);
    return 0;
}

