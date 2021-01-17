#include <stdio.h>
#include <locale.h>
void lol(int day)
{
    if ((day > 10) && (day < 20))
    {
        switch (day)
        {
        case 11:
            printf("одиннадцать ");
            break;
        case 12:
            printf("двенадцать ");
            break;
        case 13:
            printf("тринадцать ");
            break;
        case 14:
            printf("четырнадцать ");
            break;
        case 15:
            printf("пятнадцать ");
            break;
        case 16:
            printf("шестнадцать ");
            break;
        case 17:
            printf("семнадцать ");
            break;
        case 18:
            printf("восемнадцать ");
            break;
        case 19:
            printf("девятнадцать ");
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
            printf("десять ");
            break;
        case 20:
            printf("двадцать ");
            break;
        case 30:
            printf("тридцать ");
            break;
        case 40:
            printf("сорок ");
        }
        switch (e)
        {
        case 1:
            printf("одно ");
            break;
        case 2:
            printf("два ");
            break;
        case 3:
            printf("три ");
            break;
        case 4:
            printf("четыре ");
            break;
        case 5:
            printf("пять ");
            break;
        case 6:
            printf("шесть ");
            break;
        case 7:
            printf("семь ");
            break;
        case 8:
            printf("восемь ");
            break;
        case 9:
            printf("девять ");
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
        printf("учебное задание");
    }
    else if ((N > 20) & (N % 10 > 1) & (N % 10 < 5))
    {
        printf("учебных задания");
    }
    else
    {
        printf("учебных заданий");
    }

}