#include <stdio.h>

int grade[10];	// �� �л��� ������ ������ �迭�� ���������� ����

/*
�Լ� �̸� : InputStudentNum
��� : 1~10�� �л� ���� �Է¹޾� ��ȯ�Ѵ�.
���� : ����
��ȯ�� : �л� ��
�ۼ� ��¥ : 2020/05/12
�ۼ��� : �����
*/
int InputStudentNum()
{
	int studentNum;				// �л� ���� �Է¹޾� ������ ���� ����
	
	/* �л� ���� �Է¹޾� ������ ����*/
	printf("�л����� �Է��Ͻÿ�: ");
	scanf("%d", &studentNum);

	return studentNum;			// ������ ����� ���� �л� �� ��ȯ
}

/*
�Լ� �̸� : InputStudentGrade
��� : �� �л����� ������ �Է¹޴´�.
���� : �л� ��
��ȯ�� : ����
�ۼ� ��¥ : 2020/05/12
�ۼ��� : �����
*/
void InputStudentGrade(int studentNum)
{	
	/* �ݺ����� ���� i��° �л��� ������ �Է��� �������� grade�� i��° ���ҷ� ���� */
	for (int i = 1; i <= studentNum; i++) {
		printf("�л� %d ����: ", i);
		scanf("%d", &grade[i]);
	}
	printf("\n");
}

/*
�Լ� �̸� : PrintStudentGrade
��� : �� �л����� ������ *�� ǥ���� ����Ѵ�.
���� : �л� ��
��ȯ�� : ����
�ۼ� ��¥ : 2020/05/12
�ۼ��� : �����
*/
void PrintStudentGrade(int studentNum)
{
	/* grade �迭�� ����ִ� ���� ��(�л� ��)��ŭ �ݺ����� �����Ѵ�. */
	for (int i = 1; i <= studentNum; i++) {
		printf("�л� %d: ", i);
		/* i��° �л��� ������ŭ �ݺ����� ���� *�� ����Ѵ�. */
		for (int j = 0; j < grade[i]; j++) {	
			printf("*");
		}
		printf("\n");
	}
}

/*
main �Լ�
�ۼ� ��¥ : 2020/05/12
�ۼ��� �����
*/
int main()
{
	int studentNum = InputStudentNum();		// ������ ������ InputStudentNum �Լ��� ȣ���� ��ȯ���� �л� ���� ����

	InputStudentGrade(studentNum);			// InputStudentGrade �Լ��� ȣ���� studentNum�� ���ڷ� �����Ͽ� ���� �Է�
	PrintStudentGrade(studentNum);			// PrintStudentGrade �Լ��� ȣ���� studentNum�� ���ڷ� �����Ͽ� ���� ���
	
	return 0;
}