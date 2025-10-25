#include <stdio.h>

int main() {
    int score;
    printf("请输入学生成绩（0-100）：");
    scanf("%d", &score);
    if (score >= 90 && score <= 100) {
        printf("A\n");
    } else if (score >= 80 && score <= 89) {
        printf("B\n");
    } else if (score >= 70 && score <= 79) {
        printf("C\n");
    } else if (score >= 60 && score <= 69) {
        printf("D\n");
    } else {
        printf("E\n");
    }
    return 0;
}
