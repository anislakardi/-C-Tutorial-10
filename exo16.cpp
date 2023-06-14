#include<stdio.h>

int main(){
	
	int a,i,x,s,q;
	printf("enter the first number: ");
	scanf("%d",&a);
i=1;q=0;x=a;s=0;
for(i=2;i<a;i++){

	q=a%i;
	if(q==0){
		s=s+1;
		
	}
}
if(s==0){
	printf("%d is prime number ",x);
	
}
else{
	printf("%d is not prime number ",x);
}

	return 0;
}
