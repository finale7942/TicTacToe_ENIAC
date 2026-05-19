#include<stdio.h>
#include "TTT.h"

void menu() {
	printf("+=========Tic Tac Toe========+\n");
	printf("|        1. 2 player         |\n");
	printf("|        2. vs Computer      |\n");
	printf("+============================+\n");

}

void initboard(char board[3][3]) {
	char num = '0';
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = num;
			num++;
		}
	}
}
void Board(char board[3][3]) {
	printf("\n");
	boardlength(board[0][0], board[0][1], board[0][2]);
	boardwide();
	boardlength(board[1][0], board[1][1], board[1][2]);
	boardwide();
	boardlength(board[2][0], board[2][1], board[2][2]);
	printf("\n");
}
void guidline() {
	printf("\n[Guide] 0 ~ 8 사이의 숫자를 입력하세요.\n");
	printf("        판에 표시된 번호가 그 위치를 나타냅니다.\n");
}

void inputchar(char board[3][3], char player) {    //  중복막기 함수 따로 만들기
		int pos;
		int row, col;
		while (1) {
			
			printf("\nPlayer %c, enter position 0 ~ 8: ", player);
			scanf_s(" %d", &pos);

			row = pos / 3;
			col = pos % 3;
			if (board[row][col] == 'O' || board[row][col] == 'X') {
				printf("\nposition %d is already taken. Try again.\n", pos);
				continue;
			}
			else {
				board[row][col] = player;
				break;
			}
		}
		return;
}

int checkrow(char board[3][3], char player) {
	
	for (int i = 0; i < 3; i++) {
		if (board[i][0] == player && 
			  board[i][1] == player && 
			  board[i][2] == player) {
			return 1;
		}
	}
	return 0;
}

int checkcol(char board[3][3], char player) {
	for (int j = 0; j < 3; j++) {
		if (board[0][j] == player && 
			  board[1][j] == player && 
			  board[2][j] == player) {
			return 1;
		}
	}
	return 0;
}

int checkdiagonal(char board[3][3], char player) {
	if (board[0][0] == player && board[1][1] == player && board[2][2] == player) {
		return 1;
	}
	if (board[0][2] == player && board[1][1] == player && board[2][0] == player) {
		return 1;
	}
	return 0;
}


void playervsplayer() {
	char board[3][3];

	initboard(board);
	Board(board);
	guidline();

	inputchar(board, 'O');
	inputchar(board, 'O');
	inputchar(board, 'O');
	Board(board);

	if (checkrow(board, 'O') || checkcol(board, 'O') || checkdiagonal(board, 'O')) {
		printf("\nWinner: Player O ~~~~~~~\n");
		printf("Congratulations!!!!!!!\n");
		return;
	}

	inputchar(board, 'X');
	Board(board);

	if (checkrow(board, 'X') || checkcol(board, 'X') || checkdiagonal(board, 'X')) {
		printf("\nWinner: Player X ~~~~~~~\n");
		printf("Congratulations!!!!!!!\n");
	}
}