#include <stdio.h>

int Max(int arr[], int n)
{
    int max = arr[0], cur = arr[0],i;

    for(i=1;i<n;i++)
    {
        if(cur + arr[i] > arr[i])
            cur += arr[i];
        else
            cur = arr[i];

        if(cur > max)
            max = cur;
    }

    return max;
}

int main()
{
    int arr[100], temp[100];
    int n, i, total = 0;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        total += arr[i];
        temp[i] = -arr[i];
    }

    int maxNormal = Max(arr, n);
    int maxCircular = total + Max(temp, n);

    if(maxCircular > maxNormal)
        printf("Maximum Circular Sum = %d", maxCircular);
    else
        printf("Maximum Circular Sum = %d", maxNormal);

    return 0;
}
