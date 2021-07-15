// array is sorted but rotated
#include <iostream>
using namespace std;

int rotatedsearch(int arr[], int n, int x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
            return mid;
        if (x < arr[mid])
        {
            if (x >= arr[low] && x < arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }
        else
        {
            if (x > arr[mid] && x <= arr[high])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 20, 40, 60, 5, 8}, x = 2;
    int res = rotatedsearch(arr, 6, x);
    if (res != -1)
        cout << "succsfull index:" << res + 1 << endl;
    else
        cout << "not found";

    return 0;
}
