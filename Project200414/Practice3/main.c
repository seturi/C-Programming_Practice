#include <stdio.h>

int main(void) {
	// 입력받을 값을 저장할 변수 선언
	int input;

	// 양의 정수를 입력받아 변수에 저장
	printf("양의 정수를 입력하시오: ");
	scanf("%d", &input);

	// 필드 폭을 4칸 확보하여 1부터 input값까지 한 줄씩 출력
	for (int i = 1; i <= input; i++) {
		printf("%4d\n", i);
	}

	return 0;
}