#include<stdio.h>
void main()
{
    int a[10],i,n,sum=0;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("%d",sum);
    

}