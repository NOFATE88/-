#include<stdio.h>
#include<string.h>
 
int main(){
	char ka[]="1+2+2+1+2+5+4-1-3+4-8";

	int sum=ka[0]-'0',i;
	for(i=1;i<strlen(ka);i++){
		if(ka[i]=='+'){
			int a=ka[i+1]-'0';
			sum+=a;
		}
		else if(ka[i]=='-'){
			int b=ka[i+1]-'0';
			sum-=b;
		}
	}
	printf("sum=%d\n",sum);

	return 0;
}