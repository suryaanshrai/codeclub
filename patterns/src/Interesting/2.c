/*

555555555
555545555
555434555
554323455
543212345
554323455
555434555
555545555
555555555

*/
#include<conio.h>
#include<stdio.h>
int main()
{
    printf("Enter n (<=9): ");
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        for(j=0;j<2*n-1;j++)
        printf("%d",n);
        else{
            int j;
            for(j=0;j<n-i;j++)
            printf("%d",n);
            for(j=n-1;j>=n-i;j--)
            printf("%d",j);
            for(j=j+2;j<n;j++)
            printf("%d",j);
            for(j=0;j<n-i;j++)
            printf("%d",n);
        }
        printf("\n");
    }
    for(i=n-2;i>=0;i--)
    {
        if(i==0)
        for(j=0;j<2*n-1;j++)
        printf("%d",n);
        else{
            int j;
            for(j=0;j<n-i;j++)
            printf("%d",n);
            for(j=n-1;j>=n-i;j--)
            printf("%d",j);
            for(j=j+2;j<n;j++)
            printf("%d",j);
            for(j=0;j<n-i;j++)
            printf("%d",n);
        }
        printf("\n");
    }
    printf("\n\n\n[Press any key to exit]");
    getch();
}
