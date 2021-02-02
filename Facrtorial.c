#include<stdio.h>
int main()
{
    int n;
    long long prd=1;
    printf("Enter a number \n");
    scanf("%d", &n);
    for(int i=2; i<=n;i++)
        prd *= i;
    printf("Factorial of %d is %Ld", n, prd);
    return 0;
}