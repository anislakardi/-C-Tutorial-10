#include<stdio.h>

int main(){
	int a,i,z;
	printf("enter a number :");
	scanf("%d",&a);
	z=0;
	printf("the factors of %d =  ",a);
	for(i=1;i<=a;i++){
		z=a%i;
		if(z==0){
			printf("%d  ",i);
		}
	}
	
	return 0;
}
