// if-else ladder
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter an integer: ");
    scanf ("%d",&a);
    if (a>0)
        printf("The given number %d is Positive\n",a);
    else if (a<0)
        printf("The given number %d is Negative\n",a);
    else
        printf("The given number is 0\n");
    return 0;
}
// Nested if-else
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter an integer: ");
    scanf ("%d",&a);
    if (a>0)
        printf("The given number %d is Positive\n",a);
    else
    {
        if (a<0)
            printf("The given number %d is Negative\n",a);
        else
            printf("The given number is 0\n");
    }
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter an integer: ");
    scanf ("%d",&a);
    (a>0)?(printf("The given number %d is Positive\n",a)):((a<0)?(printf("The given number %d is Negative\n",a)):(printf("The given number is 0\n")));
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int a;
    printf ("Enter an integer: ");
    scanf ("%d",&a);
    switch (a>0)
    {
    case 1:
        printf("The given number %d is Positive\n",a);
        break;
    default:
        switch (a<0)
        {
        case 1:
            printf("The given number %d is Negative\n",a);
            break;
        default:
            printf("The given number is 0\n");
        }
    }
    return 0;
}
// Function
#include <stdio.h>
int pn (int a)
{
    if (a>0)
        return 1;
    else if (a<0)
        return 2;
    else
        return 0;
}
int main()
{
    int a;
    printf ("Enter an integer number: ");
    scanf ("%d",&a);
    if (pn(a)==1)
        printf("The given number %d is Positive\n",a);
    else if (pn(a)==2)
        printf("The given number %d is Negative\n",a);
    else if (pn(a)==0)
        printf("The given number is 0\n");
    return 0;
}
