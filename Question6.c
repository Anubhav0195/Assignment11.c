#include<stdio.h>
int checkprimenumber(int n);
int main()
{
    int n1,n2,i,flag;
    printf("Enter two positive numbers\n");
    scanf("%d %d",&n1,&n2);
    if(n1>n2){
        n1=n1+n2;
        n2=n1-n2;
        n1=n1-n2;
    }
    printf("prime number between %d and %d are:\n",n1,n2);
    for(i=n1+1;i<n2;++i){
        flag = checkprimenumber(i);
        if(flag == 1){
            printf("%d\n",i);
        }
    }
    return 0;
}
int checkprimenumber(int n)
{
    int j,flag =1;
    for(j =2;j<=n/2;++j){
        if(n%j==0){
            flag =0;
            break;
        }
    }
    return flag;
}