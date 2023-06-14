#include<stdio.h>

int main(){
	
	int a,i,x,s,q;
	printf("enter the first number: ");
	scanf("%d",&x);

i=1;q=0;a=0;s=0;
for(a=2;a<=x;a++){
q=0;
s=0;
for(i=2;i<a;i++){

	q=a%i;
	if(q==0){
		s=s+1;
		
	}
}
if(s==0){
	printf(" %d ",a);
	
}

}
	return 0;
}
