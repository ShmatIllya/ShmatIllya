#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
//=================== ������� 6 =========================
float count(float x, float e, double result1);
double recursia(int x);
int main()
{
    setlocale(LC_ALL, "rus");
    float x,e;
ln:    printf("������� ����� x\n");
    scanf("%f", &x);
    if (x<-1||x>1)
    {
        printf("�������� ����\n");
        goto ln;
    }
    printf("������� �����������\n");
    scanf("%f", &e);
    double result1, result2=0;
    result1=sin(x);
    result2=count(x,e,result1);
    printf("��������� �����:\n%.20f\n��������� ������:\n%.20f\n�������:\n%.20f\n", result1, result2, result1-result2);
    return 0;
}
float count(float x, float e, double result1)
{
   int array[100], i=0;
   double result=0;
   for(int n=1; n<=100; n++)
   {
       int part=2*n-1;
       result+=pow(-1,n-1)*(pow(x,part)/recursia(part));
       if (fabs(result1-result)<e)
       {
           array[i]=n;
           i++;
       }
   }
   printf("�������� n:\n%d\n", array[1]);
   return result;
}
double recursia(int x)
{
    if (x==1)
    {
        return 1;
    }
    return recursia(x-1)*x;
}
