#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// �鲢������������
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;

    int n1 = mid - left + 1;
    int n2 = right - mid;

    // ������ʱ����
    int L[n1], R[n2];

    // �����ݸ��Ƶ���ʱ����
    for (i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // �ϲ���ʱ����
    i = 0; // �������������
    j = 0; // �������������
    k = left; // �ϲ������������
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

    // ����ʣ��Ԫ��
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

// �鲢����
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // �ָ����飬�ֱ���й鲢����
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // �鲢�����������
        merge(arr, left, mid, right);
    }
}

// ��ӡ����Ԫ��
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

    printf("ԭʼ����: ");
    printArray(arr, size);

    mergeSort(arr, 0, size - 1);

    printf("����������: ");
    printArray(arr, size);

    return 0;
}
