#pragma once
// 게임에 어떤 기능이 있는 지
// 핵심 기능 코드 하나 짧게 설명
//


#define boardlength(a,b,c) printf(" %c | %c | %c \n",a,b,c);
#define boardwide()        printf("-----------\n");
/*
char a[3][3] = [['0', '0', '0'], 
								['0', '0', '0'], 
								['0','0','0']];
*/
void menu();
void initboard(char board[3][3]);
void Board(char board[3][3]);
void guidline();
void inputchar(char board[3][3], char player);
void playervsplayer();

int checkrow(char board[3][3], char player);
int checkcol(char board[3][3], char player);
int checkdiagonal(char board[3][3], char player);