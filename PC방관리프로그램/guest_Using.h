#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "guest.h"
#define _CRT_SECURE_WARNINGS


struct Guest_using {
	clock_t start;
	int left_time;
};


void Guest_using_init(struct Guest_using * table)
{
	for (int i = 0; i < 15; i++)
	{
		table[i].left_time = 0;
	}
}