#include<stdio.h>
int main()
{
    int n, prime=1;
    printf("Enter a number \n");
    scanf("%d", &n);
    for(int i=2; i*i<=n;i++) //For faster result
    {
        if(n%i==0)
        {
            prime = 0;
            break;
        }
    }
    if(prime==1)
        printf("Prime");
    else
        printf("Not Prime");
    return 0;
}