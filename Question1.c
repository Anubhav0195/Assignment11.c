#include<stdio.h>
int lcm(int,int);
int main()
{
    int a,b,c;
    printf("Enter ant two number\n");
    scanf("%d %d",&a,&b);
    c=lcm(a,b);
    printf("LCM =%d",c);
    return 0;

}
int lcm (int a,int b)
{
    int max,i;
    max =a>b? a:b;
    for(i=max;1;i=i+max)
    {
        if(i%a==0 && i%b==0)
        break;
    }
    return i;
}