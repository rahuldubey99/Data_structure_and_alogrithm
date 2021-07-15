#include <iostream>
using namespace std;

int bsearch(int arr[], int low, int high, int x)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (arr[mid] == x)
        return mid;
    else if (arr[mid] > x)
        return bsearch(arr, low, mid - 1, x);
    else
        return bsearch(arr, mid + 1, high, x);
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, x = 5;
    int res = bsearch(arr, 0, 4, x);
    if (res != -1)
    {
        cout << "search successful index :" << res << endl;
    }
    else
    {
        cout << "search failed";
    }

    return 0;
}