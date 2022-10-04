#include <stdio.h>
#include <string.h>

int main(void)
{
    char hex[9];
    unsigned int decimal = 0;
    int i = 0;
    scanf("%s", hex);
    int hex_len = strlen(hex);
    for (i = 0; i < hex_len; i++)
    {
        decimal *= 16;
        if (hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += hex[i] - '0';
        }
        else
        {
            decimal += (hex[i] + 10);
        }
    }

    return 0;
}