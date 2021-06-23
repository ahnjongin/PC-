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
		printf("*****피시방 관리 프로그램*****\n");
		printf("1. 현재 자리와 시간 상황\n");
		printf("2. 시간 주문\n");
		printf("3. 손님 목록\n");
		printf("4. 손님 목록 추가\n");
		printf("5. 오늘의 매출\n");
		printf("6. 음식 주문하기\n");
		printf("7. 종료\n");
		scanf("%d", &i);

		if (i == 1)
		{
			place();
		}
		else if (i == 2)
		{
			int a;
			
			printf("시간을 주문할 수 있습니다\n");
			printf("자리번호와 시간을 입력하세요");
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
			printf("오늘의 매출은 %d 원 입니다\n", profit * 1000);
			b = 0;
			c = 0;

		}
		else if (i == 6)
		{
			int a;
			printf("음식을 주문하세요\n");
			printf("자리번호와 음식 번호를 누르세요\n");
			printf("1. 라면 = 1000원\n");
			printf("2. 과자 = 1000원\n");
			printf("3. 도시락 = 5000원\n");
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