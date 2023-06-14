#include<stdio.h>
#include<string.h>
int main(){
	int j;
	char binary[8];
		printf("Enter number: ");
		scanf("%s",&binary);
	switch(binary[0]){
	case '1':
	for(j=1;j<8;j++){
	switch(binary[j]){
		case '1':   binary[j]='0';     ;break;
		case '0':   binary[j]='1';     ;break;
	}
	}
	printf("Ca1=%s",binary);break;
	case '0': printf("Ca1=%s",binary);break;
}
return 0;
}












