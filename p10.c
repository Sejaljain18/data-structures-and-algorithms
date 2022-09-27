#include<stdio.h>
void main(){
int a[10],b[10];
int n,m;
printf("enter the size of array 1 and 2:\n");
scanf("%d%d",&n,&m);
int c=0;
int i,j;
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
for(i=0;i<n;i++)
{]\
    for(j=0;j<m;j++)
    {
        if(a[i]==b[j])
        c=1;
    }
    if(c==0)
    printf("%d\n",a[i]);
    }

}
