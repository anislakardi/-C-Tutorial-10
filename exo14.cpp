#include<stdio.h>

int main(){
	
	int a,b,x,y,r;
	printf("enter the first number: ");
	scanf("%d",&a);
	printf("enter the secend number: ");
	scanf("%d",&b);
r=1;x=a;y=b;
while(r!=0){
	r=a%b;
	a=b;
	b=r;
}
printf("PGCD of %d and %d is: %d",x,y,a);
	return 0;
}
