#include<bits/stdc++.h>
using namespace std;
const int N=10, M=10;
int main()
{
    int a = 0, b = 0, i, j;
    int matrix[N][M];
    for (i = 0; i < N; i++)
    {
        a = a + i;
        matrix[i][i] = a;
    }
    for (j = 0; j < M; j++)
    {
        b = b + 2 * j;
    }
    cout<< matrix[i][j]<<" "<<b;
}
