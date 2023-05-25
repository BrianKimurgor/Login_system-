/*
*/
#include <stdio.h>
int main(void)
{
    char upper_case;
    char lower_case;
    //printing lower case
    for(lower_case = 'a'; lower_case <= 'z'; lower_case++)
    {
        putchar(lower_case);

    }
    putchar('\n');
    //printing upper case
    for(upper_case = 'A'; upper_case <= 'Z'; upper_case++)
    {
        putchar(upper_case);

    }
    return 0;
}