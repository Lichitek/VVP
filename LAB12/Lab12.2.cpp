#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	char c;
	scanf_s("%c", &c);
	scanf_s("%d", &N);
	switch (c)
	{
		case 'N':
			switch (N)
			{
				case -1:
					c='�';
					break;
				case 0:
					c = '�';
					break;
				case 1:
					c='�';
					break;
			}
			break;
		case 'S':
			switch (N)
			{
				case -1:
					c = '�';
					break;
				case 0:
					c = '�';
					break;
				case 1:
					c = '�';
					break;
			}
			break;
		case 'W':
			switch (N)
			{
				case -1:
					c = '�';
					break;
				case 0:
					c = '�';
					break;
				case 1:
					c = '�';
					break;
			}
			break;
		case 'E':
			switch (N)
			{
				case -1:
					c = '�';
					break;
				case 0:
					c = '�';
					break;
				case 1:
					c = '�';
					break;
			}
			break;
	}
	printf("%c\n", c);
}