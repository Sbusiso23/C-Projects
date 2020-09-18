#include <iostream>
using namespace std;

int main()
{
    short var_num;
    cin >> var_num;
    int *my_var = new int[var_num];
    for(int i = 0; i < var_num; i++){
        my_var[i] = 1;
    }
    for(int i = 0; i < var_num; i++){
        cout << my_var[i];
    }

}

/*
 int r, c;
    cin >> r >> c;
    int mat[r][c];

    cout << "Enter your values for the matrix\nOr type 'R' for a random matrix\n";

    for(int i = 0; i < r; i++)
        for(int j = 0; j < c; j++){
            cin >> mat[i][j];
        }

    for(int i = 0; i < c; i++){
        int [c];
    }
    for(int i = 0; i < c; i++){
        v[i] = mat[i][0];
        [i] = mat[i][0];

    }
     */