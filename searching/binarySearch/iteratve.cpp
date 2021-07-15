#include <iostream>
using namespace std;
int bsearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        else if (arr[mid] > x)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5}, x = 6;
    int res = bsearch(arr, 5, x);
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
