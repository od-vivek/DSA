#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[], int n) {
    for (int i = 0; i <= n - 1; i++) {
        int j = i;
        while (j > 0 && arr[j - 1] > arr[j]) {
            int temp = arr[j - 1];
            arr[j - 1] = arr[j];
            arr[j] = temp;
            j--;
        }
    }

    cout << "After Using insertion sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertion_sort(arr, n);
    return 0;
}

/*
Properties of Insertion Sort:

Time Complexity: The average and worst-case time complexity of insertion sort is O(n^2), where n is the number of elements in the array. This makes it inefficient for large lists.

Space Complexity: Insertion sort is an in-place sorting algorithm, meaning it requires only a constant amount of additional space O(1) for storing temporary variables. This makes it memory efficient.

Stability: Insertion sort is a stable sorting algorithm. This means that if two elements have the same value, their relative order will be preserved after sorting.

Adaptive: Insertion sort is adaptive, meaning it performs well on partially sorted arrays. The time complexity reduces if the array is already partially sorted.

Use Cases: Insertion sort is suitable for sorting small arrays or nearly sorted arrays. It's often used in practice when the array size is small or the input is already almost sorted, as its simplicity can lead to better performance in those cases compared to more complex algorithms.*/