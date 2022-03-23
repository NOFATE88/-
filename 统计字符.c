#include<stdio.h>
#include<string.h>
int main(){
	int ct=0,i;
	char c,pc,a[100];
	printf("请输入一串字符\n");
	gets(a);
    
	printf("请输入其中想查找的字符：\n");
	scanf("%c",&c);
	for(i=0;(pc=a[i])!='\0';i++){
		if(pc==c){
			ct++;
		}
	}
	printf("字符重复次数是：%d\n",ct);
}