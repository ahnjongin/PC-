#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define _CRT_SECURE_WARNINGS
#pragma warning(disable : 4996)

struct Guest
{
	char name[20];
	char age[10];
	char number[20];
	char id[20];
	char password[20];
};

void Guestadd(struct Guest *table)
{
	int a;

	FILE *fp = NULL;
	fp = fopen("guest.txt", "a");
	if (fp == NULL)
		printf("���� ���� ����\n");
	else
		for (int i = 0; i < 100; i++)
		{
			printf("1 : �մ� �߰� \n 2 : ������\n");
			scanf("%d ", &a);
			if (a == 1) {
				printf("�̸��� �Է��ϼ���");
				scanf("%s ", table[i].name);
				fprintf(fp, "%s ", table[i].name);

				printf("���̸� �Է��ϼ���");
				scanf("%s ", table[i].age);
				fprintf(fp, "%s ", table[i].age);

				printf("��ȭ��ȣ�� �Է��ϼ���");
				scanf("%s \n", table[i].number);
				fprintf(fp, "%s ", table[i].number);

				printf("id�� �Է��ϼ���");
				scanf("%s \n", table[i].id);
				fprintf(fp, "%s ", table[i].id);

				printf("��й�ȣ�� �Է��ϼ���");
				scanf("%s \n", table[i].password);
				fprintf(fp, "%s ", table[i].password);
			}
			else {
				break;
			}
		}

	fclose(fp);
}




void guest_read(struct Guest * table)
{
	printf("�մ� ���\n");
	FILE *fp = NULL;
	fp = fopen("guest.txt", "r");
	if (fp == NULL)
	{
		printf("���� ���� ����");
		return;
	}
	for(int i=0; i<15; i++)
	{
		fscanf(fp,"%s",&table[i].name);
		fscanf(fp, "%s",&table[i].age);
		fscanf(fp, "%s",&table[i].number);
		fscanf(fp, "%s",&table[i].id);
		
	}
	fclose(fp);
}