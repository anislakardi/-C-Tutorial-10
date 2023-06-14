#include<stdio.h>

int main(){
	int i,num,x;
	printf("enter a number :");
	scanf("%d",&num);
	for(i=0;i<=10;i++){
		x=num*i;
		printf("%d * %d = %d\n",num,i,x);
		
	}
	
	
	
	return 0;
}
