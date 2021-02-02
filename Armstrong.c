#include<stdio.h>
int main()
{
    int n, n2, sum=0, prd=1;
    printf("Enter a number \n");
    scanf("%d", &n);
    n2 = n;
    int size;
    while(n>0) //To check number of digits
    {
        size++;
        n /= 10;
    }
    n = n2;
    while(n>0) // For x^n + y^n +z^n where xyz are the digits and n is the no of digits
    {
        int r = n%10;
        prd =1;
            for(int i=1; i<=size;i++)
            {
                prd *= r;
            }
        sum += prd;
        n /= 10;
    }
    if(n2==sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}