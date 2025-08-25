// Standard method
#include <stdio.h>
int main()
{
    int num,d,rev=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    while (num>0)
    {
        d= num%10;
        num/=10;
        rev= rev*10+d;
    }
    printf ("The reverse number is: %d",rev);
    return 0;
}
// Simple method
#include <stdio.h>
int main()
{
    int i,num,sum=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    printf ("The reverse number is: ");
    while (num>0)
    {
        i=num%10;
        printf ("%d",i);
        num=num/10;
    }
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int num,d,rev=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    do
    {
        d= num%10;
        num/=10;
        rev= rev*10+d;
    } while (num>0);
    printf ("The reverse number is: %d",rev);
    return 0;
}
// String
#include <stdio.h>
#include <string.h>
int main()
{

    char num[10];
    printf ("Enter the number: ");
    gets (num);
    strrev (num);
    printf ("The reverse number is: %s",num);
    return 0;
}
