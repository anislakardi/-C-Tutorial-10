#include<stdio.h>

int main(){
int a,n,x,p,s,r,i;
printf("enter number: ");
scanf("%d",&a);
n=0;x=a;
while(a!=0){
	a=a/10;
	n=n+1;
}
a=x;
p=1;s=0;i=1;
while(a!=0){
	r=a%10;
	a=a/10;
p=1;
	for(i=1;i<=n;i++){
		p=p*r;
	}
	s=s+p;
}
if(s==x){
	printf("%d is an armstrong number ",x);
}
else{
	printf("%d is not an armstrong number ",x);
}


	return 0;
}
