#include<stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    int arr[n];
    int ans[n],k=0;
    printf("Enter the elements of the array : ");
    int i=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    int ch,maxii=arr[0],min=arr[0],sum=0;
    float avg=0;
    printf("Enter\n1:Maximum element\n2:Minimum element\n3:sum of the elements\n4:average of the elements\n5:reverse the array\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1: for(i=0;i<n;i++){
            if(maxii<arr[i])
            maxii=arr[i];
        
        }
                printf("Largest element in the given array is %d: \n",maxii);

        break;
        case 2:
        for(i=0;i<n;i++){
            if(min>arr[i])
            min=arr[i];
        
        }
        printf("smallest element in the given array is %d: \n",min);
        break;
        case 3: for(i=0;i<n;i++)
                 sum+=arr[i];
                 break;
        case 4: avg=sum/n;
        printf("average of the elements is %f\n",avg);
        break;
        case 5: printf("Array after reversing : ");
        for(i=n-1;i>=0;i--)
        {
            ans[k]=arr[i];
            printf("%d ",ans[k]);
            k++;
        }
        break;
                     
    }
}