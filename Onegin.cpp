#include <stdio.h>
#include <string.h>
#define LENGTH 10000

void change_strings(const char** str1,const char** str2)
{
    const char* buf = *str1;
    *str1 = *str2;
    *str2 = buf;
}

int string_compare_function(const char* for_compare_1[], const char* for_compare_2[])
{
    int order = 0;

    while(*(*for_compare_1 + order) != '\0' && *(*for_compare_2 + order) != '\0')
    {
        printf("Start compare\n");
        printf("element 1st str - %c, element 2st str - %c, order %d)\n", *(*for_compare_1 + order), *(*for_compare_2 + order), order);
        if(*(*for_compare_1 + order) == *(*for_compare_2 + order))
        {
            printf("is same\n");
            order++;
            continue;
        }
        if(*(*for_compare_1 + order) > *(*for_compare_2 + order))
        {
            printf("change\n");
            change_strings(for_compare_1, for_compare_2);
            return 1;
        }
        printf("is earlier\n");
        order++;
        
    }
    printf("The end\n");
    return 0;
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