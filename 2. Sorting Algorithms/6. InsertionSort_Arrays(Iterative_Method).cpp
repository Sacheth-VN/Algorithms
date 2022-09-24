#include <iostream>
#include <vector>
using namespace std;

// Iterative Method of Insertion Sort

void InsertionSort(vector<int> &a, int &s) // Time Complexity: O(N^2)  &&  Auxiliary Space: O(1)
{
    int i, j, key;
    for (i = 1; i < s; i++)
    {
        key = a[i];
        j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            --j;
        }
        a[j + 1] = key;
    }
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

    cout << "Enter the number of elements in an array: ";
    cin >> size;

    cout << "Enter the array elements: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    InsertionSort(arr, size);

    cout << "Sorted array: ";
    PrintArray(arr, size);

    return 0;
}

// Insertion sort takes maximum time to sort if elements are sorted in reverse order.
// And it takes minimum time (Order of n) when elements are already sorted.

//  Insertion sort is an in-place sorting algorithm.

// Insertion sort is a stable sorting algorithm.