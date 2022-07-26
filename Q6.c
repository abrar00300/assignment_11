#include<stdio.h>
void primeno(int , int);
int main()
{
    int f,l;
    printf("enter first and last number =");
    scanf("%d%d",&f,&l);
    primeno(f,l);
    return 0;
}
void primeno(int f,int l)
{
    int i,j;
    for(i=f+1;i<l;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
                break;
        }
        if(j==i || i==1)
            printf("%d\t",i);
    }

}
