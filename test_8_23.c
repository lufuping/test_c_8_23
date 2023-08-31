#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 归并两个有序数组
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 创建临时数组
    int L[n1], R[n2];

    // 将数据复制到临时数组
    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // 合并临时数组
    i = 0; // 左子数组的索引
    j = 0; // 右子数组的索引
    k = left; // 合并后数组的索引
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 复制剩余元素
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// 归并排序
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // 分割数组，分别进行归并排序
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // 归并已排序的数组
        merge(arr, left, mid, right);
    }
}

// 打印数组元素
void printArray(int arr[], int size) {
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = { 42, 23, 7, 16, 69, 37 };
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("原始数组: ");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("排序后的数组: ");
    printArray(arr, size);

    return 0;
}
