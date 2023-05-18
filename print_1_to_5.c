#include <stdio.h>
void func(int i)
{
    // Base Case
    if (i == 6)
        return;
    printf("%d\n", i);
    func(i + 1);
}
int main()
{
    func(1);
    return 0;
}