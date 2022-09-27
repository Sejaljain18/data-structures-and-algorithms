#include<stdio.h>
int searching(int a[],int l,int h,int d){
    int c=0;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==d)
        {
            return (mid+1);
            c++;
        }
        else if(d>a[mid])
        {
            l=mid+1;
        }
        else
        h=mid-1;
    }
    if(c==0)
    printf("element not found");
}
void main(){
    int a[10],d;
    printf("enter array element");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the elelment to be searched:\n");
    scanf("%d",&d);
    int element=searching(a,0,10,d);
    printf("%dth position",element);

}