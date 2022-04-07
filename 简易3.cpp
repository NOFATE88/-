#include<stdio.h>
#include<string.h>
 
int main(){

	char kc[]="2*2/4*1/1*2*3/2";
	int sum=kc[0]-'0',i;
	for(i=1;i<strlen(kc);i++)
	{
		if(kc[0]=='*')
		{
			int a=kc[i+1]-'0';
			sum*=a;
		}
		else if(kc[0]=='/'){
			int b=kc[i+1]-'0';
			sum/=b;
		}
	}
	printf("sum=%d\n",sum);

	return 0;
}