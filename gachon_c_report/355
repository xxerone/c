/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int get_sum(int a[], int n);

int main()
{
    int data[] = { 10, 20, 30, 40, 50 };
    int value;

    value = get_sum(data, 5);

    printf("%d \n", value);
    return 0;
}

int get_sum(int a[], int n) {
    /*
    원본이 전달되는 이유는 배열을 전달하기에 시작 주소를 전달하는 개념인가
    그럼 포인터로 바꾸면 어떻게 되지?
    -> 함수에서 바뀌니까 맞긴 맞을듯

    int a[]는 배열의 시작 주소가 함수로 전달됩니다.
    즉, 배열의 원본이 전달됩니다.
    배열의 시작 주소를 전달받은 함수는 전달된 주소를 통해 원래 배열의 값을 직접 접근하고 수정할 수 있습니다.
    int n은 값으로 전달됩니다.
    즉, n의 복사본이 함수로 전달되며, 함수 내부에서 변경되어도 원본 n에는 영향을 미치지 않습니다.
    */

    int i;
    int sum = 0;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }
    return sum;
}
