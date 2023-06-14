#include<stdio.h>

int main(){
	int a,r,n0,n1,n2,n3,n4,n5,n6,n7,n8,n9;
	n0=0;n1=0;n2=0;n3=0;n4=0;n5=0;n6=0;n7=0;n8=0;n9=0;
r=0;
	printf("enter a number :");
	scanf("%d",&a);
	while(a!=0){
		r=a%10;
		a=a/10;
		switch(r){
			case 0 :n0=n0+1;break;
			case 1 :n1=n1+1;break;
			case 2 :n2=n2+1;break;
			case 3 :n3=n3+1;break;
			case 4 :n4=n4+1;break;
			case 5 :n5=n5+1;break;
			case 6 :n6=n6+1;break;
			case 7 :n7=n7+1;break;
			case 8 :n8=n8+1;break;
			case 9 :n9=n9+1;break;
		}
	}
    if(n0!=0){
    	printf("the ferquency of 0 is : %d\n",n0);
	}
	if(n1!=0){
    	printf("the ferquency of 1 is : %d\n",n1);
	}
	if(n2!=0){
    	printf("the ferquency of 2 is : %d\n",n2);
	}
	if(n3!=0){
    	printf("the ferquency of 3 is : %d\n",n3);
	}
	if(n4!=0){
    	printf("the ferquency of 4 is : %d\n",n4);
	}
	if(n5!=0){
    	printf("the ferquency of 5 is : %d\n",n5);
	}
	if(n6!=0){
    	printf("the ferquency of 6 is : %d\n",n6);
	}
	if(n7!=0){
    	printf("the ferquency of 7 is : %d\n",n7);
	}
	if(n8!=0){
    	printf("the ferquency of 8 is : %d\n",n8);
	}
	if(n9!=0){
    	printf("the ferquency of 9 is : %d",n9);
	}
	return 0;
}
