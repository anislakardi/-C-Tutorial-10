#include<stdio.h>

int main(){
	int a,i,y,b,s,x;
	printf("enter a number :");
	scanf("%d",&a);
	b=1;
	s=a;
while(i<1){
	x=a%10;
	i++;
}
while(a>=1){
	y=a%10;
	a=(a/10)-(y/10);
	b=b*10;
}
s=(s-(y*(b/10)))+(x*(b/10));
s=(s-x)+y;
printf("the swaping number is : %d",s);
	return 0;
}
