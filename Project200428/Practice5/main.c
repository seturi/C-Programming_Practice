#include <stdio.h>

/*
�Լ� �̸� : inputNum
��� : ������ �Է¹޾� �� ���� ��ȯ�Ѵ�
���� : ����
��ȯ�� : ����
�ۼ� ��¥ : 2020/04/28
�ۼ��� : �����
*/
int InputNum() {
	int num;	// ������ �Է¹��� ���� ����
	
	/* ������ �Է¹޾� ��ȯ */
	scanf("%d", &num);
	return num;
}

/*
�Լ� �̸� : SumMultiCompare
��� : ���ڷ� ���޵� �� ������ �հ� ���� ���ϰ� �� ū ���� ��ȯ�Ѵ�.
���� : int num1 : ù ��° ����
	   int num2 : �� ��° ����
��ȯ�� : �� ������ �հ� �� �� ū ��
�ۼ� ��¥ : 2020/04/28
�ۼ��� : �����
*/
int SumMultiCompare(int num1, int num2) 
{
	/* �� ������ �հ� ���� sum, multi������ ���� ���� */
	int sum = num1 + num2;
	int multi = num1 * num2;

	if (sum > multi) {	// ���� ������ ū ��� ���� ���� ��ȯ
		return sum;
	}
	else {				// ���� �պ��� ũ�ų� ���� ��� ���� ���� ��ȯ
		return multi;
	}
}

/*
�Լ� �̸� : main
��� : �� ������ InputNum�Լ��� ȣ���� �Է¹ް�
	   SumMultiCompare�Լ��� ȣ���� ���ڷ� ������
	   �հ� �� �� ū ���� ��ȯ�޾� ������� ����Ѵ�
�ۼ� ��¥ : 2020/04/28
�ۼ��� : �����
*/
int main()
{
	int num1, num2;		// �Է¹��� �� ������ ���� ������ ���� ����
	
	/* InputNum�Լ��� ȣ���� �� ������ �Է� �޾� ������ ���� */
	printf("�� ���� �Է��Ͻÿ� : ");
	num1 = InputNum();
	num2 = InputNum();
	
	/* SumMultiCompare�Լ��� ȣ���� �հ� �� �� ū ���� ��ȯ�޾� ����� ��� */
	printf("%d�� %d�� ���� �� �߿��� ū ���� %d�Դϴ�.\n", num1, num2, SumMultiCompare(num1, num2));

	return 0;
}