#include<stdio.h>
void main()
{
    int a[100],i,n,max;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
     max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("%d",max);
    

}