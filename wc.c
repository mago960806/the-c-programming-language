#include <stdio.h>

#define IN 1  // 在单词内
#define OUT 0 // 在单词外

/*
    统计输入内容的行数, 单词数和字符数
    Windows 按 Ctrl + Z 结束程序
    *nix 按 Ctrl + D 结束程序
*/

int main(int argc, char const *argv[])
{
    int c;     // 输入内容
    int nl;    // 行数
    int nw;    // 单词数
    int nc;    // 字符数
    int state; // 状态

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF)
    {
        ++nc;
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            ++nw;
        }
    }
    printf("内容的行数为: %d\n", nl);
    printf("内容的单词数为: %d\n", nw);
    printf("内容的字符数为: %d\n", nc);
    return 0;
}
