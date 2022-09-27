#include<stdio.h>
void main(){
int a[10],b[10];
int n,m;
printf("enter the size of array 1 and 2:\n");
scanf("%d%d",&n,&m);
int c[30];
int i=0,j=0,k=0;
printf("enter elements of array1:\n");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("enter elements of array2:\n");
for(j=0;j<m;j++)
{
    scanf("%d",&b[j]);
}
i=0;j=0;
while(i<n&&j<m)
{ 
    if(a[i]>b[j])
   { c[k]=b[j];
    j++;
    k++;
}
else if(a[i]==b[j])
{
    c[k]=a[i];
    i++;
    j++;
    k++;
}
else{
    c[k]=a[i];
    i++;
    k++;
}
}
while(i<n)
{
    c[k]=a[i];
    i++;
    k++;
}
while(j<m)
{
    c[k]=b[j];
    j++;
    k++;
}
printf("merged array:\n");
for(i=0;i<k;i++)
printf("%d ",c[i]);
}