#include<stdio.h>
int main()
{
    int n;
    printf("enter n");
    scanf("%d",&n);
    if(n==0)
    {
        printf("0");
        return 0;
    }
    if(n==1 || n==2)
    {
        printf("1");
        return 0;
    }
    int num1=0,num2=1,num3=0;
    printf("num1,num2");
    for(int i=0;i<n-2;i++)
    {
        num3=num1+num2;
        printf("%d",num3);
        num1=num2;
        num2=num3;
    }
    return 0;
}
