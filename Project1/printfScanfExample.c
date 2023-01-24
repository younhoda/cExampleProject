#include<stdio.h>

int main(void) {
	
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	

	//printf("1\n");
	///*printf("2\n");*/ //2는 범위에서 벗어나므로 주석처리
	//printf("3\n");

	//실수형 변수에 대한 예제
	/*float weight = 55.5;
	printf("%.2f\n", weight);
	double d=3.14592;
	printf("%.2lf\n", d);*/

	//상수예제
	/*const int YEAR = 2000;
	printf("%d\n", YEAR);*/
	
	//printf예제
	//연산자
	//int add = 3 + 7; //10
	//printf("3+7=%d\n", add);
	//printf("%d * %d=%d\n", 30, 79, 30 * 79);

	//scanf
	//키보드 입력을 받아서 저장
	/*int input;
	printf("값을 입력하세요:");
	scanf_s("%d", &input);
	printf("결과값은:%d\n", input);*/

	int one, two, three;
	printf("3개의 정수를 입력해주세요:");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("첫번째 결과값은:%d\n", one);
	printf("두번째 결과값은:%d\n", two);
	printf("세번째 결과값은:%d\n", three);


	return 0;
}