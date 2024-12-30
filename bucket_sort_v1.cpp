// This is a code on how to perform a Bucket Sort.

#include <iostream>
#include <algorithm>
using namespace std;

void bucketSort(int arr[], int n) {
    int max_val = *max_element(arr, arr + n);
    
    int bucket[max_val + 1] = {0};

    for (int i = 0; i < n; i++) {
        bucket[arr[i]]++;
    }

    for (int i = 0, j = 0; i <= max_val; i++) {
        while (bucket[i] > 0) {
            arr[j++] = i;
            bucket[i]--;
        }
    }
}

int main() {
    int n;
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    bucketSort(a, n);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}