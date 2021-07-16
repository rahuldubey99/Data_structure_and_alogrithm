#include <iostream>
using namespace std;

void LASubarray(int arr[], int n)
{
    int ans = 2;
    int pd = arr[1] - arr[0];
    int j = 0;
    int curr = 2;
    while (j < n)
    {
        if (pd == arr[j] - arr[j - 1])
            curr++;
        else
        {
            pd = arr[j] - arr[j - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        j++;
    }
    cout << ans << endl;
}
int main(int argc, char const *argv[])
{
    int arr[] = {10, 7, 4, 6, 8, 10, 11};
    LASubarray(arr, 7);

    return 0;
}