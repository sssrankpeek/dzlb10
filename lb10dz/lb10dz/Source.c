#include <stdio.h>
#include <locale.h>
void risovanie(int a)
{
	char s = '*';
	for (int i = 1; i <= a; i++)
	{
		for (int j = a; j >= i; j--)
		{
			printf("  ");
		}
		for (int j = 1; j <= i; j++)
		{
			if (j > 1 && j < i && i > 1 && i < a)
			{
				if (j >= 2)
					printf(" ");
				printf(" ");
			}
			else
			{
				printf(" ");
				printf("%c", s);
			}
		}
		printf("\n");
	}
}
float ploshad(float a)
{
	float s;
	s = (a * a) / 2;
	return s;
}
void name()
{
	printf("\n������������� ����������� � ��� �����������, � ������� ���� ���� ������ (�� ���� 90 ��������)");
}
void main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	printf("������� �����:");
	scanf_s("%d", &a);
	/*risovanie(a);
	printf("\nS=%f", ploshad(a));
	name();*/
	while (1)
	{
		int g;
		printf("\n1 - ���������� �������, 2 - ����������� ������, 3 - ���������� ������, 4 - �����");
		scanf("%d", &g);
		switch (g)
		{
		 case 1:
			printf("\nS=%f", ploshad(a));
			break;
		 case 2:
			name();
			break;
		 case 3:
			risovanie(a);
			break;
		}
		if (g == 4) break;
	}
}