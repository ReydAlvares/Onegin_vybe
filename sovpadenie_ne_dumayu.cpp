#include <stdio.h>
#include <string.h> //занести сюда свою функцию подсчёта длины строки...

int string_compare_function(char for_compare_1[], char for_compare_2[]);
int main()
{
    char biba[] = "boba133";
    char boba[] = "boba133";

    printf("%s\n", string_compare_function(biba, boba)? "NO SAME": "SAME");
    return 0;
}

int string_compare_function(char for_compare_1[], char for_compare_2[])
{
    int order = 0;
    size_t length_1 = strlen(for_compare_1);
    size_t length_2 = strlen(for_compare_2);

    if(length_1 != length_2)
        return 1;

    while(for_compare_1[order] != 0 && for_compare_2[order] != 0)
    {
        if(for_compare_1[order] == for_compare_2[order])
        {
            order++;
            continue;
        }
        else
            return 1;
    }
    return 0;
}