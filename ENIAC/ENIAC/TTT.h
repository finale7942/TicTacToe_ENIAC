#pragma once



#define boardlength(a,b,c) printf(" %c | %c | %c \n",a,b,c);
#define boardwide()        printf("-----------\n");

void menu();
void initboard(char board[3][3]);
void Board(char board[3][3]);
void guidline();
void inputchar(char board[3][3], char player);
void playervsplayer();
