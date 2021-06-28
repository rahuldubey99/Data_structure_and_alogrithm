#include <iostream>
using namespace std;

int firstOccurence(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        cout << mid << endl;
        if (arr[mid] > x)
            high = mid - 1;
        else if (arr[mid] < x)
            low = mid + 1;
        else
        {
            if (mid == 0 || (arr[mid - 1] != arr[mid]))
            {
                return mid;
            }
            else
                high = mid - 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 5, 5, 5, 5, 7, 8}, x = 5;
    int res = firstOccurence(arr, 8, x);
    if (res != -1)
    {
        cout << "first occurrence of " << x << " index:" << res << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}
