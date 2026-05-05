#include<stdio.h>
#include"TTT.h"

int main() {
	int choice;

	while (1) {


		menu();
		printf("Select: ");
		scanf_s(" %d", &choice);

		switch (choice) {
		case 1:
			printf("\n=== 2 player mode ===\n");
			playervsplayer();
			break;
		case 2:
			printf("vs Computer");
			printf("\nThis mode is not available yet. Please choose again.\n\n");
			continue;
		default:
			printf("\nInvaild choice. Please try again.\n\n");
			continue;
		}
		break;
	}
	return 0;
}