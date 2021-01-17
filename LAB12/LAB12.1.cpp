#include <stdio.h>
#include <locale.h>
void lol(int day)
{
    if ((day > 10) && (day < 20))
    {
        switch (day)
        {
        case 11:
            printf("одиннадцатое ");
            break;
        case 12:
            printf("двенадцатое ");
            break;
        case 13:
            printf("тринадцатое ");
            break;
        case 14:
            printf("четырнадцатое ");
            break;
        case 15:
            printf("пятнадцатое ");
            break;
        case 16:
            printf("шестнадцатое ");
            break;
        case 17:
            printf("семнадцатое ");
            break;
        case 18:
            printf("восемнадцатое ");
            break;
        case 19:
            printf("девятнадцатое ");
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
            printf("десятое");
            break;
        case 20:
            printf("двадцать ");
            break;
        case 30:
            printf("тридцать ");
            break;
        }
        switch (e)
        {
        case 1:
            printf("первое");
            break;
        case 2:
            printf("второе");
            break;
        case 3:
            printf("третье");
            break;
        case 4:
            printf("четвёртое");
            break;
        case 5:
            printf("пятое");
            break;
        case 6:
            printf("шестое");
            break;
        case 7:
            printf("седьмое");
            break;
        case 8:
            printf("восьмое");
            break;
        case 9:
            printf("девятое");
            break;
        }
    }
}
int main()
{  
    setlocale(LC_ALL, "RUS");
    int a, b;
    scanf_s("%d%d", &a, &b);
    lol(a);
    switch (b)
    {
        case 1:
            printf(" января");
            break;
        case 2:
            printf(" февраля");
            break;
        case 3:
            printf(" марта");
            break;
        case 4:
            printf(" апреля");
            break;
        case 5:
            printf(" мая");
            break;
        case 6:
            printf(" июня");
            break;
        case 7:
            printf(" июля");
            break;
        case 8:
            printf(" августа");
            break;
        case 9:
            printf(" сентября");
            break;
        case 10:
            printf(" октября");
            break;
        case 11:
            printf(" ноября");
            break;
        case 12:
            printf(" декабря");
            break;
    }
}
