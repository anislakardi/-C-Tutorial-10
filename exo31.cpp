#include<stdio.h>
#include<string.h>
int todecimal(int);
int main(){
	int a,y,m,o,b,i,n,k=0;char hexa[8]={0};char hexadecimal[8];
	printf("enter number: ");
	scanf("%d",&a);           y=a;a=todecimal(a);n=0;b=1;i=0;
	while(a!=0){o=a%16;a=a/16;
		switch(o){
			case 0: hexadecimal[i]='0';break;
			case 1: hexadecimal[i]='1';break;
			case 2: hexadecimal[i]='2';break;
			case 3: hexadecimal[i]='3';break;
			case 4: hexadecimal[i]='4';break;
			case 5: hexadecimal[i]='5';break;
			case 6: hexadecimal[i]='6';break;
			case 7: hexadecimal[i]='7';break;
			case 8: hexadecimal[i]='8';break;
			case 9: hexadecimal[i]='9';break;
			case 10: hexadecimal[i]='A';break;
			case 11: hexadecimal[i]='B';break;
			case 12: hexadecimal[i]='C';break;
			case 13: hexadecimal[i]='D';break;
			case 14: hexadecimal[i]='E';break;
			case 15: hexadecimal[i]='F';break;
		}i++;	}
	int l=strlen(hexadecimal);
	for(int j=l-1;j>=0;j--){
		hexa[k]=hexadecimal[j];
		k++;}printf("(%d) in binary = (%s) in hexadecimal",y,hexa);return 0;}
	int todecimal(int num){
	int r,t,s;s=0;t=1;
	while(num!=0){
		r=num%10;
		num=num/10;
		s=s+(r*t);
		t=t*2;
	}return s;}
