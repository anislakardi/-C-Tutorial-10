#include<stdio.h>

int main(){
	int a,n,f,r,i,y,x,s;
	printf("enter number: ");
	scanf("%d",&n);
	printf("all strong number between 1 to %d is : \n",n);
	a=1;
	while(a!=n){
	x=a;
	y=a;
	s=0;
	while(y!=0){
		i=1;f=1;
	r=y%10;
	y=y/10;
	for(i=1;i<=r;i++){
	f=f*i;
	}
	s=s+f;
	}
	
	
	if(x==s){
		printf("%d  ",x);
	
	}
a++;
}

	return 0;
}
