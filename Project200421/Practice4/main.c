#include <stdio.h>

int main(void) {
	int input;		// ����� ��� ���� ��Ÿ���� ������ �Է¹޾� ������ ���� ����
	
	// �Է� �ȳ� �� �Է°� ������ ����
	printf("����� ��� ���� ��Ÿ���� ���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d", &input);
	
	// ù ��° ��� �ݺ���
	for(int num = 1; num <= input; num++) {	// ����� ������ num���� ���� ����
		for(int i = 0; i < input; i++) {	// ��� Ƚ���� i�� ����, inputȸ��ŭ �ݺ�
			printf("%d", num);				// input ����ŭ ���� ����, �ݺ� ���
		}
		printf("\n");						// �� �ٲ�
	}

	printf("\n");

	// �� ��° ��� �ݺ���
	for(int num = 1; num <= input; num++) {	// ����� ������ num���� ���� ����
		for (int i = 0; i < num; i++) {		// ��� Ƚ���� i�� ����, numȸ��ŭ �ݺ�
			printf("%d", num);				// �ش� num ����ŭ ���� ����, �ݺ� ���
		}
		printf("\n");						// �� �ٲ�
	}

	return 0;
}