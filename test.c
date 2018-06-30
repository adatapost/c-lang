#include <stdio.h>
#include <wchar.h>
#include <windows.h>

#define ENABLE_VIRTUAL_TERMINAL_INPUT 0x0200

int main()
{
     
    HANDLE hIn = GetStdHandle(STD_INPUT_HANDLE);
    if (hIn == INVALID_HANDLE_VALUE)
    {
        printf("Invalid input handle!");
        return 0;
    }

    DWORD dwOriginalOutMode = 0;
    DWORD dwOriginalInMode = 0;
     
    if (!GetConsoleMode(hIn, &dwOriginalInMode))
    {
        printf("No console mode for input!");
        return 0;
    }

    
    DWORD dwRequestedInModes = ENABLE_VIRTUAL_TERMINAL_INPUT;

    DWORD dwInMode = dwOriginalInMode | ENABLE_VIRTUAL_TERMINAL_INPUT;
    if (!SetConsoleMode(hIn, dwInMode))
    {
       printf("Failed to set VT input mode, can't do anything here.");
        return -1;
    }

    printf("\x1b[\x1a");

    return 0;
}