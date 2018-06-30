#include <stdio.h>

#define ESC "\x1b"
#define CSI "\x1b["

#define RED ESC "[31m"
#define WHITE ESC "[37m"
#define BYELLOW ESC "[33m"
#define EXT ESC "[38;5m"
 
void print_at(int row, int col, const char *str)
{
    printf("%s[%d;%dH%s", ESC, row, col, str);
}

int main()
{

    print_at(1, 2, RED "Hello World" WHITE);
    print_at(1, 20, BYELLOW "Hello World" WHITE);

    print_at(1, 40, EXT "Hello World" WHITE);

    get_key();
    printf("%c", 0x6a);
    return 0;
}