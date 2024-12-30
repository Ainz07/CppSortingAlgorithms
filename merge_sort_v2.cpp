// This is a code on how to do Merge Sort using Recursion from Schaum.

#include <iostream>
using namespace std;

void merge(int a[], int n1, int n2)
{
    int temp[n1 + n2];
    int i = 0, j1 = 0, j2 = 0;
    
    while (j1 < n1 && j2 < n2)
    {
        temp[i++] = (a[j1] <= a[n1 + j2] ? a[j1++] : a[n1 + j2++]);
    }

    while (j1 < n1) temp[i++] = a[j1++];
    
    while (j2 < n2) temp[i++] = (a + n1)[j2++];
    
    for (i = 0; i < n1 + n2; i++) a[i] = temp[i];
}

void mergeSort(int a[], int n)
{
    if (n > 1)
    {
        int n1 = n / 2;
        int n2 = n - n1;
        mergeSort(a, n1);
        mergeSort(a + n1, n2);
        merge(a, n1, n2);
    }
}

int main()
{
    int n; 
    cin >> n;
    
    int a[n];
    for (int i = 0; i < n; ++i) cin >> a[i];
    
    mergeSort(a, n);

    for (int i = 0; i < n; ++i) cout << a[i] << " ";
    
    return 0;
}