#include<stdio.h>

int main(){
	int b,a,i,x;
	printf("enter a number: ");
	scanf("%d",&a);
	b=10;
	i=0;
	x=1;
	while(x!=0){
		x=a/b;
		b=b*10;
		i++;
		
	}
	printf("the number of digit is : %d",i);
	
	return 0;
}
