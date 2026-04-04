// Quick sort

#include <stdio.h>

void qs(int arr[], int low, int high) {
    int i = low, j = high, pivot = arr[(low+high)/2], temp;

    while(i <= j) {
        while(arr[i] < pivot) i++;
        while(arr[j] > pivot) j--;

        if(i <= j) {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++; j--;
        }
    }
    if(low < j) qs(arr, low, j);
    if(i < high) qs(arr, i, high);
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    qs(arr, 0, n-1);

    for(i = 0; i < n; i++) printf("%d ", arr[i]);
}
