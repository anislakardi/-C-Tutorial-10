#include<stdio.h>

int main(){
int a,r,i,j,q,s;
printf("enter number: ");
scanf("%d",&a);
printf("the prime factors of %d is: ",a);
r=0;i=1;s=0;q=0;j=2;
for(i=2;i<=a;i++){
	r=a%i;
	if(r==0){
		s=0;
		q=0;
		for(j=2;j<=i-1;j++){
			q=i%j;
			if(q==0){
				s=s+1;
			}
		}
		if(s==0){
			printf("%d  ",i);
		}
		
	}
}
   	
	return 0;
}
