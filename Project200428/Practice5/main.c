#include <stdio.h>

/*
함수 이름 : inputNum
기능 : 정수를 입력받아 그 값을 반환한다
인자 : 없음
반환값 : 정수
작성 날짜 : 2020/04/28
작성자 : 김순욱
*/
int InputNum() {
	int num;	// 정수를 입력받을 변수 선언
	
	/* 정수를 입력받아 반환 */
	scanf("%d", &num);
	return num;
}

/*
함수 이름 : SumMultiCompare
기능 : 인자로 전달된 두 정수의 합과 곱을 비교하고 더 큰 값을 반환한다.
인자 : int num1 : 첫 번째 정수
	   int num2 : 두 번째 정수
반환값 : 두 정수의 합과 곱 중 큰 값
작성 날짜 : 2020/04/28
작성자 : 김순욱
*/
int SumMultiCompare(int num1, int num2) 
{
	/* 두 정수의 합과 곱을 sum, multi변수에 각각 저장 */
	int sum = num1 + num2;
	int multi = num1 * num2;

	if (sum > multi) {	// 합이 곱보다 큰 경우 합의 값을 반환
		return sum;
	}
	else {				// 곱이 합보다 크거나 같은 경우 곱의 값을 반환
		return multi;
	}
}

/*
함수 이름 : main
기능 : 두 정수를 InputNum함수를 호출해 입력받고
	   SumMultiCompare함수를 호출해 인자로 전달해
	   합과 곱 중 큰 수를 반환받아 결과문을 출력한다
작성 날짜 : 2020/04/28
작성자 : 김순욱
*/
int main()
{
	int num1, num2;		// 입력받을 두 정수를 각각 저장할 변수 선언
	
	/* InputNum함수를 호출해 두 정수를 입력 받아 변수에 저장 */
	printf("두 수를 입력하시오 : ");
	num1 = InputNum();
	num2 = InputNum();
	
	/* SumMultiCompare함수를 호출해 합과 곱 중 큰 수를 반환받아 결과문 출력 */
	printf("%d과 %d의 곱과 합 중에서 큰 수는 %d입니다.\n", num1, num2, SumMultiCompare(num1, num2));

	return 0;
}