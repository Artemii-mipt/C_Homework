#include<stdio.h> 
#include<math.h> 

#define limit_Nmax 1e7 //������������ ���������� �����
#define limit_a 1e6 //����������� ������ �����
#define min_a 100 //��������� ������

double circle(double, double); //������ ������� y � ����������� �� ���������� � � ������� �����.

int main()
{

    double x, y, Pi;
    long long int a = min_a//������� ���������
        i = 0;//������� 
    double Ncirc = 0;//���������� �����, �������� � ���� 
    double Nmax = a; //����� ���������� �����
    while (a < limit_a)  //�������  �������� �������
    {
        Nmax = a;
        while (Nmax <= limit_Nmax) // ������� �������� ���������� �����
        {
            Ncirc = 0; i = 0; //����������
            while (i < Nmax)
            {
                x = (random() % (a * 1000)) / 1000;  //��������� � � 3 ������� ����� �������
                y = (random() % (a * 1000)) / 1000;  //��������� Y � 3 ������� ����� �������
                if (y * y <= circle(x, (a / 2)))  //������� �������������� ����� � �����
                {
                    Ncirc++;
                }
                i++;
            }

            Pi = (Ncirc / Nmax) * 4;
            Nmax *= 2;

            printf("\n%lld,%.0f,%f", a, Nmax, Pi);
        }
        a *= 2;
    }

}

double circle(double x, double radius)
{
    double y = radius * radius - x * x;
    return y;
}