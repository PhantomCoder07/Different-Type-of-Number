// Standard 
#include <stdio.h>
#include <math.h>
int main()
{
    int num;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    int n=num,ans=num;
    int c=0,sum=0;
    while (n>0)
    {
        n/=10;
        c++;
    }
    while (num>0)
    {
        int d=num%10;
        sum+=pow(d,c);
        num/=10;
    }
    if (sum==ans)
        printf ("The number %d is Armstrong\n",ans);
    else
        printf ("The number %d is not Armstrong\n",ans);
    return 0;
}
// Upto N number
#include <stdio.h>
#include <math.h>
int main()
{
    int num,m=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    printf ("Armstrong number upto %d: ",num);
    for (int i=1; i<=num; i++)
    {
        int n=i,ans=i;
        int c=0,sum=0;
        while (n>0)
        {
            n/=10;
            c++;
        }
        while (i>0)
        {
            int d=i%10;
            sum+=pow(d,c);
            i/=10;
        }
        if (sum==ans)
        {
            printf ("%d ",ans);
            m++;
        }
        i=ans;
    }
    printf("\nTotal Armstrong numbers: %d\n",m);
    return 0;
}
// Between interval 
#include <stdio.h>
#include <math.h>
int main()
{
    int n,m,k=0;
    printf ("Enter the interval: ");
    scanf ("%d %d",&n,&m);
    printf ("Armstrong number between %d to %d: ",n,m);
    for (int i=n; i<=m; i++)
    {
        int n=i,ans=i;
        int c=0,sum=0;
        while (n>0)
        {
            n/=10;
            c++;
        }
        while (i>0)
        {
            int d=i%10;
            sum+=pow(d,c);
            i/=10;
        }
        if (sum==ans)
        {
            printf ("%d ",ans);
            k++;
        }
        i=ans;
    }
    printf("\nTotal Armstrong numbers: %d\n",k);
    return 0;
}
