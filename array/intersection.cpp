#include <iostream>
using namespace std;
void intersection(int arr[], int arr1[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (i > 0 && arr[i] == arr[i - 1])
        {
            i++;
            continue;
        }
        if (arr[i] < arr1[j])
        {
            i++;
        }
        else if (arr[i] > arr1[j])
        {
            j++;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {3, 5, 10, 10, 15, 15, 20};
    int arr2[] = {5, 10, 10, 15, 30};

    intersection(arr, arr2, 7, 5);

    return 0;
}
