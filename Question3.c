#include<stdio.h>
int check_prime(int);
int main()
{
    int x,result;
    printf("Enter the number\n");
    scanf("%d",&x);
    result =check_prime(x);
    if(result == 1)
    printf("%d is a prime\n",x);
    else
    printf("%d is not a prime\n",x);
    return 0;

}
int check_prime(int a)
{
    int i;
    for(i=2;i<a-1;i++)
    {
        if(a%i==0)
        return 0;
        }
        return 1;
}