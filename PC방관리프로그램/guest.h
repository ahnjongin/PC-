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
		printf("파일 열기 실패\n");
	else
		for (int i = 0; i < 100; i++)
		{
			printf("1 : 손님 추가 \n 2 : 나가기\n");
			scanf("%d ", &a);
			if (a == 1) {
				printf("이름을 입력하세요");
				scanf("%s ", table[i].name);
				fprintf(fp, "%s ", table[i].name);

				printf("나이를 입력하세요");
				scanf("%s ", table[i].age);
				fprintf(fp, "%s ", table[i].age);

				printf("전화번호를 입력하세요");
				scanf("%s \n", table[i].number);
				fprintf(fp, "%s ", table[i].number);

				printf("id를 입력하세요");
				scanf("%s \n", table[i].id);
				fprintf(fp, "%s ", table[i].id);

				printf("비밀번호를 입력하세요");
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
	printf("손님 목록\n");
	FILE *fp = NULL;
	fp = fopen("guest.txt", "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패");
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