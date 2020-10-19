#include<iostream>
using namespace std;

void rotate_one(int arr[], int n)
{
    int temp = arr[0];
    for (int i =1; i <=n-1; i++)
        arr[i-1] = arr[i];
    arr[n-1] = temp;
}
void rotate_array_left(int arr[], int k, int n)
{
    for (int i = 0; i < k; i++)
        rotate_one(arr, n);
}
int main()
{
        int n, k, a;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        rotate_array_left(arr, k, n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
}
