#include <stdio.h>

int main()
{
    printf("\x1b]2;This is the window title\x07");
    printf("\x1b[\x1a");
    return 0;
}