#include <iostream>
#include <vector>
using namespace std;

//  1.Recursive implementation of Binary Search:

int BinarySearch(vector<int> &a, int left, int right, int k) // Time Complexity: O(log n)  &  Auxiliary Space: O(log n)
{
    if (right >= left)
    {
        int mid = left + (right - left) / 2;

        if (a[mid] == k)
        {
            return mid;
        }
        else if (k > a[mid])
        {
            return BinarySearch(a, mid + 1, right, k);
        }
        else if (k < a[mid])
        {
            return BinarySearch(a, left, mid - 1, k);
        }
    }
    return -1;
}

int main()
{
    vector<int> arr; // Array
    int size;        // No of Elements
    int key;         // Element to be searched
    int result;      // Position of key

    cout << "Enter the Number of elements in array: ";
    cin >> size;

    cout << "Enter array elements: ";
    for (int i = 0; i < size; i++)
    {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "Enter the element to be searched in array: ";
    cin >> key;

    result = BinarySearch(arr, 0, size - 1, key);

    if (result >= 0)
    {
        cout << "Element is in the index " << result + 1;
    }
    else
    {
        cout << "Element not found!!!";
    }

    return 0;
}