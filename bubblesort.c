#include<stdio.h>
void bubbleSort(int a[],int n){
    int temp,i,j,c=0;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            { 
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                c++;
            }
            
        }
        if(c==0)
        break;
    }
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
}
    void main(){
    int a[99],n,i;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("sorted array is\n");
    bubbleSort(a,n);
}