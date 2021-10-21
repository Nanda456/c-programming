#include <stdio.h>
void main()
{
    int i,n,a[i],t,count=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter a number\n");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(a[i]%t==0)
        {
            count++;
        }
        
    }
    printf("%d",count);
}
    