#include<stdio.h>
#define MAX_SIZE 10
float sum(float[],int);
float input[MAX_SIZE],answer;
void main()
{
    int i;
    for(i=1;i<=MAX_SIZE;i++)
    input[i]=i;
    answer=sum(input,MAX_SIZE);
    printf("the sum is:%f\n",answer);
}
float sum(float list[],int n)
{
    int i;
    float tempsum=0;
    for(i=1;i<=MAX_SIZE;i++)
    tempsum=tempsum+list[i];
    return tempsum;
}