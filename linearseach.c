#include<stdio.h>
int search(int a[],int h,int n){
    int c=0;
    for(int i=0;i<h;i++)
    {
        if(a[i]==n)
    { c++;
        return (i+1);
    }
    }
    if(c==0)
    printf("element not found");
    return 0;
}
void main(){
    int a[10],n,h;
    printf("enter size of array\n");
    scanf("%d",&h);
    printf("enter array element");
    for(int i=0;i<h;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to be searched:\n");
    scanf("%d",&n);
    int element=search(a,h,n);
    printf("%dth position",element);
}