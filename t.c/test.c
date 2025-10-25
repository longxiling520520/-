#include <stdio.h>

int main() {
    float celsius;
    printf("请输入摄氏温度：");
    scanf("%f", &celsius);
    float fahrenheit = celsius * 9.0 / 5.0 + 32;
    printf("华氏温度为：%.1f\n", fahrenheit);
    return 0;
}