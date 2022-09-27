#include<stdio.h>
void main(){
int a[]={5,7,9};
int b[]={6,8,11,12};
int c[7];
int i=0,j=0,k=0;
while(i<3&&j<4)
{ 
    if(a[i]>b[j])
   { c[k]=b[j];
    j++;
    k++;
}
else
{
    c[k]=a[i];
    i++;
    k++;
}
}
while(i<3)
{
    c[k]=a[i];
    i++;
    k++;
}
while(j<4)
{
    c[k]=b[j];
    j++;
    k++;
}
printf("merged array:\n");
for(i=0;i<7;i++)
printf("%d ",c[i]);
}