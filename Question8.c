#include<stdio.h>
int fact(int);
int comb(int,int);
int printpascal(int);
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;

}
int combi(int n,int r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int printpascal(int line)
{
    int i,j,k,r;
    for(i=1;i<=line;i++)
    {
        k=1;
        r=0;
        for(j=1;j<=2*line-1;j++)
        if(j>=line+1-i && j<=line-1+i && k)
        {
            printf("%d",combi(i-1,r));
            r++;
            k=0;
        }
        else{
            printf(" ");
            k=1;
        }
        printf("\n");
    }
}
int main()
{
    printpascal(5);
}