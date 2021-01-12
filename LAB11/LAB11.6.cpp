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
			printf("чётное однозначное число");
		}
		else
		{
			printf("нечётное однозначное число");
		}
	}
	if ((10 <= a)&&(a<100))
	{
		if (a % 2 == 0)
		{
			printf("чётное двузначное число");
		}
		else
		{
			printf("нечётное двузначное число");
		}
	}
	if ((100 <= a) && (a < 1000))
	{
		if (a % 2 == 0)
		{
			printf("чётное трёхзначное число");
		}
		else
		{
			printf("нечётное трёхзначное число");
		}
	}
}