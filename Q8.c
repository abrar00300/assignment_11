#include<stdio.h>
void pattern(int);
int main()
{
    int r;
    printf("enter number of rows=");
    scanf("%d",&r);
    pattern(r);
}
void pattern(int row)
{
    int i,j,k=1,v=1,r;
    for(i=1;i<=row;i++)
    {
        r=0;
        k=1;
        for(j=1;j<=(row*2)-1;j++)
        {
            if(j>=(row+1)-i && j<=(row-1)+i && k)
            {

                    printf("%d",combination(i-1,r));
                    k=0;
                    r++;

            }
            else
            {
                    printf(" ");
                    k=1;
            }
        }
        printf("\n");
    }
}
int combination(int n,int s)
{
    int p=1,p1=1,p2=1;
    for(int i=n;i>0;i--)
        p1=p1*i;
    for(int i=s;i>0;i--)
        p2=p2*i;
    for(int i=(n-s);i>0;i--)
        p=p*i;
    return p1/(p2*p);
}
