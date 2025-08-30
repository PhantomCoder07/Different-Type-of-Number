#include <stdio.h>
int fact(int n)
{
    if (n==0 || n==1)
        return 1;
    return n*fact(n-1);
}
int main()
{
    int n,t,d,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    t=n;
    while (t>0)
    {
        d=t%10;
        sum+=fact(d);
        t/=10;
    }
    if (sum==n)
        printf("%d is a Strong number\n",n);
    else
        printf("%d is not a Strong number\n",n);
    return 0;
}
