#include<stdio.h>
int fibonacciseries(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    fibonacciseries(n);
}
int fibonacciseries(int n)
{
    int a=-1,b=1,c,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
        printf("\n");
    }
}