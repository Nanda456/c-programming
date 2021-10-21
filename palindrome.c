#include <stdio.h>
void main()
{
    int a,temp,rev=0,degit;
    printf("enter a number\n");
    scanf("%d",&a);
    temp=a;
    while(a!=0)
    {
        degit=a%10;
        rev=rev*10+degit;
        a=a/10;
    }
    if(temp==rev)
    printf("%d is palindrome",temp);
    else
    printf("%d is not palindrome",temp);
}