#include <iostream>
#include <vector>
using namespace std;

// The pseudocode of the algorithm is the following:
//     Reversort(L):
//     for i := 1 to length(L) - 1
//         j := position with the minimum value in L between i and length(L), inclusive
//         Reverse(L[i..j])

void ReverseSort(vector<int> &a, int &s)
{
    for (int i = 0; i < s - 1; i++)
    {
        int min = a[i];
        int minIndex = i;

        for (int j = i + 1; j < s; j++)
        {
            if (a[j] < min)
            {
                min = a[j];
                minIndex = j;
            }
        }
        int start = i;
        int end = minIndex;
        while (start < end)
        {
            swap(a[start], a[end]);
            start++;
            end--;
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
    vector<int> L;
    int n;

    cout << "Enter the number of Elements in the ARRAY: ";
    cin >> n;
    cout << "Enter array elements : ";
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        L.push_back(num);
    }

    ReverseSort(L, n);

    cout << "Sorted Array : ";
    PrintArray(L, n);

    return 0;
}