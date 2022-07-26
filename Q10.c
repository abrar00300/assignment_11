#include<stdio.h>
int fact(int );
int main()
{
    int result;
    result=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("result is %d",result);
    return 0;
}
int fact(int n)
{
     int p=1;
    for(int i=n;i>0;i--)
        p=p*i;
        return p;
}
