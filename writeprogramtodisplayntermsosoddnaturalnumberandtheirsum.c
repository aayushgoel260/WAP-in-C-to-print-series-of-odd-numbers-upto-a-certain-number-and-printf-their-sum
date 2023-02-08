#include<stdio.h>
int main()
{
    int n,i=1,sum=0;
    printf("Enter any number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+2)
    {
        printf("\n%d",i);
        sum=sum+i;
    }
    printf("\nSum is %d",sum);
    return 0;
}