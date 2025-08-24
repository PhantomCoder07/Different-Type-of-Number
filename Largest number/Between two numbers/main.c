// if-else
#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    if (a>b)
        printf("%d is Maximum.",a);
    else if (b>a)
        printf("%d is Maximum.",b);
    else
        printf ("Both are Equal.");
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    switch (a>b)
    {
    case 1:
        printf ("%d is Maximum.",a);
        break;
    case 0:
        switch (b>a)
        {
        case 1:
            printf ("%d is Maximum.",b);
            break;
        default:
            printf ("Both are equal");
        }
    }
    return 0;
}
// Ternary operator
#include <stdio.h>
int main()
{
    float a,b;
    printf ("Enter two numbers: ");
    scanf ("%f %f",&a,&b);
    (a>b)?(printf ("%.2f is Maximum.",a)):((b>a)?(printf ("%.2f is Maximum.",b)):(printf ("Both are equal")));
    return 0;
}
// Function
#include <stdio.h>
int large (int a, int b)
{
    if (a>b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    printf ("Enter two different numbers: ");
    scanf ("%d %d",&a,&b);
    printf("%d is largest\n",large(a,b));
    return 0;
}
