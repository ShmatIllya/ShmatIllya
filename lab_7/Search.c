#include "Search.h"
void Search_main1(char* sername)
{
	struct Blocks* h;
	for (h = Q2.first; h != NULL; h = h->next)
	{
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 20; j++)
			{
				if (strcmp(h->floors_array[i][j].st->sername, sername) == 0)
				{
					printf("�����!!!\n������ � ��������� ��������:\n���:%s\n�������:%s\n��������:%s\n����:%s\n������:%d\n���������� ���������:%d\n����� �������:%d\n", h->floors_array[i][j].st->name, h->floors_array[i][j].st->sername, h->floors_array[i][j].st->middle_name, h->floors_array[i][j].st->course, h->floors_array[i][j].st->group, h->floors_array[i][j].st->violations, h->floors_array[i][j].num);
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
					return;
				}
			}
		}
	}
	printf("������ �� �������\n\n");
}
void Search_main2(int number)
{
	struct Blocks* h;
	for (h = Q2.first; h != NULL; h = h->next)
	{
		switch (number / 100)
		{
		case 1:
		{
			for (int j = 0; j < 20; j++)
			{
				if (h->floors_array[0][j].num == number)
				{
					printf("�����!!!\n������ � ��������� ��������:\n���:%s\n�������:%s\n��������:%s\n����:%s\n������:%d\n���������� ���������:%d\n����� �������:%d\n", h->floors_array[0][j].st->name, h->floors_array[0][j].st->sername, h->floors_array[0][j].st->middle_name, h->floors_array[0][j].st->course, h->floors_array[0][j].st->group, h->floors_array[0][j].st->violations, h->floors_array[0][j].num);
					printf("���������: ");
					switch (h->floors_array[0][j].st->faculty)
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
					return;
				}
			}
		}
		case 2:
		{
			for (int j = 0; j < 20; j++)
			{
				if (h->floors_array[1][j].num == number)
				{
					printf("�����!!!\n������ � ��������� ��������:\n���:%s\n�������:%s\n��������:%s\n����:%s\n������:%d\n���������� ���������:%d\n����� �������:%d\n", h->floors_array[1][j].st->name, h->floors_array[1][j].st->sername, h->floors_array[1][j].st->middle_name, h->floors_array[1][j].st->course, h->floors_array[1][j].st->group, h->floors_array[1][j].st->violations, h->floors_array[1][j].num);
					printf("���������: ");
					switch (h->floors_array[1][j].st->faculty)
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
					return;
				}
			}
		}
		case 3:
		{
			for (int j = 0; j < 20; j++)
			{
				if (h->floors_array[2][j].num == number)
				{
					printf("�����!!!\n������ � ��������� ��������:\n���:%s\n�������:%s\n��������:%s\n����:%s\n������:%d\n���������� ���������:%d\n����� �������:%d\n", h->floors_array[2][j].st->name, h->floors_array[2][j].st->sername, h->floors_array[2][j].st->middle_name, h->floors_array[2][j].st->course, h->floors_array[2][j].st->group, h->floors_array[2][j].st->violations, h->floors_array[2][j].num);
					printf("���������: ");
					switch (h->floors_array[2][j].st->faculty)
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
					return;
				}
			}
		}
		case 4:
		{
			for (int j = 0; j < 20; j++)
			{
				if (h->floors_array[3][j].num == number)
				{
					printf("�����!!!\n������ � ��������� ��������:\n���:%s\n�������:%s\n��������:%s\n����:%s\n������:%d\n���������� ���������:%d\n����� �������:%d\n", h->floors_array[3][j].st->name, h->floors_array[3][j].st->sername, h->floors_array[3][j].st->middle_name, h->floors_array[3][j].st->course, h->floors_array[3][j].st->group, h->floors_array[3][j].st->violations, h->floors_array[3][j].num);
					printf("���������: ");
					switch (h->floors_array[3][j].st->faculty)
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
					return;
				}
			}
		}
		case 5:
		{
			for (int j = 0; j < 20; j++)
			{
				if (h->floors_array[4][j].num == number)
				{
					printf("�����!!!\n������ � ��������� ��������:\n���:%s\n�������:%s\n��������:%s\n����:%s\n������:%d\n���������� ���������:%d\n����� �������:%d\n", h->floors_array[4][j].st->name, h->floors_array[4][j].st->sername, h->floors_array[4][j].st->middle_name, h->floors_array[4][j].st->course, h->floors_array[4][j].st->group, h->floors_array[4][j].st->violations, h->floors_array[4][j].num);
					printf("���������: ");
					switch (h->floors_array[4][j].st->faculty)
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
					return;
				}
			}
		}
		default:
		{
			printf("����� ������� �� ����������\n");
			return;
		}
		}
	}
	printf("������ �� �������\n\n");
}