#include "guest.h"
#include "control.h"
#define _CRT_SECURE_WARNINGS

int main(void)
{
	int profit = 0;
	int b;
	int c=0;
	int i = 0;
	init();
	while (1) {
		printf("*****�ǽù� ���� ���α׷�*****\n");
		printf("1. ���� �ڸ��� �ð� ��Ȳ\n");
		printf("2. �ð� �ֹ�\n");
		printf("3. �մ� ���\n");
		printf("4. �մ� ��� �߰�\n");
		printf("5. ������ ����\n");
		printf("6. ���� �ֹ��ϱ�\n");
		printf("7. ����\n");
		scanf("%d", &i);

		if (i == 1)
		{
			place();
		}
		else if (i == 2)
		{
			int a;
			
			printf("�ð��� �ֹ��� �� �ֽ��ϴ�\n");
			printf("�ڸ���ȣ�� �ð��� �Է��ϼ���");
			scanf("%d %d", &a, &b);
			time_add(a, b);
			
		}
		else if (i == 3)
		{
			guest_list();
		}
		else if (i == 4)
		{
			fourth_fuc();
		}
		else if (i == 5)
		{
			
			profit += b;
			profit += c;
			printf("������ ������ %d �� �Դϴ�\n", profit * 1000);
			b = 0;
			c = 0;

		}
		else if (i == 6)
		{
			int a;
			printf("������ �ֹ��ϼ���\n");
			printf("�ڸ���ȣ�� ���� ��ȣ�� ��������\n");
			printf("1. ��� = 1000��\n");
			printf("2. ���� = 1000��\n");
			printf("3. ���ö� = 5000��\n");
			scanf("%d %d", &a, &c);
			if (c == 1 || c == 2)
			{
				c = 1;
			}
			else if (c == 3)
			{
				c = 5;
			}
		}


		else if (i == 7)
		{
			break;
		}
		
	}
}