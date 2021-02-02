#include<stdio.h>
int main()
{
    int n, n2, sum=0;
    printf("Enter a number \n");
    scanf("%d", &n);
    n2 = n;
    while(n>0)
    {
        sum *= 10;
        int r = n%10;
        sum += r;
        n /= 10;
    }
    if(sum==n2)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}