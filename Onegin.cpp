#include <stdio.h>
#include <string.h>
#define LENGTH 10000

void change_strings(const char** str1,const char** str2)
{
    const char* buf = *str1;
    *str1 = *str2;
    *str2 = buf;
}

int string_compare_function(const char* str1[], const char* str2[])
{
    int element_in_str = 0;

    while((*str1)[element_in_str] != '\0' && (*str2)[element_in_str] != '\0')
    {
        printf("Start compare\n");
        printf("element 1st str - %c, element 2st str - %c, element_in_str %d)\n", (*str1)[element_in_str], (*str2)[element_in_str], element_in_str);
        if((*str1)[element_in_str] != (*str2)[element_in_str])
        {
            break;
        }

        printf("is earlier\n");
        element_in_str++;
    }

    if((*str1)[element_in_str] <= (*str2)[element_in_str])
    {
        return 0;
    }

    printf("change\n");
    change_strings(str1, str2);
    return 1;
}

void print_strings(const char* str[])
{
    for(int i = 0; i < 3; i++)
    {
        printf("%s\n", str[i]);
    }
}

int main()
{
    const char* string_1[3] = {"zjdfkjfj", "fjdfkjfj", "4d"};

    for(int i = 0; i < 3; i++)
    {
        printf("length %d string = %d\n",i , (int)strlen(string_1[i]));
    }

    string_compare_function(&string_1[0],  &string_1[1]);
    print_strings(string_1);
    return 0;
}