// This is a code on how to do Merge Sort using Recursion by Love Babbar.

#include <iostream>
using namespace std;

void merge(int input[], int first_val, int mid_val, int last_val)
{
    int output[last_val - first_val + 1];
    int i = first_val;
    int j = mid_val + 1;
    int k = 0;
    while (i <= mid_val && j <= last_val)
    {
        if (input[i] < input[j])
        {
            output[k] = input[i];
            i++;
            k++;
        }
        else
        {
            output[k] = input[j];
            j++;
            k++;
        }
    }

    while (i <= mid_val)
    {
        output[k] = input[i];
        i++;
        k++;
    }
    while (j <= last_val)
    {
        output[k] = input[j];
        j++;
        k++;
    }

    int n = 0;
    for (int i = first_val; i <= last_val; i++)
    {
        input[i] = output[n];
        n++;
    }
}

void mergeSort(int input[], int first_val, int last_val)
{
    if (first_val >= last_val)
        return;
    int mid_val = (first_val + last_val) / 2;
    mergeSort(input, first_val, mid_val);
    mergeSort(input, mid_val + 1, last_val);
    merge(input, first_val, mid_val, last_val);
}

void print(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    mergeSort(a, 0, n - 1);

    print(a, n);
    return 0;
}
