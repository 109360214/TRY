#include <stdio.h>
#include <stdlib.h>

void Easy_mode(void) {
	int first, second, third;
	int a = 0, b = 0;
	int rando[3];
	srand(time(NULL));
	int round = 0;
	do {
		for (int i = 0; i < 3; i++) {
			rando[i] = rand() % 10;
		}
	} while (rando[0] == rando[1] || rando[0] == rando[2] || rando[1] == rando[2]);

	do {
		a = 0; b = 0;
		round++;
		printf("-----------------------------------------------------------\n");
		printf("\n                   第%d回合\n", round);
		printf("請輸入三組0~9的數字(每輸入間格必須輸入\"空白建\")\n");
		do {
			scanf_s("%d %d %d", &first, &second, &third);
			if (first == second || first == third || second == third)
				printf("\n不可輸入重複數字!!\n");
		} while (first == second || first == third || second == third);

		for (int j = 0; j < 3; j++) {
			if (j == 0) {
				if (first == rando[j]) {
					a++;
				}
				else if (second == rando[j] || third == rando[j]) {
					b++;
				}
			}
			else if (j == 1) {
				if (second == rando[j]) {
					a++;
				}
				else if (first == rando[j] || third == rando[j]) {
					b++;
				}
			}
			else if (j == 2) {
				if (third == rando[j]) {
					a++;
				}
				else if (second == rando[j] || first == rando[j]) {
					b++;
				}
			}
		}
		printf("%dA %dB\n", a, b);
	} while (round != 5 && (a < 3));
	if (a == 3) {
		printf("success!!");
	}
	else {
		printf("超過回合數!");
		printf("答案為:");
		for (int v = 0; v < 3; v++) {
			printf("%d", rando[v]);
		}
	}
}

void Ordinary_mode(void)
{
	int first, second, third, fourth;
	int a = 0, b = 0;
	int rando[4];
	srand(time(NULL));
	int round = 0;
	do {
		for (int i = 0; i < 4; i++) {
			rando[i] = rand() % 10;
		}
	} while (rando[0] == rando[1] || rando[0] == rando[2] || rando[0] == rando[3] || rando[1] == rando[2] || rando[1] == rando[3] || rando[2] == rando[3]);

	do {
		a = 0; b = 0;
		round++;
		printf("-----------------------------------------------------------\n");
		printf("\n                   第%d回合\n", round);
		printf("請輸入四個0~9的數字(每輸入間格必須輸入\"空白建\")\n");
		do {
			scanf_s("%d %d %d %d", &first, &second, &third, &fourth);
			if (first == second || first == third || first == fourth || second == third || second == fourth || third == fourth)
				printf("\n不可輸入重複數字!!\n");
		} while (first == second || first == third || first == fourth || second == third || second == fourth || third == fourth);

		for (int j = 0; j < 4; j++) {
			if (j == 0) {
				if (first == rando[j]) {
					a++;
				}
				else if (second == rando[j] || third == rando[j] || fourth == rando[j]) {
					b++;
				}
			}
			else if (j == 1) {
				if (second == rando[j]) {
					a++;
				}
				else if (first == rando[j] || third == rando[j] || fourth == rando[j]) {
					b++;
				}
			}
			else if (j == 2) {
				if (third == rando[j]) {
					a++;
				}
				else if (second == rando[j] || first == rando[j] || fourth == rando[j]) {
					b++;
				}
			}
			else if (j == 3) {
				if (fourth == rando[j]) {
					a++;
				}
				else if (second == rando[j] || first == rando[j] || third == rando[j]) {
					b++;
				}
			}
		}
		printf("%dA %dB\n", a, b);
	} while (round != 6 && (a < 4));
	if (a == 4) {
		printf("success!!");
	}
	else {
		printf("超過回合數!");
		printf("答案為:");
		for (int v = 0; v < 4; v++) {
			printf("%d", rando[v]);
		}
	}
}