#include <stdio.h>
int main()
{
    double n;
    printf("Enter a number: ");
    scanf("%lf",&n);
    int m=n;
    if (n>0 && m==n)
        printf("The number is natural\n");
    else
        printf("The number is not natural\n");
    return 0;
}
