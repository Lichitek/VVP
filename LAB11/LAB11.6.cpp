#include <stdio.h>
#include <locale.h>
int main()
{
	int a;
	setlocale(LC_ALL, "RUS");
	scanf_s("%d", &a);
	if (a < 10)
	{
		if (a % 2 == 0)
		{
			printf("������ ����������� �����");
		}
		else
		{
			printf("�������� ����������� �����");
		}
	}
	if ((10 <= a)&&(a<100))
	{
		if (a % 2 == 0)
		{
			printf("������ ���������� �����");
		}
		else
		{
			printf("�������� ���������� �����");
		}
	}
	if ((100 <= a) && (a < 1000))
	{
		if (a % 2 == 0)
		{
			printf("������ ���������� �����");
		}
		else
		{
			printf("�������� ���������� �����");
		}
	}
}