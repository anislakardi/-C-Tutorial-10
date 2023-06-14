#include<stdio.h>

int main(){
	int a,y,b,s;
	printf("enter a number :");
	scanf("%d",&a);
	y=0;
	b=1;
	s=0;
	while(a>=1){
		y=a%10;
		s=s+y;
		a=(a/10)-(y/10);
		b=b*10;
		
	}
	printf("the sum is : %d",s);

	return 0;
}
