#include<stdio.h>
#include<stdlib.h>


void Difficult_mode(void)
{

	int first, second, third, fourth, fifth;
	int a = 0, b = 0;
	int rando[5];
	int round = 0;
	srand(time(NULL));

	do {
		for (int i = 0; i < 5; i++) {
			rando[i] = rand() % 10;
		}
	} while (rando[0] == rando[1] || rando[0] == rando[2] || rando[0] == rando[3] || rando[0] == rando[4] || rando[1] == rando[2] || rando[1] == rando[3] || rando[1] == rando[4] || rando[2] == rando[3] || rando[2] == rando[4] || rando[3] == rando[4]);

	do {
		a = 0; b = 0;
		round++;
		printf("-----------------------------------------------------------\n");
		printf("\n                   ��%d�^�X\n", round);
		printf("�п�J����0~9���Ʀr(�C��J���楲����J\"�ťի�\")\n");
		do {
			scanf_s("%d %d %d %d %d", &first, &second, &third, &fourth, &fifth);
			if (first == second || first == third || first == fourth || first == fifth || second == third || second == fourth || second == fifth || third == fourth || third == fifth || fourth == fifth)
				printf("\n���i��J���ƼƦr!!\n");
		} while (first == second || first == third || first == fourth || first == fifth || second == third || second == fourth || second == fifth || third == fourth || third == fifth || fourth == fifth);

		for (int j = 0; j < 5; j++) {
			if (j == 0) {
				if (first == rando[j]) {
					a++;
				}
				else if (second == rando[j] || third == rando[j] || fourth == rando[j] || fifth == rando[j]) {
					b++;
				}
			}
			else if (j == 1) {
				if (second == rando[j]) {
					a++;
				}
				else if (first == rando[j] || third == rando[j] || fourth == rando[j] || fifth == rando[j]) {
					b++;
				}
			}
			else if (j == 2) {
				if (third == rando[j]) {
					a++;
				}
				else if (second == rando[j] || first == rando[j] || fourth == rando[j] || fifth == rando[j]) {
					b++;
				}
			}
			else if (j == 3) {
				if (fourth == rando[j]) {
					a++;
				}
				else if (second == rando[j] || first == rando[j] || third == rando[j] || fifth == rando[j]) {
					b++;
				}
			}
			else if (j == 4) {
				if (fifth == rando[j]) {
					a++;
				}
				else if (first == rando[j] || third == rando[j] || fourth == rando[j] || second == rando[j]) {
					b++;
				}
			}
		}
		printf("%dA %dB\n", a, b);
	} while (round != 7 && (a < 5));
	if (a == 5) {
		printf("success!!");
	}
	else {
		printf("�W�L�^�X��!\n");
		printf("���׬�:");
		for (int v = 0; v < 5; v++) {
			printf("%d", rando[v]);
		}
	}
}