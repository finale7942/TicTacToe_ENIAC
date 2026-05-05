#include <stdio.h>

 /*int main()
{
	int num1;
	int num2;
	int num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);
	
	printf("%d + %d + %d = %d\n",num1,num2,num3,num1 + num2 + num3);
	printf("%d - %d - %d = %d\n", num1, num2, num3, num1 - num2 - num3);
	printf("%d * %d * %d = %d\n", num1, num2, num3, num1 * num2 *num3);
	printf("%d / %d / %d = %d\n", num3, num2, num1, num3 / num2/ num1);
	printf("%d\n", num1 % num2 % num3);

	int max = -1;
	int min = 11;
	max = (max <= num1) ? num1 : max;
	max = (max <= num2) ? num2 : max;
	max = (max <= num3) ? num3 : max;


	min = (min >= num1) ? num1 : min;
	min = (min >= num2) ? num2 : min;
	min = (min >= num3) ? num3 : min;

	printf("Max = %d\nMin = %d", max, min);

	return 0;
}*/





/*int main() {
	char blood;
	int grade;
	int num;
	float high;
	scanf_s("%c", &blood);
	scanf_s("%d", &grade);
	scanf_s("%d", &num);
	scanf_s("%f", &high);
	printf("------------------------------------------\n");
	printf("혈액형: %c\n학년: %d\n학번: %d\n키: %f", blood, grade, num, high);


	return 0;
}*/



/*int main() {
	int n1, n2, n3, total = 0;
	char c0;
	char c1;
	//1번

	printf("int:");
	scanf_s("%d", &n1);
	c0 = n1 % 2 == 0 ? 'e' : 'o';
	printf("%c\n", c0);
	total++;
	printf("------------------------------------\n");
	// 2번

	printf("char: ");
	
	scanf_s(" %c", &c1,(unsigned int)sizeof(c1));
	printf("asii: %d\n", c1);
	total += 1;
	printf("---------------------------------------------\n");
	//3번

	printf("%c\n", n1);
	total += 1;
	printf("-----------------------------------------\n");
	// 4번

	printf("second int: ");
	scanf_s("%d", &n2);
	printf("third int: ");
	scanf_s("%d", &n3);
	printf("%d + %d = %d\n", n2, n3, n2 + n3);
	printf("%d - %d = %d\n", n2, n3, n2 - n3);
	printf("%d * %d = %d\n", n2, n3, n2 * n3);
	printf("%d / %d = %d\n", n2, n3, n2 / n3);
	total += 1;
	printf("--------------------------------------------\n");
	// 5번

	int max;
	max = (n2 > n3) ? n2 : n3;
	printf("Max: %d\n", max);
	total += 1;
	printf("------------------------------------------\n");
	// 6번

	
	printf("Sum: %d", ++total);
	return 0;
}*/



//강제 자료형 변환
/*int main() {
	float num1;
	
	scanf_s("%f", &num1);

	printf("---------------------\n");
	
	
	printf("%d\n", (int)num1);
	printf("%f\n", num1);


	return 0;
}*/


//배열
/*int main() {

	char a[10] = {"hello"};
	a[5] = '!';
	printf("%c\n", a[0]);
	printf("%c\n", a[1]);
	printf("%c\n", a[2]);
	printf("%c\n", a[3]);
	printf("%c\n", a[4]);
	printf("%c\n", a[5]);

	return 0;
}*/

//조건문 (정수 하나를 입력받고 짝수이면서 10초과이면 참 아니면 거짓임을 출력하시오.

/*int main() {
	int num1;
	
	scanf_s("%d", &num1);
	
	if ((num1 % 2 == 0) && (num1>10)) {

		printf("even, success");
	}
	else {
		printf("fail");
	}
	
	return 0;
}*/

//0~50: D 51~60: C 61~70: B 71~90: A 91~100: A+

/*int main() {
	int num1;
	scanf_s("%d", &num1);
	if (num1 < 0 || num1 > 100) { //if (num1 >= 0 && num1 <= 50);
		printf("enter again");      // printf("D");
	}
	else if (num1 <= 50) {        //num1 <= 60
		printf("D");                    //C
	}
	else if (num1 <= 60) {              // <=70
		printf("C");                     // B
	}
	else if (num1 <= 70) {             // <=80
		printf("B");                     // A
	}
  else if (num1 <= 90) {           // <= 90
		printf("A");                    // A+
	}
	else {
		printf("A+");                //enter again
	}
	return 0;
}*/


//switch break

/*int main() {
	
	int num1;
	scanf_s("%d", & num1);

	printf("-----------------------\n");

	switch (num1) {
	case 1:
		printf("A");
		break;
	case 2:
		printf("B");
		break;
	case 3:
		printf("C");
		break;
	default:
		printf("try again");
		break;
		
	}
 
	return 0;
}*/


/*int main() {
	int menu, num1;
	
	printf("1. rounding 2. circumference 3. login\n");
	printf("---------------------------------------\n");
	scanf_s("%d",&menu);

	const float pi = 3.14;

	switch (menu) {
	case 1:   
		int n;
	printf("enter number: ");
	scanf_s("%d", &num1);
	
		if (num1 % 10 >= 5) {
			n = (num1 / 10) * 10 + 10;
		}
		else {
			n = (num1 / 10) * 10;
		}
		printf("result: %d\n", n);
		break; 
	case 2: 
		
		float d;
		printf("enter diameter: ");
		scanf_s("%f", &d);
		

		printf("circumference of a circle: %.2f", (pi * d));
		break;

	case 3:
		printf("enter ID: ");
		char ID[4];
		const char correctID[4] ="Lee";
		
		scanf_s("%s",ID, (unsigned int)sizeof(ID));
		
		printf("enter password: ");
		int password;
		const int correctpassword = 20060309;
		scanf_s(" %d", &password);

		printf("------------------------\n");
		printf("Result: ");
		int id = (ID[0] == correctID[0] && 
							ID[1] == correctID[1] && 
							ID[2] == correctID[2] && 
							ID[3] == correctID[3]);

		int pw = (password == correctpassword);
		
			
		if (id && pw) {
				printf("Success Login\n");
			}
		else if (id) {
				printf("Only ID is correct\n");
			}
		else if (pw) {
				printf("Only password is correct\n");
			}
		else {
				printf("Both are incorrect\n");
			}
			break;
	}   
	
	return 0;
}*/


//-1을 입력받기 전 까지 모든 수를 더해서 출력

/*int main() {

	int num1 = 0;
	int total = 0;
	
	while (1)
	{
		scanf_s("%d", &num1);
		if (num1 == -1)
		{
			printf("------------------------------\n");
			printf("%d", total);
			break;
		}
		else
		{
		 total += num1;
		}
	}
	
	return 0;
}*/

//배열 선언하고 영어 풀네임을 for를 이용해서 출력하시오.

/*int main() {

	char room[11] = "leegeonwoo";
	
	for (int num1 = 0; num1 < 11 ; num1++)
	{
		printf("%c", room[num1]);
	}

	
	return 0;
}*/

//함수명 선언 -> 정수, 문자 입력받고 문자를 정수의 수만큼 출력하시오.

/*void f(int num1, char cha1);

int main() {
	int num1;
	char cha1;
	printf("enter num: ");
	scanf_s("%d", &num1);
	printf("enter char: ");
	scanf_s(" %c", &cha1,(unsigned int)sizeof(cha1));
	printf("-----------------------------------\n");
	f(num1, cha1);

	return 0;
}
void f(int num1, char cha1)
{
	for (int num = 0; num < num1 ; num++) {


		for (int num2 = 0; num2 < num + 1 ; num2++)
		{
			printf("%c", cha1);
		}

		printf("\n");
	}
	return;
	}*/

	
	
// 과제: 입력받은 문자를 입력받은 숫자로 줄을 만들고 2줄에는 2개, 3줄에는 3개 이런식으로 마름모로 출력.
/*void space(int num0);
void chars(int num0, char char0);
void up(int num0, char char0);
void down(int num0, char char0);

int main()
{
	int num0;
	char char0;
	
	printf("enter num: ");
	scanf_s("%d", &num0);
	printf("enter char: ");
	scanf_s(" %c", &char0,(unsigned int)sizeof(char0));
	printf("=============================\n");
	up(num0, char0);
	down(num0, char0);
	printf("================================");
	
	return 0;
}

void space(int num0) {
	for (int i = 0; i < num0; i++) {
		printf(" ");
	}
}

void chars(int num0, char char0) {
	for (int i = 0; i < num0; i++) {
		printf("%c", char0);
	}
}
void up(int num0, char char0) {
	for (int i = 0; i < num0; i++) {
		space(num0 - 1 - i);
		chars(2 * i + 1, char0);
		printf("\n");
	}
}

void down(int num0, char char0) {
	for (int i = num0 - 2; i >= 0; i--) {
		space(num0 - 1 - i);
		chars(2 * i + 1, char0);
		printf("\n");
	}
}*/



//모듈(간지)

//*#include "lgw.h"

/*int main() {

	a();

	return 0;
}*/


