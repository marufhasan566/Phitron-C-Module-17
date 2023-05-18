#include <stdio.h>
void world()
{
    printf("World Function Starts\n");
    printf("World Function Ends\n");
}
void hello()
{
    printf("Hello Function Starts\n");
    world();
    printf("Hello Function Ends\n");
}
int main()
{
    printf("Main Function Starts\n");
    hello();
    printf("Main Function Ends\n");
    return 0;
}