// in this find peak element not smaller than neighbour

#include <iostream>
using namespace std;

int peakGet(int arr[], int n)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            return mid;
        if (mid > 0 && arr[mid - 1] >= arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5, 20, 40, 30, 20, 80, 60};
    int res = peakGet(arr, 7);
    if (res != -1)
        cout << "result : " << arr[res] << endl;
    else
        cout << "not found";
    return 0;
}
