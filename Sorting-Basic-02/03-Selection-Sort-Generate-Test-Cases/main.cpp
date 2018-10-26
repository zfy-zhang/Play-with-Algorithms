#include <iostream>
#include "SortTestHelper.h"

using namespace std;

template<typename T>
void selectionSort(T arr[], int n){

    for(int i = 0 ; i < n ; i ++){

        int minIndex = i;
        for( int j = i + 1 ; j < n ; j ++ )
            if( arr[j] < arr[minIndex] )
                minIndex = j;

        swap( arr[i] , arr[minIndex] );
    }
}


int main() {

    // 测试排序算法辅助函数
    int n = 20000;
    int *arr = SortTestHelper::generateRandomArray(n,0,100000);
    selectionSort(arr,n);
    SortTestHelper::printArray(arr,n);

    delete[] arr;

    return 0;
}