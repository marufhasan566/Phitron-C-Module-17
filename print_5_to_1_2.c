#include <stdio.h>
void func(int i)
{
    // Base Case
    if (i == 6)
        return;
    func(i + 1);
    printf("%d\t", i);
}

int main()
{
    func(1);
    return 0;
}