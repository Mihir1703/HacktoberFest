#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
void merge(int *arr, int l, int m, int r)
{
    int n1 = m + 1 - l, n2 = r - m, arr1[n1], arr2[n2];
    for (int i = 0; i < n1; i++)
    {
        arr1[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr2[i] = arr[m + 1 + i];
    }
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] >= arr2[j])
        {
            arr[l + k] = arr2[j];
            k++;
            j++;
        }
        else
        {
            arr[l + k] = arr1[i];
            k++;
            i++;
        }
    }
    for (int z = i; z < n1; z++)
    {
        arr[l + k] = arr1[z];
        k++;
    }
    for (int z = j; z < n2; z++)
    {
        arr[l + k] = arr2[z];
        k++;
    }
}
void MergeSort(int *arr, int l, int r)
{
    int mid = (l + r) / 2;
    if (l < r)
    {
        MergeSort(arr, l, mid);
        MergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    MergeSort(arr, 0, n - 1);
    printArray(arr, n);
}
int main()
{
    solve();
}
