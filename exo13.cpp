#include<stdio.h>

int main(){
	
	int a,s,i;
	s=1;
	printf("enter number: ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		s=s*i;
	}
printf("the factorial of %d is :%d",a,s);
	return 0;
}
