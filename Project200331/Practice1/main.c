#include <stdio.h>

int main(void)
{
	// 각 동전의 개수를 입력받을 변수 선언
	int fiveHundred, hundred, fifty, ten;
	// 금액의 합을 저장할 변수 선언
	int result;

	// 각 동전의 개수를 입력받음
	printf("500원 개수 : ");
	scanf("%d", &fiveHundred);
	printf("100원 개수 : ");
	scanf("%d", &hundred);
	printf("50원 개수 : ");
	scanf("%d", &fifty);
	printf("10원 개수 : ");
	scanf("%d", &ten);

	// 각 동전의 개수에 금액을 곱해 그 값을 저장
	result = 500 * fiveHundred + 100 * hundred + 50 * fifty + 10 * ten;

	// 결과값 출력
	printf("금액의 합 : %d", result);
	return 0;
}