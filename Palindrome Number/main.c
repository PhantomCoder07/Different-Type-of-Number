// while loop
#include <stdio.h>
int main()
{
    int i,d,num,sum=0;
    printf ("Enter a number: ");
    scanf ("%d",&num);
    i= num;
    while (num>0)
    {
        d= num%10;
        sum= d+(sum*10);
        num= num/10;
    }
    if(i==sum)
        printf ("The number %d is Palindrome\n",i);
    else
        printf ("The number %d is not Palindrome\n",i);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i,d,num,sum=0;
    printf ("Enter a number: ");
    scanf ("%d",&num);
    i= num;
    do
    {
        d= num%10;
        sum= d+(sum*10);
        num= num/10;
    } while (num>0);
    if(i==sum)
        printf ("The number %d is Palindrome\n",i);
    else
        printf ("The number %d is not Palindrome\n",i);
    return 0;
}
// String
#include <stdio.h>
#include <string.h>
int main()
{
    char num[10],rev[10];
    int comp;
    printf ("Enter the number: ");
    gets(num);
    strcpy (rev,num);
    strrev (rev);
    comp= strcmp (num,rev);
    if (comp==0)
        printf ("The number %s is Palindrome\n",num);
    else
        printf ("The number %s is not Palindrome\n",num);
    return 0;
}
