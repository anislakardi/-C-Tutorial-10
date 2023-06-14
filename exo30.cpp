#include<stdio.h>
#include<string.h>
int main(){
	int i,j,l;
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
	l=strlen(binary);
	for(i=l-1;i>=0;i--){
		switch(binary[i]){
			case '0': binary[i]='1';
			i=0;break;
		}
	}
	printf("Ca2=%s",binary);break;
	case '0': printf("Ca2=%s",binary);break;
}
	
return 0;
}

