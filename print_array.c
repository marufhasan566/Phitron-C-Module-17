#include <stdio.h>
void func(int *arr, int n, int i)
{
    if (i == n)
        return;
    printf("%d\t", arr[i]);
    func(arr, n, i + 1);
}
int main()
{
    int count;
    scanf("%d", &count);
    int arr[count];
    for (int i = 0; i < count; i++)
    {
        scanf("%d", &arr[i]);
    }
    func(arr, count, 0);
    return 0;
}