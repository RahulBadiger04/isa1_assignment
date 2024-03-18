#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number to reverse it: ");
    scanf("%d",&n);
    int r=0,sum=0;
    while(n)
    {
         r=n%10;
         sum=(sum*10)+r;
         n/=10;
        

    }
    printf("Number after reversing %d ",sum);
}