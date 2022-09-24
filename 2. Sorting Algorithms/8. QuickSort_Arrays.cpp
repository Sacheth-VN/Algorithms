#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int> &a, int low, int high)
{
    int i = low;        // indexOflowerPartition
    int j = high;       // indexOfHigherPartition
    int pivot = a[low]; // referenceValue

    while (i < j)
    {
        while (a[i] <= pivot)
        {
            i++;
        }
        while (a[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            swap(a[i], a[j]);
        }
    }
    swap(a[low], a[j]);

    return j;
}

void QuickSort(vector<int> &a, int left, int right) //  Time Complexity: O(n log(n))  &&  Auxiliary Space: O(n)
{
    if (right - left <= 1)
    {
        return;
    }

    int pivot = Partition(a, left, right);

    QuickSort(a, left, pivot - 1);
    QuickSort(a, pivot + 1, right);
}

void PrintArray(vector<int> &a, int &s)
{
    for (int i = 0; i < s; i++)
    {
        cout << a[i] << '\t';
    }
}

int main()
{
    vector<int> arr;
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    QuickSort(arr, 0, size - 1);

    cout << "Sorted array: ";
    PrintArray(arr, size);

    return 0;
}

// QuickSort is a Divide and Conquer algorithm.

// The worst case occurs when the partition process always picks the greatest or smallest element as the pivot.
// Time Complexity in worst case : O(n^2)

// The best case occurs when the partition process always picks the middle element as the pivot.

// The default implementation is NOT stable.

// Quick Sort is preferred over MergeSort for sorting Arrays.