#include<stdio.h>
#include "TTT.h"

void menu() {
	printf("=========Tic Tac Toe========\n");
	printf(" 1. 2 player\n");
	printf(" 2. vs Computer\n");
	printf("============================\n");

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
	printf("[Guide] 0 ~ 8 사이의 숫자를 입력하세요.\n");
	printf("        판에 표시된 번호가 그 위치를 나타냅니다.\n");
}
void inputchar(char board[3][3], char player) {
	int pos;
	printf("Player %c, enter position 0 ~ 8: ", player);
	scanf_s(" %d", &pos);
	int row = pos / 3;
	int col = pos % 3;
	board[row][col] = player;
}
void playervsplayer() {
	char board[3][3];

	initboard(board);
	Board(board);
	guidline();

	inputchar(board, 'O');
	Board(board);
	guidline();

	inputchar(board, 'X');
	Board(board);
}