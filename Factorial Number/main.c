// for loop t1 (Standard)
#include <stdio.h>
int main()
{
    int i,f,multi=1;
    printf ("Enter the number:");
    scanf ("%d",&f);
    if (f==0)
        multi=1;
    else
        for (i=1; i<=f; i++)
        {
            multi*=i;
        }
    printf("The Factorial of %d is: %d",f,multi);
    return 0;
}
// for loop t2
#include <stdio.h>
int main()
{
    int i,f,multi=1;
    printf ("Enter the number:");
    scanf ("%d",&f);
    if (f==0)
        multi=1;
    else
        for (i=f; i>0; i--)
        {
            multi*=i;
        }
    printf("The Factorial of %d is: %d",f,multi);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,f,multi=1;
    printf ("Enter the number:");
    scanf ("%d",&f);
    while (i<=f)
    {
        multi=multi*i;
        i++;
    }
    printf("The Factorial of %d is: %d",f,multi);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,f,multi=1;
    printf ("Enter the number:");
    scanf ("%d",&f);
    do
    {
        multi=multi*i;
        i++;
    }
    while (i<=f);
    printf("The Factorial of %d is: %d",f,multi);
    return 0;
}
// Function
#include <stdio.h>
int factorial();
int main()
{
    printf("The Factorial is: %d",factorial());
    return 0;
}
int factorial()
{
    int i,f,multi=1;
    printf ("Enter the number:");
    scanf ("%d",&f);
    for (i=1; i<=f; i++)
    {
        multi=multi*i;
    }
    return multi;
}
// Recurtion
#include <stdio.h>
int factorial (int n)
{
    if (n==1 || n==0)
        return 1;
    return n*factorial(n-1);
}
int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Factorial of %d is: %d\n",n,factorial(n));
    return 0;
}
