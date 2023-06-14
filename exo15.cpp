#include<stdio.h>

int main(){
	
	int a,b,x,y,m,r;
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
m=(x*y)/a;
printf("LCM of %d and %d is: %d",x,y,m);
	return 0;
}
