// for loop t1
#include <stdio.h>
int main()
{
    int i,num,count=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    for (i=1; i<=num; i++)
    {
        if (num%i==0)
        {
            count++;
        }
    }
    if (count==2)
        printf ("The number %d is Prime\n",num);
    else
        printf ("The number %d is not Prime\n",num);
    return 0;
}
// for loop t2
#include <stdio.h>
int main()
{
    int i,num,flag=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    if (num==1 || num==0)
        flag=1;
    for (i=2; i<=num/2; i++)
    {
        if (num%i==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf ("The number %d is Prime\n",num);
    else
        printf ("The number %d is not Prime\n",num);
    return 0;
}
// while loop
#include <stdio.h>
int main()
{
    int i=1,num,count=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    while (i<=num)
    {
        if (num%i==0)
        {
            count++;
        }
        i++;
    }
    if (count==2)
        printf ("The number %d is Prime\n",num);
    else
        printf ("The number %d is not Prime\n",num);
    return 0;
}
// do-while loop
#include <stdio.h>
int main()
{
    int i=1,num,count=0;
    printf ("Enter the number: ");
    scanf ("%d",&num);
    do
    {
        if (num%i==0)
        {
            count++;
        }
        i++;
    }
    while (i<=num);
    if (count==2)
        printf ("The number %d is Prime\n",num);
    else
        printf ("The number %d is not Prime\n",num);
    return 0;
}
