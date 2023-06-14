#include<stdio.h>

int main(){
	int a,x,c,b,r,s;
	c=1;
	s=0;
	x=0;

	printf("enter a number :");
	scanf("%d",&a);
	b=a;
	while(a!=0){
		x=a%10;
		a=a/10;
		c=c*10;
	}
	c=c/10;
	while(c!=0){
		r=b%10;
		s=s+(r*c);
		b=b/10;
		c=c/10;
	}
	printf("the reverse number is: %d",s);
	return 0;
}
