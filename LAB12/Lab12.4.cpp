#include <stdio.h>
#include <locale.h>
void lol(int day)
{
    int ch = day % 100;
    int e = day % 10;
    int s = day / 100;
    int d = ch/10;
    switch (s)
    {
    case 1:
        printf("��� ");
        break;
    case 2:
        printf("������ ");
        break;
    case 3:
        printf("������ ");
        break;
    case 4:
        printf("��������� ");
        break;
    case 5:
        printf("������� ");
        break;
    case 6:
        printf("�������� ");
        break;
    case 7:
        printf("������� ");
        break;
    case 8:
        printf("��������� ");
        break;
    case 9:
        printf("��������� ");
        break;
    }
    if ((ch > 9) && (ch < 20))
    {
        switch (ch)
        {
        case 10:
            printf("������");
            break;
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
        switch (d)
        {
        case 1:
            printf("���� ");
            break;
        case 2:
            printf("�������� ");
            break;
        case 3:
            printf("�������� ");
            break;
        case 4:
            printf("����� ");
            break;
        case 5:
            printf("��������� ");
            break;
        case 6:
            printf("���������� ");
            break;
        case 7:
            printf("��������� ");
            break;
        case 8:
            printf("����������� ");
            break;
        case 9:
            printf("��������� ");
            break;
        }
        switch (e)
        {
        case 1:
            printf("����");
            break;
        case 2:
            printf("���");
            break;
        case 3:
            printf("���");
            break;
        case 4:
            printf("������");
            break;
        case 5:
            printf("����");
            break;
        case 6:
            printf("�����");
            break;
        case 7:
            printf("����");
            break;
        case 8:
            printf("������");
            break;
        case 9:
            printf("������");
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
}
