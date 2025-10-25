
#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("请输入两个整数和运算符（格式：a b op）：");
    scanf("%d %d %c", &a, &b, &op);
    switch (op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("除数不能为0\n");
            }
            break;
        default:
            printf("运算符输入错误\n");
    }
    return 0;
}
