#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &a, int left, int middle, int right)
{
    int sizeOfArrayOne = middle - left + 1;
    int sizeOfArrayTwo = right - middle;

    auto *ArrayOne = new int[sizeOfArrayOne];
    auto *ArrayTwo = new int[sizeOfArrayTwo];

    for (int i = 0; i < sizeOfArrayOne; i++)
    {
        ArrayOne[i] = a[left + i];
    }
    for (int i = 0; i < sizeOfArrayTwo; i++)
    {
        ArrayTwo[i] = a[middle + 1 + i];
    }
    int i = 0;    // indexOfArrayOne
    int j = 0;    // indexOfArrayTwo
    int k = left; // indexOfMergedArray

    while (i < sizeOfArrayOne && j < sizeOfArrayTwo)
    {
        if (ArrayOne[i] <= ArrayTwo[j]) // To make the sorting STABLE '=' should be written here.
        {
            a[k] = ArrayOne[i];
            i++;
        }
        else
        {
            a[k] = ArrayTwo[j];
            j++;
        }
        k++;
    }

    while (i < sizeOfArrayOne)
    {
        a[k] = ArrayOne[i];
        i++;
        k++;
    }

    while (j < sizeOfArrayTwo)
    {
        a[k] = ArrayTwo[j];
        j++;
        k++;
    }

    delete ArrayOne;
    delete ArrayTwo;
}

void MergeSort(vector<int> &a, int begin, int end) // Time Complexity: O(n log(n))  &&  Auxiliary Space: O(n)
{
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;

    MergeSort(a, begin, mid);
    MergeSort(a, mid + 1, end);
    Merge(a, begin, mid, end);
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

    cout << "Enter the elements of an array: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    MergeSort(arr, 0, size - 1);

    cout << "Sorted Array: ";
    PrintArray(arr, size);

    return 0;
}

// MergeSort is a Divide and Conquer algorithm.

// MergeSort is stable.

// MergeSort is preferred over QuickSort for Linked Lists.

//  Merge sort NOT In-Place algorithm.

// The merge sort algorithm requires an additional memory space of 0(n) for the temporary array.