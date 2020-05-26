#include <stdio.h>

/*
함수이름: get_points
기능: 3명의 학생의 시험 두개에 대한 점수를 입력받는다
인자: double(*point)[2] 성적을 저장할 배열 포인터
      int row 배열의 세로 길이
반환:  없음
작성날짜: 2020/05/26
작성자: 김순욱
*/
void get_points(double(*point)[2], int row)
{
    /* 반복문을 돌며 학번 i 학생의 시험 j 점수를 입력받아 point에 저장 */
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < 2; j++) {
            printf("학번 %d, 시험 %d:", i + 1, j + 1);
            scanf("%lf", &point[i][j]);
        }
    }
    printf("\n");
}

/*
함수이름: calculate_average
기능: 각 학생의 시험점수의 평균을 구해서 출력한다
인자: double(*point)[2] 배열 포인터
      int row 배열의 세로 길이
반환:
작성날짜: 2020/05/26
작성자: 김순욱
*/
void calculate_average(double(*point)[2], int row)
{
    double sum;                                             // 한 학생의 두 시험 점수를 더할 변수 선언

    for (int i = 0; i < row; i++) {
        sum = 0;                                            // 점수의 합을 저장할 변수 0으로 초기화
        for (int j = 0; j < 2; j++) {
            sum += point[i][j];                             // 학번 i 학생의 두 시험점수를 sum에 저장
        }
        printf("학번 %d 평균:%.1f\n", i + 1, sum / 2);      // 평균을 구해 출력
    }
}

/*
    main 함수
작성날짜: 2020/05/26
작성자: 김순욱
*/
int main()
{
    double points[3][2];                                    // 세 명의 학생의 두 시험 점수를 저장할 이차원 배열 선언

    get_points(points, 3);                                  // get_points 함수를 호출해 points와 row=3을 인자로 전달해 각 학생의 시험 점수 points에 저장
    calculate_average(points, 3);                           // calculate_average 함수를 호출해 points와 row=3을 인자로 전달해 각 학생의 시험 점수의 평균 출력

    return 0;
}