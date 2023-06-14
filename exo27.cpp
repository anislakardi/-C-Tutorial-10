#include<stdio.h>
int main(){
	int a,x,y,r,m,o,b,t,s,n;
	printf("enter number: ");
	scanf("%d",&a);
	x=a;n=0;s=0;y=a;t=1;
	while(x!=0){
		r=x%10;
		x=x/10;
		s=s+(r*t);
		t=t*2;
		n++;
	}
	m=0;b=1;
	while(n!=0){
		o=s%8;
		s=s/8;
		m=m+(o*b);
	
		b=b*10;
		n=n-1;
	}printf("(%d) in binary = (%d) in octal",y,m);
	return 0;}

