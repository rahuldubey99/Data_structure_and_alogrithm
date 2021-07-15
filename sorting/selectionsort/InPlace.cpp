#include <iostream>
using namespace std;
void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int mid_index = i;
        for (int j = i + 1; j < n; j++)
        {
            /* code */
            if (arr[j] < arr[mid_index])
            {
                mid_index = j;
            }

            int temp = arr[mid_index];
            arr[mid_index] = arr[i];
            arr[i] = temp;
        }
    }
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    selectionsort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i];
    }

    return 0;
}