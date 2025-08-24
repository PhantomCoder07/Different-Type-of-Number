// if-else
#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    if (a<b)
        printf("%d is Smallest.\n",a);
    else if (b<a)
        printf("%d is Smallest.\n",b);
    else
        printf ("Both are Equal.\n");
    return 0;
}
// switch
#include <stdio.h>
int main()
{
    int a,b;
    printf ("Enter two numbers: ");
    scanf ("%d %d",&a,&b);
    switch (a<b)
    {
    case 1:
        printf ("%d is Smallest.\n",a);
        break;
    case 0:
        switch (b<a)
        {
        case 1:
            printf ("%d is Smallest.\n",b);
            break;
        default:
            printf ("Both are equal\n");
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
    (a<b)?(printf ("%.2f is Smallest.",a)):((b<a)?(printf ("%.2f is Smallest.",b)):(printf ("Both are equal")));
    return 0;
}
// Function
#include <stdio.h>
int small (int a, int b)
{
    if (a<b)
        return a;
    else
        return b;
}
int main()
{
    int a,b;
    printf ("Enter two different numbers: ");
    scanf ("%d %d",&a,&b);
    printf("%d is Smallest\n",small(a,b));
    return 0;
}
