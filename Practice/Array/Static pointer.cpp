#include <stdio.h>
int* func()
{
    static int arr[5] = { 1, 2, 3, 4, 5 };
    return arr;
}
int main()
{
    int* ptr = func();
    printf("Array Elements: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *ptr++);
    }
    return 0;
}
