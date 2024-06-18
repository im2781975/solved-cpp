#include <stdio.h>
int main()
{
    char arr[6] = { 'G', 'e', 'e', 'k', 's' };
    int i = 0;
    while (arr[i]) {
        printf("%c", arr[i++]);
    }
    return 0;
}
