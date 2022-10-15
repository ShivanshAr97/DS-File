#include <stdio.h>
int main()
{
    int size ,search;
    int ans = -1;
    printf("Size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Element to be searched: ");
    scanf("%d", &search);

    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == search)
        {
            ans = mid;
            break;
        }
        else if (arr[mid] > search)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    printf("Location: %d", ans);
    return 0;
}
