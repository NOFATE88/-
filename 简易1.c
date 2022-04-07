#include<stdio.h>
#include<string.h>
 
int main(){
	char kb[]="3+4";

	int a=kb[0]-'0';
	int b=kb[2]-'0';
	printf("%d\n",a+b);

	return 0;
}