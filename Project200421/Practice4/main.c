#include <stdio.h>

int main(void) {
	int input;		// 출력할 행과 폭을 나타내는 정수를 입력받아 저장할 변수 선언
	
	// 입력 안내 후 입력값 변수에 저장
	printf("출력할 행과 폭을 나타내는 정수 하나를 입력하시오: ");
	scanf("%d", &input);
	
	// 첫 번째 경우 반복문
	for(int num = 1; num <= input; num++) {	// 출력할 정수를 num으로 변수 선언
		for(int i = 0; i < input; i++) {	// 출력 횟수를 i로 선언, input회만큼 반복
			printf("%d", num);				// input 값만큼 폭을 지정, 반복 출력
		}
		printf("\n");						// 행 바꿈
	}

	printf("\n");

	// 두 번째 경우 반복문
	for(int num = 1; num <= input; num++) {	// 출력할 정수를 num으로 변수 선언
		for (int i = 0; i < num; i++) {		// 출력 횟수를 i로 선언, num회만큼 반복
			printf("%d", num);				// 해당 num 값만큼 폭을 지정, 반복 출력
		}
		printf("\n");						// 행 바꿈
	}

	return 0;
}