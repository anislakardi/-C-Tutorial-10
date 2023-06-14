#include<stdio.h>

int main(){
	
int n;
float s,i;
s=0;
i=1;
printf("enter number: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
	s=s+(1/i);
}
printf("the sum is : %.2f",s);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
