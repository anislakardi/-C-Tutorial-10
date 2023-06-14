#include<stdio.h>

int main(){
	
	int a,x,y,r,t,s,n;
	printf("enter number: ");
	scanf("%d",&a);
	x=a;
	y=a;
	n=0;s=0;
	while(a!=0){
		a=a/10;
		n++;
	}
	n=n-1;t=1;
	while(x!=0){
		r=x%10;
		x=x/10;
		s=s+(r*t);
		t=t*2;
	}
	printf("(%d) in binary = (%d) in decimal",y,s);
	return 0;
}
