#include <stdio.h>

#define ESC "\x1b"

#define RESET "\033[0m"
#define RED "\033[31m"     
#define GREEN "\033[32m"   
#define YELLOW "\033[33m"  
#define BLUE "\033[34m"    
#define MAGENTA "\033[35m" 
#define CYAN "\033[36m"    
void print_at(int row, int col, const char *str)
{
    printf("%s[%d;%dH%s", ESC, row, col, str);
}
int main()
{
    print_at(5,35,RED"A "GREEN"DATAPOST "YELLOW"COMPUTER " CYAN"CENTRE");
    print_at(6,45,MAGENTA"MEHSANA");
    print_at(7,40, BLUE "+91 9825585300"RESET);
    return 0;
}