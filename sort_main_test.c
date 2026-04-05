// 정렬이 제대로 작동하는지 테스트하는 코드


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "sort_algorithms.h"

int main() {

    int n = 10; // 정렬할 데이터 크기 100,000

    int original[10]; 
    int arr1[10];     
    int arr2[10];     
    int arr3[10];     
    

    // 입력 데이터는 random함수를 사용*하고자 초기화
    srand(time(0)); 

    // random 함수를 이용한 입력 데이터 생성*
    for (int i = 0; i < n; i++) {
        original[i] = rand() % 10;
    }

    // 배열 복사: 동일한 입력 데이터를 각 정렬 알고리즘에 적용하기 위해
    copy_array(original, arr1, n);
    copy_array(original, arr2, n);
    copy_array(original, arr3, n);

    printf("Original array:\n");
    print_array(original, n);
    printf("\n");

    // Bubble sort 실행
    bubble(arr1, n);
    printf("After bubble sort:\n");
    print_array(arr1, n);
    printf("\n");

    // Insertion sort 실행
    insertion(arr2, n);
    printf("After insertion sort:\n");
    print_array(arr2, n);
    printf("\n");

    // Selection sort 실행
    selection(arr3, n);
    printf("After selection sort:\n");
    print_array(arr3, n);
    printf("\n");

    return 0;
}