#include <stdio.h>

int main(void) {
	int midExam, finExam, attendance;	// �� �׸��� ������ �Է¹޾� ������ ���� ����

	// �� �׸��� ���� �Է¹���
	printf("�߰���� ���� : ");
	scanf("%d", &midExam);
	printf("�⸻��� ���� : ");
	scanf("%d", &finExam);
	printf("�߰���� ���� : ");
	scanf("%d", &attendance);

	double midTrans, finTrans, attendTrans; // �� �׸��� ��ȯ ������ ������ ���� ����

	// �� �׸��� ������ ������ ���� ��ȯ ������ ����� ������ ����
	midTrans = midExam * 0.4;
	finTrans = finExam * 0.5;
	attendTrans = attendance * 0.1;

	// �� �׸��� ��ȯ ���� ���
	printf("�߰���� ��ȯ ����(40%%) : %.2f\n", midTrans);
	printf("�⸻��� ��ȯ ����(50%%) : %.2f\n", finTrans);
	printf("�⼮ ��ȯ ����(10%%) : %.2f\n", attendTrans);

	// �� �׸��� ��ȯ ������ ���� �� ��ȯ ������ �� ���
	printf("�� ��ȯ ������ �� : %.2f", midTrans + finTrans + attendTrans);
}