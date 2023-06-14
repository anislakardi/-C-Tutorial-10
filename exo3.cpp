#include<stdio.h>

int main(){
	int a,i,y,x;
	printf("enter a number :");
	scanf("%d",&a);
	while(i<1){
		x=a%10;
		i++;
	}
	while(a>=1){
		y=a%10;
		a=(a/10)-(y/10);
	}
printf("the first number is : %d\n",y);
printf("the last number is : %d",x);
	
	
	return 0;
}
