// Binary search with recursion

#include <stdio.h>

int bs(int arr[], int low, int high, int key) {
    if(low > high) return -1;
    int mid = (low + high) / 2;

    if(arr[mid] == key) return mid;
    if(arr[mid] < key) return bs(arr, mid + 1, high, key);
    return bs(arr, low, mid - 1, key);
}

int main() {
    int n, i, key, res;
    scanf("%d", &n);
    int arr[n];
    for(i = 0; i < n; i++) scanf("%d", &arr[i]);
    scanf("%d", &key);

    res = bs(arr, 0, n - 1, key);
    if(res != -1) printf("Found at %d", res + 1);
    else printf("Not found");
}
