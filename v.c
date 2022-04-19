#include <stdio.h>
#include <stdlib.h>

double get_oprand()                          //��ȡ������
{
	double value;
	scanf("%lf", &value);
	return value;
}

char get_operator()                          //��ȡ���������
{
	char op;
	do
	{
		scanf("%c", &op);
	} while (op == ' ');
	return op;
}

int prior(char op1, char op2)              //�ж���������ȼ�
{
	int flag;
	if (op1 == '*' || op1 == '/')
		if (op2 == '+' || op2 == '-')
			flag = 1;
		else flag = 0;
	else if (op2 == '*' || op2 == '/')
		flag = -1;
	else flag = 0;
	return flag;
}

double evaluates(double left, char op, double right)       //��������
{
	{
		switch (op)
		{
		case '+':return left + right; break;
		case '-':return left - right; break;
		case '*':return left * right; break;
		case '/':
			if (right != 0)
				return left / right;
			else
			{              //����Ϊ��
				printf("�������Ϸ�������Ƿ�Ϊ��\n");
				exit(1);      //ǿ�ƽ�������
			}
		default:return 0.0;
		}
	}
}


int main()
{
	double value1, value2, value3, result;
	char op1, op2;                         //���������
	value1 = get_oprand();
	op1 = get_operator();
	value2 = get_oprand();
	op2 = get_operator();
	while (op2 != '\n')                    //û�н���ʱ
	{
		value3 = get_oprand();
		if (prior(op2, op1))
			value2 = evaluates(value2, op2, value3);
		else
		{
			value1 = evaluates(value1, op1, value2);
			op1 = op2;
			value2 = value3;
		}
		op2 = get_operator();
	}
	result = evaluates(value1, op1, value2);      //���������֮��

	printf("���Ϊ%lf\n", result);
	return 0;
}

