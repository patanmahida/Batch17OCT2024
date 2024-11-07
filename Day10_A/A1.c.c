#include<stdio.h>
int is_prime(int num)
{
    if(num<=1)
    return 0;
    for(int i=2;i*i<=num;i++)
    {
        if(num%i==0)
        return 0;
    }
    return 1;
}
void primePair(int N)
{
    int count=0;
    for(int i=2;i<=N/2;i++)
    {
        if(is_prime(i)&&is_prime(N-i))
        {
            printf("%d=%d+%d\n",N,i,N-i);
            count++;
        }
    }
    if(count==0)
    {
        printf("prime number not found\n");
        printf("noofways=-1\n");
        
    }
    else
    {
        printf("noofways=%d\n",count);
    }
}
int main()
{ 
    int N;
    printf("enter a positive number:");
    scanf("%d",&N);
    primePair(N);
    return 0;
}