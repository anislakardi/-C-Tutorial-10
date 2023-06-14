#include<stdio.h>

int main(){
	int a,s,f,x,r,i;
	printf("enter number: ");
	scanf("%d",&a);
	s=0;x=a;
	while(a!=0){
	i=1;f=1;
	r=a%10;
	a=a/10;
	for(i=1;i<=r;i++){
	f=f*i;
	}
	s=s+f;
	}
	if(x==s){
		printf("%d is strong number ",x);
	}
	else{
		printf(" %d is not strong number ",x);
	}
	
	
	return 0;
}
