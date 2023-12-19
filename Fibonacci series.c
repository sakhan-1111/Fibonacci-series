#include <stdio.h>
#include <conio.h>

int main()
{
    int i,j=0,k=1,s,r=0,n;
    printf("Fibonacci series of ");
    scanf("%d", &n);
    printf("%d, %d, ",j,k);
    for(i=1; i<=(n-2); i++)
    {
        s=j+k;
        j=k;
        k=s;
        r=r+s;
        printf("%d, ", s);
    }
    /*printf("\nResult = %d",r); */

    return 0;
}
