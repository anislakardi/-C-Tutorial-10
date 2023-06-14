#include<stdio.h>

int main(){
int a,n,f,i,r,p,j,s;
n=0;i=10;
printf("enter a number ");
scanf("%d",&a);
printf("all armstrong number between 1 to %d is :",a);
j=1;r=0;
while(i!=a){
     f=i;s=0;n=0;
	while(f!=0){
		f=f/10;
		n=n+1;
	}
	f=i;
	while(f!=0){
		r=f%10;
		f=f/10;
		p=1;j=1;
		for(j=1;j<=n;j++){
			p=p*r;
		}
		s=s+p;
	}
if(s==i){
	printf("%d   ",i);
}
i++;
}

	return 0;
}
