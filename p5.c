#include<stdio.h>
void main()
{
    int a[100],i,n,c,j,f[100],v=-1;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter array elements");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    { c=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
          {  c++;
            f[j]=v;
        }
        }
        if(f[i]!=-1)
        f[i]=c;
        
    } 
        for(i=0;i<n;i++)
        {
            if(f[i]!=-1)
    printf("the frequency of %d is %d\n",a[i],f[i]);
        }
    }

