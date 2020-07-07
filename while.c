#include <stdio.h>

#define LOWER 0   // 温度表的下限
#define UPPER 300 // 温度表的上限
#define STEP 20   // 步长

/*
    利用 while 循环来实现
    当fahr = 0, 20, ..., 300时, 分别打印华氏温度和摄氏温度对照表
*/

int main(int argc, char const *argv[])
{
    float fahr, celsius;

    printf("华氏温度\t摄氏温度\n");
    fahr = LOWER;
    while (fahr <= UPPER)
    {
        // int 类型相除其结果会被舍位, 即 5 / 9 = 0
        // float 类型相除其结果不会被舍位, 即 5.0 / 9.0 = 0.555556
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        // %d 按十进制打印 int 类型参数
        // %f 打印 float 类型参数
        printf("%3.0f℉ %10.1f℃\n", fahr, celsius);
        fahr = fahr + STEP;
    }
    return 0;
}
