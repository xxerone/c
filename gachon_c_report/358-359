#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define N_DATA 10

void get_data(double data[]);
void print_data(double data[]);
double get_mean(double data[]);
double get_std_dev(double data[], double mean);

int main()
{
    double data[20];
    /*
    #define N_DATA 10
    double data[20];
    에서 10이랑 20이 다른게 의문점인듯

    왜 배열 크기를 더 크게 선언했을까?
1. 확장 가능성
배열 크기를 20으로 설정해두면, 프로그램을 나중에 확장해서 N_DATA를 20으로 변경할 경우에도 추가적인 코드 수정 없이 동작할 수 있습니다.
즉, 코드의 유연성을 높이기 위한 설계입니다.
2. 배열 크기는 데이터 개수보다 커도 문제가 없다
C 언어에서는 배열의 크기를 더 크게 선언한 후, 필요한 만큼만 사용하면 됩니다.
중요한 점은, 반복문에서 N_DATA만큼만 접근하도록 설계되어 있어 초과된 메모리를 접근하지 않습니다.
    */
    double mean;

    srand((unsigned)time(NULL));

    get_data(data);
    print_data(data);
    mean = get_mean(data);

    printf("평균값은 %lf\n", mean);
    printf("표준편차값은 %lf\n", get_std_dev(data, mean));
    return 0;
}

void get_data(double data[]) {
    int i;
    for (i = 0; i < N_DATA; i++) {
        data[i] = rand() % 100;
    }
}

void print_data(double data[]) {
    int i;
    printf("( ");
    for (i = 0; i < N_DATA; i++) {
        printf("%2lf ", data[i]);
    }
    printf(" )\n");
}

double get_mean(double data[]) {
    int i;
    double sum = 0.0;
    for (i = 0; i < N_DATA; i++) {
        sum += data[i];
    }
    return sum / N_DATA;
}

double get_std_dev(double data[], double mean) {
    /*
    표준편차 구하는 식 쓰면서 하면 이해되긴 할듯
    일단 이해 안되는 부분은
    함수 전체가 이해 안됨
    */
    int i;
    double sum = 0.0;

    for (i = 0; i < N_DATA; i++) {

        sum += (data[i] - mean) * (data[i] + mean);
    }
    return sqrt(sum / N_DATA);
}
