#include<bits/stdc++.h>
using namespace std;
const int M = 10, N =10;
int main()
{
    int i, j, a = 0, b = 0, matrix[N][M];
    for(i = 0; i < N; i++){
        a += i;
        matrix[i][i] = a;
    }
    for(j = 0; j < M; j++){
        b += 2*j;
        cout << b << " ";
    }
    cout << "\n";
    for(int i = 0; i < N; i++){
        for(int j =0; j < M; j++){
            if(i == j)
                cout << matrix[i][j] << " ";
        }
    }
}
