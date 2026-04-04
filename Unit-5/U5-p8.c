// Merge sort

#include <stdio.h>

void merge(int arr[], int l, int m, int h) {
    int i=l, j=m+1, k=l, temp[100];

    while(i<=m && j<=h)
        temp[k++] = (arr[i] < arr[j]) ? arr[i++] : arr[j++];

    while(i<=m) temp[k++] = arr[i++];
    while(j<=h) temp[k++] = arr[j++];

    for(i=l; i<=h; i++) arr[i] = temp[i];
}

void ms(int arr[], int l, int h) {
    if(l < h) {
        int m = (l+h)/2;
        ms(arr, l, m);
        ms(arr, m+1, h);
        merge(arr, l, m, h);
    }
}

int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];

    for(i = 0; i < n; i++) scanf("%d", &arr[i]);

    ms(arr, 0, n-1);

    for(i = 0; i < n; i++) printf("%d ", arr[i]);
}
