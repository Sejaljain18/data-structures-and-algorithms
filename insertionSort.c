#include<stdio.h>
void insertionSort(int a[],int n){
int j,i,temp;
for(i=1;i<n;i++){
temp=a[i];
j=i-1;
while(j>=0&&a[j]>temp){
    a[j+1]=a[j];
    a[j]=temp;
    j--;
}
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
    insertionSort(a,n);
}