#include <stdio.h>

int main(void)
{
	// �� ������ ������ �Է¹��� ���� ����
	int fiveHundred, hundred, fifty, ten;
	// �ݾ��� ���� ������ ���� ����
	int result;

	// �� ������ ������ �Է¹���
	printf("500�� ���� : ");
	scanf("%d", &fiveHundred);
	printf("100�� ���� : ");
	scanf("%d", &hundred);
	printf("50�� ���� : ");
	scanf("%d", &fifty);
	printf("10�� ���� : ");
	scanf("%d", &ten);

	// �� ������ ������ �ݾ��� ���� �� ���� ����
	result = 500 * fiveHundred + 100 * hundred + 50 * fifty + 10 * ten;

	// ����� ���
	printf("�ݾ��� �� : %d", result);
	return 0;
}