#include<stdio.h>

int main(){
int a,i,j,z,s;

printf("enter a number ");
scanf("%d",&a);
printf("all perfect number between 1 to %d is : ",a);
j=1;z=0;
while(j!=a){
s=0;i=1;
	for(i=1;i<j;i++){
		z=j%i;
		if(z==0){
			s=s+i;
		}
	}
	if(s==j){
		printf("%d  ",j);
	}
j++;
}

	return 0;
}
