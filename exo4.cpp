#include<stdio.h>

int main(){
	int a,i,y,x,sum;
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
sum=y+x;
printf("the sum of the first and the last number is: %d",sum);
	
	
	return 0;
}
