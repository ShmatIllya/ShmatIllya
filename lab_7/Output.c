#include "Output.h"
void Output_main()
{
	struct Blocks* h;
	int block1 = 0; 
	int block2 = 0;
	int general1_block1 = 0;
	int general1_block2 = 0;
	int general2_block1 = 0;
	int general2_block2 = 0;
	for (h = Q2.first; h != NULL; h = h->next)
	{
		printf("���� �%d:\n", h->block_numer);
		for (int i = 0; i < 5; i++)
		{
			switch (i)
			{
			case 0:
			{
				printf("���:\n");
				break;
			}
			case 1:
			{
				printf("����:\n");
				break;
			}
			case 2:
			{
				printf("��:\n");
				break;
			}
			case 3:
			{
				printf("���:\n");
				break;
			}
			case 4:
			{
				printf("���:\n");
				break;
			}
			}
			printf("������ ��������� ����:\n");
			for (int j = 0; j < 20; j++)
			{
				if (h->floors_array[i][j].status == 1)
				{
					block1++;
					general1_block1++;
					general2_block1++;
				}
				else
				{
					block2++;
					general1_block2++;
					general2_block2++;
					printf("%d, ", h->floors_array[i][j].num);
				}
			}
			printf("\n���������� ��������� ������:%d\n", block2);
			printf("���������� �������:%d\n", block1);
			block1 = 0;
			block2 = 0;
		}
		printf("���������� ��������� ������ � �����:%d\n", general1_block2);
		printf("���������� ������� � �����:%d\n", general1_block1);
		general1_block1 = 0;
		general1_block2 = 0;
		printf("--------------------------------------\n");
	}
	printf("����� ���������� ���������� ������:%d\n", general2_block2);
	printf("����� ���������� �������:%d\n", general2_block1);
}
