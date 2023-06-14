#include<stdio.h>

int main(){
	
	int a,i,x,s,sum,q;
	printf("enter the first number: ");
	scanf("%d",&x);
sum=0;
i=1;q=0;a=0;s=0;
for(a=0;a<=x;a++){
q=0;
s=0;
for(i=2;i<a;i++){

	q=a%i;
	if(q==0){
		s=s+1;
		
	}
}
if(s==0){
	sum=sum+a;
	
}

}
printf("the sum of all prime numbers between 0 and %d is : %d",x,sum);
	return 0;
}
