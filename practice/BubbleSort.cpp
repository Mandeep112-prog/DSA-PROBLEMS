#include <iostream>
using namespace std;

//for sorting array using bubble sort
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
// for sorted array printing
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {5, 4, 1, 3, 6, 2};
    int n = sizeof(arr) / sizeof(int);
    bubbleSort(arr, n);
    printArr(arr, n);
    return 0;
}