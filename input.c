#include <stdio.h>

/* 将输入复制到输出 */

int main(int argc, char const *argv[])
{
    int c; // 输入内容

    while ((c = getchar()) != EOF)
    {
        printf("%c", c);
        // putchar(c);
    }
    return 0;
}
