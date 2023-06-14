#include<stdio.h>

int main(){
	
	int a,x,r,t,s,n;
	printf("enter number: ");
	scanf("%d",&a);
	x=a;
	n=0;s=0;
	t=1;
	while(x!=0){
		r=x%10;
		x=x/10;
		s=s+(r*t);
		t=t*8;
		n++;
	}
	printf("(%d) in octal = (%d) in decimal",a,s);

	
	return 0;
}
