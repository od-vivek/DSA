#include <iostream>
#include <vector>

using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();

    // One by one move boundary of unsorted subarray
    for (int i = 0; i < n-1; i++) {
        // Find the minimum element in unsorted array
        int min_index = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        // Swap the found minimum element with the first element
        swap(arr[min_index], arr[i]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    selectionSort(arr);
    cout << "Sorted array: \n";
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}

/*
Time - O(N*2)
Space - O(1)
In place sorting
Relative order may not be preserved
Not adaptible ->doesn't take into account the pre-sortedness of the array.
It always performs the same number of comparisons and swaps regardless of the initial order of elements in the array.
*/