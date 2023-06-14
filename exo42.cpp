#include<stdio.h>

int main(){
	
int p,i,k;
float x,n,y,f,b,s,m;
printf("enter n: ");
scanf("%f",&n);
printf("enter x: ");
scanf("%f",&x);
s=0;
for(p=0;p<=n;p++){
	


m=((2*p)+1);


if(p%2==0){
	y=1;
}
else if(p%2!=0){
	y=-1;
}
i=1;f=1;
for(i=1;i<=m;i++){
	f=f*i;
}
k=1;b=1;
for(k=1;k<=m;k++){
	b=b*x;
}
s=s+((y/f)*b);
}
printf("the sum of sin(%d) is: %.2f",x,s);
	
	return 0;
}
