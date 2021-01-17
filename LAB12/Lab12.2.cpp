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
					c='Â';
					break;
				case 0:
					c = 'Ñ';
					break;
				case 1:
					c='Ç';
					break;
			}
			break;
		case 'S':
			switch (N)
			{
				case -1:
					c = 'Ç';
					break;
				case 0:
					c = 'Þ';
					break;
				case 1:
					c = 'Â';
					break;
			}
			break;
		case 'W':
			switch (N)
			{
				case -1:
					c = 'Ñ';
					break;
				case 0:
					c = 'Ç';
					break;
				case 1:
					c = 'Þ';
					break;
			}
			break;
		case 'E':
			switch (N)
			{
				case -1:
					c = 'Þ';
					break;
				case 0:
					c = 'Â';
					break;
				case 1:
					c = 'Ñ';
					break;
			}
			break;
	}
	printf("%c\n", c);
}