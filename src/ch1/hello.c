#include <stdio.h>
//함수 선언
int Sum(int a, int b);
//메인 함수
int main() {
    int c = Sum(4, 6);
    printf("%d 결과입니다.\n", c); 

    return 0;
}
//함수 정의
int Sum(int a, int b) {
    return a + b;
}