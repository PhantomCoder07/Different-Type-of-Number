// if-else ladder
#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter Three different number:");
    scanf ("%d %d %d",&a,&b,&c);
    if ((a<b&&b<c)||(b>a&&c>b))
        printf ("%d is The Middle number.",b);
    else if ((b<a&&a<c)||(b>a&&a>c))
        printf ("%d is The Middle number.",a);
    else
        printf ("%d is The Middle number.",c);
    return 0;
}
// nested if-else
#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter Three different number:");
    scanf ("%d %d %d",&a,&b,&c);
    if (a>b)
    {
        if (c>a)
            printf ("%d is The Middle number.",a);
        else
        {
            if (b>c)
                printf ("%d is The Middle number.",b);
            else
                printf ("%d is The Middle number.",c);
        }
    }
    else
    {
        if (c>b)
            printf ("%d is The Middle number.",b);
        else
        {
            if (c>a)
                printf ("%d is The Middle number.",c);
            else
                printf ("%d is The Middle number.",a);
        }
    }
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter Three different number:");
    scanf ("%d %d %d",&a,&b,&c);
    switch (a>b)
    {
    case 1:
        switch (c>a)
        {
        case 1:
            printf ("%d is The Middle number.",a);
            break;
        default:
            switch (b>c)
            {
            case 1:
                printf ("%d is The Middle number.",b);
                break;
            default:
                printf ("%d is The Middle number.",c);
            }
        }
        break;
    default:
        switch (c>b)
        {
        case 1:
            printf ("%d is The Middle number.",b);
            break;
        default:
            switch (c>a)
            {
            case 1:
                printf ("%d is The Middle number.",c);
                break;
            default:
                printf ("%d is The Middle number.",a);
            }
        }
    }
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    float a,b,c;
    printf ("Enter Three different number:");
    scanf ("%f %f %f",&a,&b,&c);
    (b>a&&a>c || a>b&&c>a)?(printf ("%.2f is The Middle number.",a)):((a>b&&b>c || b>a&&c>b)?(printf ("%.2f is The Middle number.",b)):(printf ("%.2f is The Middle number.",c)));
    return 0;
}
// Function
#include <stdio.h>
int large (int a, int b, int c)
{
    if ((a<b&&b<c)||(b>a&&c>b))
        return b;
    else if ((b<a&&a<c)||(b>a&&a>c))
        return a;
    else
        return c;
}
int main()
{
    int a,b,c;
    printf ("Enter three different numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    printf("%d is middle number\n",large(a,b,c));
    return 0;
}
