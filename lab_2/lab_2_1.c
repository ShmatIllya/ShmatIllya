#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//======================= ������� 25 =======================
float getnumber();
void coutnumber(float x, float y);
void reversenumber(float x, float y);
void shortnumber(float x, float y);
void titers();
void exit1();
int main()
{
    setlocale(LC_ALL, "rus");
   static int z, d;
   static float x, y;
   printf("Welcome!\n");
ln:    printf("�������� ��������(��� ������ ������� ����� ������)\n1.������ ��������� � ����������� ������������� �����\n2.������� ����� � ��� ��������\n3.������� �������� ��������� �����\n4.������� �������� ����� � ����������� �������\n5.������� ���������� � ������ ��������� � ������\n6.����� �� ���������\n");
    scanf("%d", &z);
    switch (z)
    {
        case 1:
          {
         x=getnumber();
         y=getnumber();
         if (y==0)
         {
             printf("�� ���� ������ ������\n");
             goto ln;
         }
         d=1;
          break;
          }
        case 2:
         {
         if(d==1) coutnumber(x,y);
         else printf("������� ��������� � �����������\n");
         break;
         }
         case 3:
         {
         if(d==1) reversenumber(x,y);
         else printf("������� ��������� � �����������");
         break;
         }
         case 4:
         {
         if(d==1) shortnumber(x,y);
         else printf("������� ��������� � �����������");
         break;
         }
         case 5:
         {
         titers();
         break;
         }
         case 6:
         {
         exit1();
         goto lm;
         break;
         }
         default:
         {
         printf("�������� ����\n");
         }
    }
    goto ln;
lm:    return 0;
}
float getnumber()
{
    int x;
    scanf("%d", &x);
    return x;
}
void coutnumber(float x, float y)
{
    float r=x/y;
    printf("����� ��������� � �����������:%d/%d\n���������� �����:%f\n������� �����:%E\n\n", (int)x, (int)y, r, r);
}
void reversenumber(float x, float y)
{
    float r=y/x;
    printf("����� ��������� � �����������:%d/%d\n���������� �����:%f\n������� �����:%E\n\n", (int)y, (int)x, r, r);
}
void shortnumber(float x, float y)
{
    for (int i=1; i<=x&&i<=y; i++)
    {
        if ((int)x%i==0&&(int)y%i==0)
        {
            x=x/i;
            y=y/i;
        }
    }
    float r=x/y;
    printf("����� ��������� � �����������:%d/%d\n���������� �����:%f\n������� �����:%E\n\n", (int)x, (int)y, r, r);
}
void titers()
{
    printf("������ ��������� 1.0\n����� ��������� ���� ����\n");
}
void exit1()
{
    printf("����� �� ���������...\n");
}
