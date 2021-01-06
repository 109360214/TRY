#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include"EAO.h"
#include"Difficult.h"


int mode;

//選擇函式
void choose_mode(void);
void AB_decide(void);

//判斷函式
void Easy_mode(void);
void Ordinary_mode(void);
void Difficult_mode(void);

int main(void)
{
	printf("歡迎進入AB數字猜猜樂!\n");
	choose_mode();
	AB_decide();

	system("pause");
	return 0;
}

void choose_mode(void)
{
	do {
		printf("模式選擇:(按1簡單模式  按2普通模式  按3困難模式)\n");
		scanf_s("%d", &mode);
		if (mode == 1) {
			printf("-----------------------------------------------------------\n");
			printf("\n\n\n%28s\n", "簡單模式");
			printf("\n有3個數字、5回合，若您猜到對應數字號碼則顯示A，錯誤則顯示B\n");
		}
		else if (mode == 2)
		{
			printf("-----------------------------------------------------------\n");
			printf("\n\n\n%28s\n", "普通模式");
			printf("\n有4個數字、6回合，若您猜到對應數字號碼則顯示A，錯誤則顯示B\n");
		}
		else if (mode == 3)
		{
			printf("-----------------------------------------------------------\n");
			printf("\n\n\n%28s\n", "困難模式");
			printf("\n有5個數字、7回合，若您猜到對應位置、數字號碼則顯示A，錯誤則顯示B\n");
		}
		else
		{
			printf("\n輸入錯誤，請重新輸入!\n\n");
		}
	} while (mode != 1 && mode != 2 && mode != 3);

}

void AB_decide(void){
	switch (mode)
	{
	case 1:
		Easy_mode();
		break;

	case 2:
		Ordinary_mode();
		break;

	case 3:
		Difficult_mode();
		break;
		}
	}



