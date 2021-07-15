#include <iostream>

using namespace std;

int lastOccurence(int arr[], int n, int x)
{
    int low = 0, high = n;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] < x)
            low = mid + 1;
        else if (arr[mid] > x)
            high = mid - 1;
        else
        {
            if (mid != mid - 1 || arr[mid] != arr[mid + 1])
            {
                return mid;
            }
            else
                low = mid + 1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 5, 5, 5, 5, 7, 8}, x = 5;
    int res = lastOccurence(arr, 8, x);
    if (res != -1)
    {
        cout << "last occurrence of " << x << " index:" << res << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    return 0;
}
