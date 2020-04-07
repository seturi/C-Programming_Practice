#include <stdio.h>

int main(void) {
	int midExam, finExam, attendance;	// 각 항목의 점수를 입력받아 저장할 변수 선언

	// 각 항목의 점수 입력받음
	printf("중간고사 점수 : ");
	scanf("%d", &midExam);
	printf("기말고사 점수 : ");
	scanf("%d", &finExam);
	printf("중간고사 점수 : ");
	scanf("%d", &attendance);

	double midTrans, finTrans, attendTrans; // 각 항목의 변환 점수를 저장할 변수 선언

	// 각 항목의 점수에 비율을 곱한 변환 점수를 계산해 변수에 저장
	midTrans = midExam * 0.4;
	finTrans = finExam * 0.5;
	attendTrans = attendance * 0.1;

	// 각 항목의 변환 점수 출력
	printf("중간고사 변환 점수(40%%) : %.2f\n", midTrans);
	printf("기말고사 변환 점수(50%%) : %.2f\n", finTrans);
	printf("출석 변환 점수(10%%) : %.2f\n", attendTrans);

	// 세 항목의 변환 점수를 더해 총 변환 점수의 합 출력
	printf("총 변환 점수의 합 : %.2f", midTrans + finTrans + attendTrans);
}