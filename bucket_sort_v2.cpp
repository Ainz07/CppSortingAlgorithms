// This program implements the bucket sort algorithm to sort an array of floating-point numbers.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(vector<float>& arr) {
    int n = arr.size();
    if (n <= 0) return;

    float maxVal = *max_element(arr.begin(), arr.end());
    vector<vector<float>> buckets(n);

    for (float num : arr) {
        int index = static_cast<int>(n * num / maxVal);
        if (index == n) index--;
        buckets[index].push_back(num);
    }

    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    auto it = arr.begin();
    for (int i = 0; i < n; i++) {
        it = copy(buckets[i].begin(), buckets[i].end(), it);
    }
}

int main() {
    int n;
    cin >> n;

    vector<float> array(n);
    for (int i = 0; i < n; i++) cin >> array[i];

    bucketSort(array);

    for (float num : array) cout << num << " ";
    cout << endl;

    return 0;
}
