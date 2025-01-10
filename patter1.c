/*
55555
4444
333
22
1

*/
/*
#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}
 */

//--------------------------------------------------------------------------------------------------------------------------------

#include<stdio.h>

int main(int argc, char const *argv[])
{
    for (int i =1; i <= 3; i++)
    {
        for (int j = 3; j >i; j--)
        {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
