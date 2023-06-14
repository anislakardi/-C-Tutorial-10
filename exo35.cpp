#include<stdio.h>

int main(){
	
	int a,y,m,o,b,n;
	printf("enter number: ");
	scanf("%d",&a);
	y=a;
	n=0;
	b=1;
	while(a!=0){
		o=a%2;
		a=a/2;
		m=m+(o*b);
		b=b*10;
		n=n+1;
	}
		printf("(%d) in decimal = (%d) in binary",y,m);
	return 0;
}
