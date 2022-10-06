#include<stdio.h>
int square(int n);
int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    square(n);
}
int square(int n)
{
    int c;
    c=n*n;
    printf("%d",c);
}