#include <stdio.h>
#include <locale.h>
void lol(int day)
{
    if ((day > 10) && (day < 20))
    {
        switch (day)
        {
        case 11:
            printf("����������� ");
            break;
        case 12:
            printf("���������� ");
            break;
        case 13:
            printf("���������� ");
            break;
        case 14:
            printf("������������ ");
            break;
        case 15:
            printf("���������� ");
            break;
        case 16:
            printf("����������� ");
            break;
        case 17:
            printf("���������� ");
            break;
        case 18:
            printf("������������ ");
            break;
        case 19:
            printf("������������ ");
            break;
        }
    }
    else
    {
        int d = day / 10 * 10;
        int e = day % 10;
        switch (d)
        {
        case 10:
            printf("������ ");
            break;
        case 20:
            printf("�������� ");
            break;
        case 30:
            printf("�������� ");
            break;
        case 40:
            printf("����� ");
        }
        switch (e)
        {
        case 1:
            printf("���� ");
            break;
        case 2:
            printf("��� ");
            break;
        case 3:
            printf("��� ");
            break;
        case 4:
            printf("������ ");
            break;
        case 5:
            printf("���� ");
            break;
        case 6:
            printf("����� ");
            break;
        case 7:
            printf("���� ");
            break;
        case 8:
            printf("������ ");
            break;
        case 9:
            printf("������ ");
            break;
        }
    }
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int N;
	scanf_s("%d", &N);
    lol(N);
    if ((N > 20) & (N % 10 == 1))
    {
        printf("������� �������");
    }
    else if ((N > 20) & (N % 10 > 1) & (N % 10 < 5))
    {
        printf("������� �������");
    }
    else
    {
        printf("������� �������");
    }

}