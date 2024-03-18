#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int sum=0,rem=0;
    while(n)
    {
        rem=n%10;
        sum+=rem;
        n/=10;
    }
    printf("Sum of all digits of the given number is : %d ",sum);
}