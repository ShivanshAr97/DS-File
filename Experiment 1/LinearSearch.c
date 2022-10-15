#include <stdio.h>
int main()
{
    int size, search;
    int ans = -1;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];
    printf("Array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Element to be searched: ");
    scanf("%d", &search);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            ans = i;
            break;
        }
    }
    printf("Location: %d", ans);

    return 0;
}