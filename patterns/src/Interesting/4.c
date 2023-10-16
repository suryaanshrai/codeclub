#include<conio.h>
#include<stdio.h>
void boat(int,int);
int main(){
	int h,l;
	printf("Enter height of boat: ");
	scanf("%d",&h);
	printf("Enter length of boat(>height): ");
	scanf("%d",&l);
	boat(h,l);
	printf("\n\n\n[Press any key to exit]");
	getch();
	}
void boat(int h,int l){
	int s=(2*l-1)/2,i,j,s2=1;
	//printing the two upper triangles
	for(i=1;i<h;i++){
	if(i!=1 && i!=2){
	for(j=1;j<=s-i+1;j++) printf(" ");
	printf("*");
	for(j=1;j<=s2;j++) printf(" ");
	printf("* *");
	for(j=1;j<=s2-1;j++) printf(" ");
	printf("*");
	s2++;}
	else if(i==1){
	for(j=1;j<=s;j++) printf(" ");
	printf("*");}
	else if(i==2){
	for(j=1;j<=s-1;j++) printf(" ");
	printf("** *");}
	printf("\n");}
	//printing the base of the boat
	for(i=1;i<=2*l-1;i++) printf("*");
	printf("\n ");
	for(i=1;i<=2*l-3;i++) printf("*");}

