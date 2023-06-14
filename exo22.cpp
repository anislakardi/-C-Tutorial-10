#include<stdio.h>

int main(){
int a,z,i,s,x;

printf("enter a number: ");
scanf("%d",&a);
z=0;s=0;x=a;
	for(i=1;i<a;i++){
		z=a%i;
		if(z==0){
			s=s+i;
		}
	}
	if(s==x){
		printf("%d is perfect number ",a);
	}
	else{
		printf("%d is not perfect number ",a);
	}


	return 0;
}
