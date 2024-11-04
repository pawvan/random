#include <stdio.h>

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 7},
        {6, 8, 9}
    };
    int value = matrix[1][2];
    printf("%d\n", value);
    return 0;
}
