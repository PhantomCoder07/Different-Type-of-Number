// if-else
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter a number:");
    scanf ("%d",&a);
    if (a%2==0)
        printf("The given number %d is Even.",a);
    else
         printf("The given number %d is Odd.",a);
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter a number:");
    scanf ("%d",&a);
    switch (a%2)
    {
    case 0:
        printf ("The given number %d is Even.",a);
        break;
    case 1:
        printf ("The given number %d is Odd.",a);
        break;
    default:
        printf ("The number is invalid.");
    }
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter a number:");
    scanf ("%d",&a);
    (a%2==0)?(printf ("The given number %d is Even.",a)):(printf ("The given number %d is Odd.",a));
    return 0;
}
// Function
#include <stdio.h>
int eo (int a)
{
    if (a%2==0)
        return 1;
    else
        return 0;
}
int main()
{
    int a;
    printf ("Enter an integer number: ");
    scanf ("%d",&a);
    if (eo(a)==1)
        printf("The given number is Even.\n");
    else
        printf("The given number is Odd.\n");
    return 0;
}
