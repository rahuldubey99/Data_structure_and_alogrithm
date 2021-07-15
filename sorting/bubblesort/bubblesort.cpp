#include <iostream>
using namespace std;

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    bubblesort(arr, 10);
    for (size_t i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}
