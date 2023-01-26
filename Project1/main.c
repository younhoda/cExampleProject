#include<stdio.h>

int main(void) {
	// 프로젝트
	//경찰관이 범죄좌의 정보를 입수 (조서 작성)
	//이름, 나이 , 몸무게 키 , 범죄명
	char name[256];
	printf("이름이 뭐예요?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("몇살이예요?");
	scanf_s("%d", &age);

	float weight;
	printf("몸무게는 몇kg 이예요?");
	scanf_s("%f", &weight);

	double height;
	printf("키는 몇cm 이예요? ");
	scanf_s("%lf", &height);

	char content[256];
	printf("범죄명이 뭐예요");
	scanf_s("%s", content, sizeof(content));

	
	// 조서 내용 출력

	printf("\n\n -- 범죄자 정보 --\m\n");
	printf("이름                  :%s\n", name);
	printf("나이                  :%d\n", age);
	printf("몸무게                :%.2f\n", weight);
	printf("키                    :%.2lf\n", height);
	printf("범죄명                :%s\n", content);

	




	



}