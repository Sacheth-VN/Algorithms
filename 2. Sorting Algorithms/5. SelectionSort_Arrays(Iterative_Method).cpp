#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int> &a, int &s) // Time Complexity: O(n^2)  &  Auxiliary Space: O(1)
{
    int min_idx; // Index of the minimum element

    for (int i = 0; i < s - 1; i++)
    {
        min_idx = i;
        for (int j = i + 1; j < s; j++)
        {
            if (a[j] < a[min_idx])
            {
                min_idx = j;
            }
        }
        if (min_idx != i)
        {
            swap(a[i], a[min_idx]);
        }
    }
}

void PrintArray(vector<int> &a, int &size)
{
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << '\t';
    }
}

int main()
{
    vector<int> arr;
    int size;

    cout << "Enter the number of elements in the array: ";
    cin >> size;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    SelectionSort(arr, size);

    cout << "Sorted array is: ";
    PrintArray(arr, size);

    return 0;
}

// The default implementation of SelectionSort is not stable.

//  Selection Sort Algorithm in-place since it does not require extra space.