#include<stdio.h>

int main(void) {
	// ������Ʈ
	//�������� �������� ������ �Լ� (���� �ۼ�)
	//�̸�, ���� , ������ Ű , ���˸�
	char name[256];
	printf("�̸��� ������?");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("����̿���?");
	scanf_s("%d", &age);

	float weight;
	printf("�����Դ� ��kg �̿���?");
	scanf_s("%f", &weight);

	double height;
	printf("Ű�� ��cm �̿���? ");
	scanf_s("%lf", &height);

	char content[256];
	printf("���˸��� ������");
	scanf_s("%s", content, sizeof(content));

	
	// ���� ���� ���

	printf("\n\n -- ������ ���� --\m\n");
	printf("�̸�                  :%s\n", name);
	printf("����                  :%d\n", age);
	printf("������                :%.2f\n", weight);
	printf("Ű                    :%.2lf\n", height);
	printf("���˸�                :%s\n", content);

	




	



}