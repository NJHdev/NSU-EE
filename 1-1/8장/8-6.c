/*
#include <stdio.h>

void main()
{
    int *p = (int*)0x100;       // 포인터 연산 결과를 확인하기 위해 절대 주소를 대입한다.
    double *q = (double*)0x100;
    char *r = (char*)0x100;

    printf("int*   : %p, %p, %p\n", p, p + 1, p + 2); // 4바이트씩 늘어난 주소를 출력
    printf("double*: %p, %p, %p\n", q, q + 1, q + 2); // 8바이트씩 늘어난 주소를 출력
    printf("char*  : %p, %p, %p\n", r, r + 1, r + 2); // 1바이트씩 늘어난 주소를 출력
}
*/