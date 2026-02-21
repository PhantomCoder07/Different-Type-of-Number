// Simple method
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n,f=0;
    while (m>0)
    {
        int d=m%10;
        if (n%d!=0)
            f=1;
        m/=10;
    }
    if (f==0)
        printf("The given number %d is Self-divisible\n",n);
    else
        printf("The given number %d is not Self-divisible\n",n);
    return 0;
}
// Standard method
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int m=n;
    bool ans=true;
    while (m>0)
    {
        int d=m%10;
        if (d==0 || n%d!=0)
        {
            ans=false;
            break;
        }
        m/=10;
    }
    if (ans)
        printf("The given number %d is Self-divisible\n",n);
    else
        printf("The given number %d is not Self-divisible\n",n);
    return 0;
}
// Up to N terms
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int n;
    printf("Enter n terms: ");
    scanf("%d",&n);
    printf("Self-divisible numbers up to %d is:\n",n);
    for (int i=1; i<=n; i++)
    {
        int m=i;
        bool ans=true;
        while (m>0)
        {
            int d=m%10;
            if (d==0 || i%d!=0)
            {
                ans=false;
                break;
            }
            m/=10;
        }
        if (ans)
            printf("%d ",i);
    }
    return 0;
}
// Between Intervals
#include <stdio.h>
#include <stdbool.h>
int main()
{
    int x,y;
    printf("Enter the interval: ");
    scanf("%d %d",&x,&y);
    printf("Self-divisible numbers between %d to %d is:\n",x,y);
    for (int i=x; i<=y; i++)
    {
        int m=i;
        bool ans=true;
        while (m>0)
        {
            int d=m%10;
            if (d==0 || i%d!=0)
            {
                ans=false;
                break;
            }
            m/=10;
        }
        if (ans)
            printf("%d ",i);
    }
    return 0;
}
