#include <iostream>
#include <vector>
using namespace std;

// Recersive Implementation of BubbleSort.

void BubbleSort(vector<int> &a, int s) // Time Complexity: O(N2)  &&  Auxiliary Space: O(1)
{
    if (s <= 1)
    {
        return;
    }
    for (int i = 0; i < s - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            swap(a[i], a[i + 1]);
        }
    }
    BubbleSort(a, s - 1);
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