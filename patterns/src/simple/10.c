#include<conio.h>
#include<stdio.h>
int main()
{
    int a,b,c,j,row,space,col;
    printf("Enter no. of Rows: ");
    scanf("%d" ,&row);
    for(a=1;a<=row;a++){
            for(b=1; b<=a-1;b++){
                   printf(" ");}
            for(j=1;j<=row+1-a;j++){
                  if(a==1 || j==row+1-a || j==1){
                     printf("*");}
                   else{
                       printf(" ");}}
            printf("\n");
            }
	printf("\n\n\n[Press any key to exit]");
	getch();	
}
