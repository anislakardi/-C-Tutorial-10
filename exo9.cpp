#include<stdio.h>

int main(){
	int a,z,c,p,x,r;
	printf("enter a number :");
	scanf("%d",&a);
	z=a;x=a;p=0;r=0;c=1;
	while(a!=0){
		r=a%10;
		a=a/10;
		c=c*10;
		
	}
	c=c/10;
	while(z!=0){
		r=z%10;
		z=z/10;
		p=p+(r*c);
		c=c/10;
		
	}
	printf("%d\n",p);
	if(x==p){
		printf("is palindrome");
	}
	else{
		printf("is not palindrome");
		
	}

	return 0;
}
