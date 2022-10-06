#include<stdio.h>
int hcf(int ,int );
int main()
{
    int a,b,c;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    c=hcf(a,b);
    printf("hcf is %d",c);
    return 0;
}
int hcf(int a,int b)
{
    int min,i;
    min = a<b ?a:b;
    for(i=min;i>0;i--)
    {
        if(a%i==0 && b%i==0)
        break;
    }
    return i;
}
