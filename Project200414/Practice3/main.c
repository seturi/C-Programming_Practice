#include <stdio.h>

int main(void) {
	// �Է¹��� ���� ������ ���� ����
	int input;

	// ���� ������ �Է¹޾� ������ ����
	printf("���� ������ �Է��Ͻÿ�: ");
	scanf("%d", &input);

	// �ʵ� ���� 4ĭ Ȯ���Ͽ� 1���� input������ �� �پ� ���
	for (int i = 1; i <= input; i++) {
		printf("%4d\n", i);
	}

	return 0;
}