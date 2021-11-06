
#include <stdio.h>
int main()
{
    int num,rem,count=0;
    printf("enter a number\n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        printf("%d\t",rem);
        count++;
        num=num/10;
    }
    printf("\n");
    printf("number of degits is %d\n",count);
    
}
