#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int flag = 0;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (!flag)
            break;
    }
}
int main()
{
    int arr[] = {4, 2, 6, 3, 5, 0, 9, 8, 1}, n = 10;
    bubble_sort(arr, 9);
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", arr[i]);
    }
}