#include<stdio.h>
#include<string.h>
int main(){
	int ct=0,i;
	char c,pc,a[100];
	printf("������һ���ַ�\n");
	gets(a);
    
	printf("��������������ҵ��ַ���\n");
	scanf("%c",&c);
	for(i=0;(pc=a[i])!='\0';i++){
		if(pc==c){
			ct++;
		}
	}
	printf("�ַ��ظ������ǣ�%d\n",ct);
}