#include<stdio.h>
#include<conio.h>
int main()
{
    char c;
    printf("Enter a capital Alphabet: ");
    scanf("%c",&c);
    char j;
    int i;
    for(i=c;i>=65;i--)
    {
        for(j=65;j<=i;j++)
        printf("%c",j);
        for(j=2*(c-i)-1;j>0;j--)
        printf(" ");
        if(i-c==0) {for(j=i-1;j>=65;j--) printf("%c",j);}
        else {for(j=i;j>=65;j--) printf("%c",j);}
        printf("\n");
    }
    printf("\n\n\n[Press any key to exit]");
    getch();
    return 0;
}
