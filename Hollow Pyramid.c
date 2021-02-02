/*
6
        &
       & &
     &     &
   &         &
 &             &
& & & & & & & & &
*/
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number \n");
    scanf("%d", &n);
    int s= n + n/2;
    for(int i=0; i<n-1;i++)
    {
        for(int j=2*i; j<s; j++)
        {
            if(j==0)
                j += 1;
            printf(" ");
        }
        printf("&");
        if(i>0)
        {
            for(int k=3;k<4*i;k++)
                printf(" ");
            printf("&");
        }
        printf(" \n");
    }
    for(int i=1; i<=s;i++)
        printf("& ");
    return 0;
}