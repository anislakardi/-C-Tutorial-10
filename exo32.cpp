#include<stdio.h>
int main(){
	int a,x,y,r,m,o,b,t,s,n;
	printf("enter number: ");
	scanf("%d",&a);
	x=a;t=1;n=0;s=0;y=a;
	while(x!=0){
		r=x%10;
		x=x/10;
		s=s+(r*t);
		t=t*8;
		n++;
	}m=0;b=1;
	while(n!=99){
		o=s%2;
		s=s/2;
		m=m+(o*b);
		b=b*10;
		n=n+1;
	}
		printf("(%d) in octal = (%d) in binary",y,m);
	return 0;
}
