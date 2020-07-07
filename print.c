#include <stdio.h>

int main(int argc, char const *argv[])
{
    // 打印普通字符串
    printf("Hello, world\n");

    // %d 按十进制打印 int 类型参数
    int x = 0xff;
    printf("x 的十进制: %d\n", x);
    printf("x 的八进制: %o\n", x);
    printf("x 的十六进制: %x\n", x);

    // %f 打印 float 类型参数, 默认保留 6 位小数, 即等效于 %.6f
    float y = 9.0 / 1.7;
    printf("y 按浮点数打印: %f\n", y);
    printf("y 按浮点数保留 0 位小数打印: %.0f\n", y);
    printf("y 按浮点数保留 3 位小数打印: %.3f\n", y);

    // %c 打印字符
    char c = 'A'; // 单引号包裹单个字符
    printf("字符 c 为: %c\n", c);

    // %s 打印字符串
    char name[] = "孙潇野"; // 双引号包裹多个字符, 编译器会在末尾自动加上 "\0" 标示字符串结束
    char username[] = "sxy960806";
    char password[] = "*********";
    printf("用户信息:\n");
    printf("\t姓名: %s\n", name);
    printf("\t用户名: %s\n", username);
    printf("\t密码: %s\n", password);

    // %% 打印百分数
    printf("及格率为 %f%%", 1.0 / 3.0);
    return 0;
}
