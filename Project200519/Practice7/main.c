#include <stdio.h>

/*
함수 이름 : multiply
기능 : 첫 번째, 두 번째로 받은 배열들의 각각 i번째 원소를 곱해 그 값을 세 번째로 받은 배열의 i번째 원소로 저장한다.
인자: int src1[] : 첫 번째 배열
	  int src2[] : 두 번째 배열
	  int dest[] : 세 번째 배열
	  int len : 배열의 길이
반환: 없음
작성 날짜 : 2020/05/19
작성자 : 김순욱
*/
void multiply(int src1[], int src2[], int dest[], int len)
{
	for (int i = 0; i < len; i++) {			// 인자로 받은 배열의 길이만큼 반복문을 수행한다.
		dest[i] = src1[i] * src2[i];		// src1, src2 배열의 i번째 원소를 곱해 그 값을 dest 배열의 i번째 원소로 저장한다.
	}
}

/*
함수 이름 : PrintList
기능 : 배열과 배열의 길이를 받아 한 원소씩 콤마(,)를 포함해 출력한다.
인자: int len : 배열의 길이
	  int array[] : 배열
반환: 없음
작성 날짜 : 2020/05/19
작성자 : 김순욱
*/
void PrintList(int len, int array[]) 
{
	for (int i = 0; i < len; i++) {	// 인자로 받은 배열의 길이만큼 반복문을 수행한다.
		if (i != 0) {				// 첫 번째 원소가 아닐 경우, 콤마를 먼저 출력한다.
			printf(", ");
		}
		printf("%d", array[i]);		// i번째 원소를 출력한다.
	}
	printf("\n");
}

/*
함수 이름 : main
작성 날짜 : 2020/05/19
작성자 : 김순욱
*/
int main()
{
	/* 서로의 원소를 곱할 source1, source2 배열과 그 값을 저장할 destination 함수를 다음과 같이 선언한다.*/
	int source1[5] = { 2, 4, 3, 1, 5 };
	int source2[5] = { 6, 7, 2, 3, 1 };
	int destination[5];
	int len = sizeof(destination) / sizeof(int);	// 배열의 길이를 선언한 len 변수에 저장

	printf("source1 : ");
	PrintList(len, source1);						// PrintList함수를 호출해 source1 배열의 원소를 출력한다.
	printf("source2 : ");
	PrintList(len, source2);						// PrintList함수를 호출해 source2 배열의 원소를 출력한다.

	multiply(source1, source2, destination, len);	// multiply 함수를 호출해 각 배열의 원소를 곱해 destination 배열에 저장한다.
	
	printf("destination : ");
	PrintList(len, destination);					// PrintList함수를 호출해 destination 배열의 원소를 출력한다.

	return 0;
}