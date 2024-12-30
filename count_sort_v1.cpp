// This is a code on how to perform a Count Sort.

#include <iostream>
using namespace std;

#define RANGE 10

void countSort(int arr[], int n)
{
    int output[n];
    int count[RANGE + 1] = {0};

    for (int i = 0; i < n; ++i) ++count[arr[i]];

    for(int i = 1; i <= RANGE; ++i) count[i] += count[i - 1];

    for (int i = n - 1; i >= 0; --i)
    {
        output[count[arr[i]] - 1] = arr[i];
        --count[arr[i]];
    }

    for (int i = 0; i < n; ++i) arr[i] = output[i];
}

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    countSort(a, n);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}
