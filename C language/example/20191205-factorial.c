#include <stdio.h>

int factorial(int n);

int main(void)
{
    for(int i=1;i<=10;i++)
    {
        printf("%d! = %d\n", i, factorial(i));
    }

    return 0;
}

int factorial(int n)
{
    if(n<=1) return(1);
    else return(n * factorial(n-1));
}
