#include <iostream>
#include <vector>
using namespace std;

// Iterative Implementation of BubbleSort.

void BubbleSort(vector<int> &a, int &s) // Time Complexity: O(N2)  &&  Auxiliary Space: O(1)
{
    for (int i = 0; i < s - 1; i++)
    {
        for (int j = 0; j < (s - 1 - i); j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
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

    cout << "Enter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    BubbleSort(arr, size);

    cout << "Sorted Array: ";
    PrintArray(arr, size);

    return 0;
}

// The worst-case condition for Bubble Sort occurs when elements of the array are arranged in decreasing order.

// The Bubble Sort algorithm is STABLE.

// Bubble sort algorithm is an in-place algorithm.