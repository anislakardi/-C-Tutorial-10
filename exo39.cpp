#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include<math.h>
int main(){
	int a,s=0,i,l,number,n=0,b=1,o,m=0,y;char hexa[8]={0};
	printf("enter number: ");
	scanf("%s",&hexa);l=strlen(hexa);
	for(i=0;i<=7;i++){
		switch(hexa[i]){
			case'A':number=10; s=s+(number*pow(16,l-1))           ;break;
			case'B':number=11;  s=s+(number*pow(16,l-1))          ;break;
			case'C':number=12;   s=s+(number*pow(16,l-1))         ;break;
			case'D':number=13;   s=s+(number*pow(16,l-1))         ;break;
			case'E':number=14;    s=s+(number*pow(16,l-1))        ;break;
			case'F':number=15;    s=s+(number*pow(16,l-1))        ;break;
			case'0':number=0;    s=s+(number*pow(16,l-1))        ;break;
			case'1':number=1;    s=s+(number*pow(16,l-1))        ;break;
			case'2':number=2;    s=s+(number*pow(16,l-1))        ;break;
			case'3':number=3;    s=s+(number*pow(16,l-1))        ;break;
			case'4':number=4;    s=s+(number*pow(16,l-1))        ;break;
			case'5':number=5;    s=s+(number*pow(16,l-1))        ;break;
			case'6':number=6;    s=s+(number*pow(16,l-1))        ;break;
			case'7':number=7;    s=s+(number*pow(16,l-1))        ;break;
			case'8':number=8;    s=s+(number*pow(16,l-1))        ;break;
			case'9':number=9;    s=s+(number*pow(16,l-1))        ;break;}l--;}
while(n!=9){
		o=s%8;
		s=s/8;m=m+(o*b);b=b*10;
		n=n+1;} 
		printf("(%s) in hexadecimal = (%d) in octal",hexa,m);return 0;
		}
