#include <stdio.h>

// 두 정수의 포인터를 받아서, 가리키는 값을 서로 바꾸는 함수

void swap(int* a_adress, int* b_adress) { //a와 b의 주소를 받음 / a_adress안에는 a의 주소(&a)가, b_adress안에는 b의 주소(&b)가 들어가있음
    int temp = *a_adress; // 첫 번째 인자의 값을 임시 변수에 저장 
    *a_adress = *b_adress;       // 두 번째 인자의 값을 첫 번째 인자가 가리키는 곳에 저장 
    *b_adress = temp;     // 임시 변수의 값을 두 번째 인자가 가리키는 곳에 저장
}

int main() {
    int a = 10; // 첫 번째 정수 변수 초기화
    int b = 20; // 두 번째 정수 변수 초기화

    // 교환 전 변수의 값 출력
    printf("Before swap: a = %d, b = %d\n", a, b);

    swap(&a, &b); // 'swap' 함수를 호출하여 'a'와 'b'의 값을 교환
                  // 인자로 'a'와 'b'의 주소를 전달
                  
    // 교환 후 변수의 값 출력
    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}