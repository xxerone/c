/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void swap(int* px, int* py);

int main()
{
    int a = 10; // a 선언 및 초기화
    int b = 20; // b 선언 및 초기화
    printf("swap() 호출 전 a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("swap() 호출 후 a = %d, b = %d\n", a, b);
    return 0;
}

void swap(int* px, int* py) {
    // 어떤걸 받나 출력은 해보기
    int tmp;

    tmp = *px;
    *px = *py;
    *py = tmp;
}
