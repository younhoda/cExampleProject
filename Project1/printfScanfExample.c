#include<stdio.h>

int main(void) {
	
	/*int age = 12;
	printf("%d\n", age);
	age = 13;
	printf("%d\n", age);*/
	

	//printf("1\n");
	///*printf("2\n");*/ //2�� �������� ����Ƿ� �ּ�ó��
	//printf("3\n");

	//�Ǽ��� ������ ���� ����
	/*float weight = 55.5;
	printf("%.2f\n", weight);
	double d=3.14592;
	printf("%.2lf\n", d);*/

	//�������
	/*const int YEAR = 2000;
	printf("%d\n", YEAR);*/
	
	//printf����
	//������
	//int add = 3 + 7; //10
	//printf("3+7=%d\n", add);
	//printf("%d * %d=%d\n", 30, 79, 30 * 79);

	//scanf
	//Ű���� �Է��� �޾Ƽ� ����
	/*int input;
	printf("���� �Է��ϼ���:");
	scanf_s("%d", &input);
	printf("�������:%d\n", input);*/

	int one, two, three;
	printf("3���� ������ �Է����ּ���:");
	scanf_s("%d %d %d", &one, &two, &three);
	printf("ù��° �������:%d\n", one);
	printf("�ι�° �������:%d\n", two);
	printf("����° �������:%d\n", three);


	return 0;
}