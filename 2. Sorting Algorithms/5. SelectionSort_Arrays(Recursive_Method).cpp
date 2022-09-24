#include <iostream>
#include <vector>
using namespace std;

int minIndex(vector<int> a, int i, int j)
{
    if (i == j)
    {
        return i;
    }
    int k = minIndex(a, i + 1, j);

    if (a[i] < a[k])
    {
        return i;
    }
    else
    {
        return k;
    }
}

void SelectionSort(vector<int> &a, int &s, int index = 0) // Time Complexity: O(n^2)  &  Auxiliary Space: O(1)
{
    if (index == s)
    {
        return;
    }

    int k = minIndex(a, index, s - 1);

    if (k != index)
    {
        swap(a[k], a[index]);
    }

    SelectionSort(a, s, index + 1);
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

    cout << "Sorted Array is: ";
    PrintArray(arr, size);

    return 0;
}

// The default implementation of SelectionSort is not stable.

//  Selection Sort Algorithm in-place since it does not require extra space.