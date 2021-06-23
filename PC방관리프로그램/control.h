#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "guest.h"
#include "guest_Using.h"
#define MAX_SEAT 15
#define SIZE 20

struct Guest_using list[MAX_SEAT];
static int using_num = 0;
struct Guest table[SIZE];
#define _CRT_SECURE_WARNINGS


void init() {
	Guest_using_init(list);
	guest_read(table);
}

void place() {
	int i = 0;
	clock_t end = clock();
	for (i = 0; i < 15; i++) {
		clock_t elapsed = end - list[i].start;
		double left_sec = (double)(list[i].left_time * 60) - (double)(elapsed / CLOCKS_PER_SEC);
		int left_hour = left_sec / 3600;
		int left_min = (int)left_sec % 3600;
		if (left_min < 0)
		{
			left_min = 0;
		}
		printf("%d번 좌석 %d 시간 %d 분 \n", i + 1, left_hour, left_min / 60);
	}
}

void time_add(int a, int b) {
	if (list[a - 1].left_time == 0) {
		list[a - 1].start = clock();
	}
	list[a - 1].left_time += (b * 60);
}

void guest_list() {
	int i = 0;
	for (int i = 0; i < sizeof(table) / sizeof(struct Guest); i++) {
		printf("%s\n", table[i].name);
		printf("%s\n", table[i].age);
		printf("%s\n", table[i].number);
		printf("%s\n", table[i].id);
	}
}

void fourth_fuc() {
	Guestadd(table);
}






