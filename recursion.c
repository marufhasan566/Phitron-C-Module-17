#include <stdio.h>
void func()
{
    printf("Fun\n");
    func();
}
int main()
{
    func();
    return 0;
}