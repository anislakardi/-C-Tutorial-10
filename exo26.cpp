#include<stdio.h>
#include<math.h>
int main(){
int f1,f2,n,s,i;
printf("enter number : ");
scanf("%d",&n);
s=1;f1=0;i=0;
for(i=2;i<=n;i++){
f2=f1;
f1=s;
s=f1+f2;
	
}	
	printf("F(%d)=%d",n,s);
	return 0;
}
