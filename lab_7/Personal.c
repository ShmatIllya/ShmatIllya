#include "Personal.h"
#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
void Personal_main()
{
    printf("----------------------------------------\n");
    printf("��������! ��������� ������ �������� ��������� ������� ������� � ��������� �������� ��������� �\n�����������, ��� ������� ������� ��������� ��� ������ � ��������� ����� �� ����������.\n������ �������: ������ �������� �� ������� ������ ����� �� �������� ��� ��������� � ������. ���� �� ������\n������� �� ��� ������, �� ��������� ������� �� �� ���������.\n��������� �� ��������� ������.\n");
    srand(time(NULL));
    int choise;
    int radix=10;
    int a;
    printf("������ �� ������ ������� ������ �������, � ������ ��������� �� ���������� �������. ����� �� ����.\n1.���� ����\n2.˸���� ����\n");
 lm:   switch (getch())
    {
    case '1':
    {
        choise = 0;
        break;
    }
    case '2':
    {
        choise = 1;
        break;
    }
    default:
    {
        printf("�������� ����\n");
        goto lm;
    }
    }
    int counter = 0;
    for (int j = 0; j < 5; j++)
    {
        
        for (int i = 0; i < 10; i++)
        {
            switch (counter)
            {
            case 0:
            {
                strcpy_s(Array[j][i].profesion,100,"����������");
                break;
            }
            case 1:
            {
                strcpy_s(Array[j][i].profesion,100, "������������");
                break;
            }
            case 2:
            {
                strcpy_s(Array[j][i].profesion,100, "��������");
                break;
            }
            case 3:
            {
                strcpy_s(Array[j][i].profesion,100, "�����������");
                break;
            }
            case 4:
            {
                strcpy_s(Array[j][i].profesion,100, "���������");
                break;
            }
            case 5:
            {
                strcpy_s(Array[j][i].profesion,100, "�������� 1-��� �����");
                break;
            }
            case 6:
            {
                strcpy_s(Array[j][i].profesion,100, "�������� 2-��� �����");
                break;
            }
            case 7:
            {
                strcpy_s(Array[j][i].profesion,100, "�������� 3-��� �����");
                break;
            }
            case 8:
            {
                strcpy_s(Array[j][i].profesion,100, "�������� 4-��� �����");
                break;
            }
            case 9:
            {
                strcpy_s(Array[j][i].profesion,100, "�������� 5-��� �����");
                break;
            }
            }
            if (choise == 0)
            {
                printf("������� ��� ���������\n");
                scanf_s("%s", &Array[j][i].name, 100);
                printf("������� ������� ���������\n");
                scanf_s("%s", &Array[j][i].sername, 100);
                printf("������� �������� ���������\n");
                scanf_s("%s", &Array[j][i].middle_name, 100);
                printf("������� ������� ���������\n");
                scanf_s("%s", &Array[j][i].telephone, 100);
            }
            else
            {
                a = rand() % 100;
                _itoa_s(a, Array[j][i].name,100, radix);
                a = rand() % 100;
                _itoa_s(a, Array[j][i].sername,100, radix);
                a = rand() % 100;
                _itoa_s(a, Array[j][i].middle_name,100, radix);
                a = rand() % 100;
                _itoa_s(a, Array[j][i].telephone,100, radix);
            }
            counter++;

        }
        counter = 0;
    }
}
void Personal_Print(int status)
{
    if (status == 0)
    {
        Personal_main();
    }
    for (int j = 0; j < 5; j++)
    {
        printf("------------------------------\n");
        printf("���� �%d:\n", j+1);
        for (int i = 0; i < 10; i++)
        {
            printf("%s: �������: %s, ���: %s, ��������: %s, �������: %s\n", Array[j][i].profesion, Array[j][i].sername, Array[j][i].name, Array[j][i].middle_name, Array[j][i].telephone);
        }
    }
}
