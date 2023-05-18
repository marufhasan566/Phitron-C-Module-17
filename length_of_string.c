#include <stdio.h>
int func(char string[], int i)
{
    if (string[i] == '\0')
        return 0;
    int length = func(string, i + 1);
    return length + 1;
}
int main()
{
    char string[11] = "MarufHasan";
    int length = func(string, 0);
    printf("%d\n", length);
    return 0;
}