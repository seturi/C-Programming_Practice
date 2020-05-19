#include <stdio.h>

/*
�Լ� �̸� : multiply
��� : ù ��°, �� ��°�� ���� �迭���� ���� i��° ���Ҹ� ���� �� ���� �� ��°�� ���� �迭�� i��° ���ҷ� �����Ѵ�.
����: int src1[] : ù ��° �迭
	  int src2[] : �� ��° �迭
	  int dest[] : �� ��° �迭
	  int len : �迭�� ����
��ȯ: ����
�ۼ� ��¥ : 2020/05/19
�ۼ��� : �����
*/
void multiply(int src1[], int src2[], int dest[], int len)
{
	for (int i = 0; i < len; i++) {			// ���ڷ� ���� �迭�� ���̸�ŭ �ݺ����� �����Ѵ�.
		dest[i] = src1[i] * src2[i];		// src1, src2 �迭�� i��° ���Ҹ� ���� �� ���� dest �迭�� i��° ���ҷ� �����Ѵ�.
	}
}

/*
�Լ� �̸� : PrintList
��� : �迭�� �迭�� ���̸� �޾� �� ���Ҿ� �޸�(,)�� ������ ����Ѵ�.
����: int len : �迭�� ����
	  int array[] : �迭
��ȯ: ����
�ۼ� ��¥ : 2020/05/19
�ۼ��� : �����
*/
void PrintList(int len, int array[]) 
{
	for (int i = 0; i < len; i++) {	// ���ڷ� ���� �迭�� ���̸�ŭ �ݺ����� �����Ѵ�.
		if (i != 0) {				// ù ��° ���Ұ� �ƴ� ���, �޸��� ���� ����Ѵ�.
			printf(", ");
		}
		printf("%d", array[i]);		// i��° ���Ҹ� ����Ѵ�.
	}
	printf("\n");
}

/*
�Լ� �̸� : main
�ۼ� ��¥ : 2020/05/19
�ۼ��� : �����
*/
int main()
{
	/* ������ ���Ҹ� ���� source1, source2 �迭�� �� ���� ������ destination �Լ��� ������ ���� �����Ѵ�.*/
	int source1[5] = { 2, 4, 3, 1, 5 };
	int source2[5] = { 6, 7, 2, 3, 1 };
	int destination[5];
	int len = sizeof(destination) / sizeof(int);	// �迭�� ���̸� ������ len ������ ����

	printf("source1 : ");
	PrintList(len, source1);						// PrintList�Լ��� ȣ���� source1 �迭�� ���Ҹ� ����Ѵ�.
	printf("source2 : ");
	PrintList(len, source2);						// PrintList�Լ��� ȣ���� source2 �迭�� ���Ҹ� ����Ѵ�.

	multiply(source1, source2, destination, len);	// multiply �Լ��� ȣ���� �� �迭�� ���Ҹ� ���� destination �迭�� �����Ѵ�.
	
	printf("destination : ");
	PrintList(len, destination);					// PrintList�Լ��� ȣ���� destination �迭�� ���Ҹ� ����Ѵ�.

	return 0;
}