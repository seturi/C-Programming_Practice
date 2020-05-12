#include <stdio.h>

int grade[10];	// 각 학생의 점수를 저장할 배열을 전역변수로 선언

/*
함수 이름 : InputStudentNum
기능 : 1~10의 학생 수를 입력받아 반환한다.
인자 : 없음
반환값 : 학생 수
작성 날짜 : 2020/05/12
작성자 : 김순욱
*/
int InputStudentNum()
{
	int studentNum;				// 학생 수를 입력받아 저장할 변수 선언
	
	/* 학생 수를 입력받아 변수에 저장*/
	printf("학생수를 입력하시오: ");
	scanf("%d", &studentNum);

	return studentNum;			// 변수에 저장된 값인 학생 수 반환
}

/*
함수 이름 : InputStudentGrade
기능 : 각 학생들의 점수를 입력받는다.
인자 : 학생 수
반환값 : 없음
작성 날짜 : 2020/05/12
작성자 : 김순욱
*/
void InputStudentGrade(int studentNum)
{	
	/* 반복문을 돌며 i번째 학생의 점수를 입력해 전역변수 grade의 i번째 원소로 저장 */
	for (int i = 1; i <= studentNum; i++) {
		printf("학생 %d 점수: ", i);
		scanf("%d", &grade[i]);
	}
	printf("\n");
}

/*
함수 이름 : PrintStudentGrade
기능 : 각 학생들의 점수를 *로 표현해 출력한다.
인자 : 학생 수
반환값 : 없음
작성 날짜 : 2020/05/12
작성자 : 김순욱
*/
void PrintStudentGrade(int studentNum)
{
	/* grade 배열에 들어있는 원소 수(학생 수)만큼 반복문을 수행한다. */
	for (int i = 1; i <= studentNum; i++) {
		printf("학생 %d: ", i);
		/* i번째 학생의 점수만큼 반복문을 돌며 *을 출력한다. */
		for (int j = 0; j < grade[i]; j++) {	
			printf("*");
		}
		printf("\n");
	}
}

/*
main 함수
작성 날짜 : 2020/05/12
작성자 김순욱
*/
int main()
{
	int studentNum = InputStudentNum();		// 변수를 선언해 InputStudentNum 함수를 호출해 반환값인 학생 수를 저장

	InputStudentGrade(studentNum);			// InputStudentGrade 함수를 호출해 studentNum을 인자로 전달하여 점수 입력
	PrintStudentGrade(studentNum);			// PrintStudentGrade 함수를 호출해 studentNum을 인자로 전달하여 점수 출력
	
	return 0;
}