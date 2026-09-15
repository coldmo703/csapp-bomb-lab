
#include <stdio.h>

void crash_function(int *ptr){
    printf("포인터가 가리키는 값: %d\n", *ptr);
}

int calculate(int a, int b) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += a + b;
    }
    return sum;
}

int main() {
    int x = 10;
    int y = 20;
    int result;

    printf("계산 시작\n");
    result = calculate(x, y);
    printf("결과: %d\n", result);

    int *bad_ptr = NULL;
    crash_function(bad_ptr); // 에러 발생 지점

    return 0;
}
