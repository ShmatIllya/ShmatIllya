#include "Students.h"
#include <malloc.h>
#include <stdio.h>
#include <locale.h>
#include <conio.h>
void Students_Creation()
{
    Blocks_main();
    Q1.first1 = malloc(1 * sizeof(struct Student));
    Q1.first1->next = NULL;
    Q1.last1 = Q1.first1;
    Q1.last1->violations = rand() % 4 + 0;
    printf("������� ��� ��������");
    scanf_s("%s", &Q1.last1->name,100);
    printf("������� ������� ��������");
    scanf_s("%s", &Q1.last1->sername,100);
    printf("������� �������� ��������");
    scanf_s("%s", &Q1.last1->middle_name,100);
    int choice;
lm: printf("������� ��������� ��������:\n1.���\n2.�����\n3.��\n4.���\n5.���\n");
    scanf_s("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        Q1.last1->faculty = FCP;
        break;
    }
    case 2:
    {
        Q1.last1->faculty = FCSAS;
        break;
    }
    case 3:
    {
        Q1.last1->faculty = FI;
        break;
    }
    case 4:
    {
        Q1.last1->faculty = IIT;
        break;
    }
    case 5:
    {
        Q1.last1->faculty = FRIE;
        break;
    }
    default:
    {
        printf("�������� ����\n");
        goto lm;
        break;
    }
    }
    printf("������� ���� �������� �������� ��������");
    scanf_s("%s", &Q1.last1->course,100);
    printf("������� ������ ��������");
    scanf_s("%d", &Q1.last1->group);
    Blocks_Students_Add();
}
void Students_Add()
{
    Q1.last1->next = malloc(1 * sizeof(struct Student));
    Q1.last1 = Q1.last1->next;
    printf("������� ��� ��������");
    Q1.last1->next = NULL;
    Q1.last1->violations = rand() % 4 + 0;
    scanf_s("%s", &Q1.last1->name, 100);
    printf("������� ������� ��������");
    scanf_s("%s", &Q1.last1->sername, 100);
    printf("������� �������� ��������");
    scanf_s("%s", &Q1.last1->middle_name, 100);
    int choice;
   lm: printf("������� ��������� ��������:\n1.���\n2.�����\n3.��\n4.���\n5.���\n");
    scanf_s("%d", &choice);
    switch (choice)
    {
    case 1:
    {
        Q1.last1->faculty = FCP;
        break;
    }
    case 2:
    {
        Q1.last1->faculty = FCSAS;
        break;
    }
    case 3:
    {
        Q1.last1->faculty = FI;
        break;
    }
    case 4:
    {
        Q1.last1->faculty = IIT;
        break;
    }
    case 5:
    {
        Q1.last1->faculty = FRIE;
        break;
    }
    default:
    {
        printf("�������� ����\n");
        goto lm;
        break;
    }
    }
    printf("������� ���� �������� �������� ��������");
    scanf_s("%s", &Q1.last1->course, 100);
    printf("������� ������ ��������");
    scanf_s("%d", &Q1.last1->group);
    Blocks_Students_Add();
}
void Students_Print()
{
    struct Blocks* h;
    for (h = Q2.first; h != NULL; h = h->next)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                if (h->floors_array[i][j].status == 1)
                {
                    printf("\n���: %s\n�������: %s\n��������: %s\n����: %s\n������: %d\n���������� ���������: %d\n����� �������: %d\n", h->floors_array[i][j].st->name, h->floors_array[i][j].st->sername, h->floors_array[i][j].st->middle_name, h->floors_array[i][j].st->course, h->floors_array[i][j].st->group, h->floors_array[i][j].st->violations, h->floors_array[i][j].num);
                    printf("���������: ");
                    switch (h->floors_array[i][j].st->faculty)
                    {
                    case FCP:
                    {
                        printf("���\n");
                        break;
                    }
                    case FCSAS:
                    {
                        printf("����\n");
                        break;
                    }
                    case FI:
                    {
                        printf("��\n");
                        break;
                    }
                    case IIT:
                    {
                        printf("���\n");
                        break;
                    }
                    case FRIE:
                    {
                        printf("���\n");
                        break;
                    }
                    }
                    printf("\n");
                    if (h->floors_array[i][j].st->violations >= 3)
                    {
                        printf("�����������: ������� �������� ���������� ��������\n");
                    }
                    printf("-----------------------------------------------------------------\n");
                }               
            }
        }
    }
    printf("\n");
}
void Blocks_Students_Add()
{
    struct Student* h;
    h = malloc(sizeof(struct Student));
    h = Q1.last1;
    struct Blocks* h2;
    h2 = Q2.first;
        switch (h->faculty)
        {
        case FCP:
        {
            for (h2 = Q2.first; h2 != NULL; h2 = h2->next)
            {
                for (int i = 0; i < 20; i++)
                {
                    if (h2->floors_array[0][i].status == 0)
                    {
                        h2->floors_array[0][i].st = h;                    
                        h2->floors_array[0][i].status = 1;
                        goto ln1;
                    }
                }
            }
            printf("��������� ������ ���");
     ln1:       break;
        }
        case FCSAS:
        {
            for (h2 = Q2.first; h2 != NULL; h2 = h2->next)
            {
                for (int i = 0; i < 20; i++)
                {
                    if (h2->floors_array[1][i].status == 0)
                    {
                        h2->floors_array[1][i].st = h;                       
                        h2->floors_array[1][i].status = 1;
                        goto ln2;
                    }
                }
            }
            printf("��������� ������ ���");
        ln2:       break;
        }
        case FI:
        {
            for (h2 = Q2.first; h2 != NULL; h2 = h2->next)
            {
                for (int i = 0; i < 20; i++)
                {
                    if (h2->floors_array[2][i].status == 0)
                    {
                        h2->floors_array[2][i].st = h;                       
                        h2->floors_array[2][i].status = 1;
                        goto ln3;
                    }
                }
            }
            printf("��������� ������ ���");
        ln3:       break;
        }
        case IIT:
        {
            for (h2 = Q2.first; h2 != NULL; h2 = h2->next)
            {
                for (int i = 0; i < 20; i++)
                {
                    if (h2->floors_array[3][i].status == 0)
                    {
                        h2->floors_array[3][i].st = h;                     
                        h2->floors_array[3][i].status = 1;
                        goto ln4;
                    }
                }
            }
            printf("��������� ������ ���");
        ln4:       break;
        }
        case FRIE:
        {
            for (h2 = Q2.first; h2 != NULL; h2 = h2->next)
            {
                for (int i = 0; i < 20; i++)
                {
                    if (h2->floors_array[4][i].status == 0)
                    {
                        h2->floors_array[4][i].st = h;                      
                        h2->floors_array[4][i].status = 1;
                        goto ln5;
                    }
                }
            }
            printf("��������� ������ ���");
        ln5:       break;
        }
        }
}
void Del_All(struct Student* h)
{
    if (h != NULL)
    {
        Del_All(h->next);
        free(h);
    }
}
void Students_main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int i = 0;
    int check = 0;
    int st = 0;
    while (1)
    {
        puts("1.�������� ������� � ������\n2.������� ������ �� �����\n3.�������� ��������\n4.�����\n5.������� ��������� ����������\n6.������� ������ ��������\n0.�����");
        switch (getch())
        {
        case '1':
        {
            if (i == 0)
            {
                Students_Creation();
                i = 1;
            }
            else
            {
                Students_Add();
            }
            break;
        }
        case '2':
        {
            
            Students_Print();
            break;
        }
        case '3':
        {
            int number;
            int block_number;
            printf("������� ����� �������\n");
            scanf_s("%d", &number);
            if (number > 520)
            {
                printf("�������� ����\n");
                break;
            }
            printf("������� ����� �����\n");
            scanf_s("%d", &block_number);
            if (block_number > 5)
            {
                printf("�������� ����\n");
                break;
            }
            Delete_main(number,block_number);
            break;
        }
        case '4':
        {
            printf("������� ��� ������\n1.����� �� �������\n2.����� �� ������ �������\n");
            switch (getch())
            {
            case '1':
            {
                printf("������� �������\n");
                char temp_sername[100];
                scanf_s("%s", &temp_sername,100);
                Search_main1(&temp_sername);
                break;
            }
            case '2':
            {
                printf("������� ����� �������\n");
                int temp_number;
                scanf_s("%d", &temp_number);
                Search_main2(temp_number);
                break;
            }
            }
            break;
        }
        case '5':
        {
            Output_main();
            break;
        }
        case '6':
        {
            Personal_Print(st);
            st++;
            break;
        }
        case '0':
        {
            Del_All(Q1.first1);
            Del_All_2(Q2.first);
            return;
        }
        default:
        {
            printf("�������� ����\n");
        }
        }
    }   
}

