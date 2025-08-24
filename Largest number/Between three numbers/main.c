// if-else ladder
#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter three integers: ");
    scanf ("%d %d %d",&a,&b,&c);
    if (a>=b && a>=c)
        printf ("%d is Greatest.",a);
    else if (b>=a && b>=c)
        printf ("%d is Greatest.",b);
    else
        printf ("%d is Greatest.",c);
    return 0;
}
// nested if-else
#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter three integers: ");
    scanf ("%d %d %d",&a,&b,&c);
    if (a>=b)
    {
        if (a>=c)
            printf ("%d is Greatest.",a);
        else
            printf ("%d is Greatest.",c);
    }
    else
    {
        if (b>=c)
            printf ("%d is Greatest.",b);
        else
            printf ("%d is Greatest.",c);
    }
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int a,b,c;
    printf ("Enter three integers: ");
    scanf ("%d %d %d",&a,&b,&c);
    switch (a>b)
    {
    case 1:
        switch (a>c)
        {
        case 1:
            printf ("%d is Greatest.",a);
            break;
        default:
            printf ("%d is Greatest.",c);
        }
        break;
    case 0:
        switch (b>c)
        {
        case 1:
            printf ("%d is Greatest.",b);
            break;
        default:
            printf ("%d is Greatest.",c);
        }
        break;
    }
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    float a,b,c;
    printf ("Enter three integers: ");
    scanf ("%f %f %f",&a,&b,&c);
    (a>=b)?((a>=c)?(printf ("%.2f is Greatest.",a)):(printf ("%.2f is Greatest.",c))):((b>=c)?(printf ("%.2f is Greatest.",b)):(printf ("%.2f is Greatest.",c)));
    return 0;
}
// Function
#include <stdio.h>
int large (int a, int b, int c)
{
    if (a>=b && a>=c)
        return a;
    else if (b>=a && b>=c)
        return b;
    else
        return c;
}
int main()
{
    int a,b,c;
    printf ("Enter three different numbers: ");
    scanf ("%d %d %d",&a,&b,&c);
    printf("%d is largest\n",large(a,b,c));
    return 0;
}
