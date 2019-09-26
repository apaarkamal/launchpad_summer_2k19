#include<bits/stdc++.h>

using namespace std;

int grid[100][100], n;

void clear_grid() {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            grid[i][j] = 0;
        }
    }
}

void print() {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (grid[i][j]) cout << "Q ";
            else cout << ". ";
        }
        cout << '\n';
    }
    cout << '\n';
    return ;
}

bool can_be_placed(int row, int col) {
    int ii = row, jj = col;
    while (ii >= 0) {
        if (grid[ii][jj] == 1) {
            return false;
        }
        ii--;
    }
    ii = row; jj = col;
    while (ii >= 0 && jj >= 0) {
        if (grid[ii][jj] == 1) {
            return false;
        }
        ii--; jj--;
    }
    ii = row; jj = col;
    while (ii >= 0 && jj < n) {
        if (grid[ii][jj] == 1) {
            return false;
        }
        ii--; jj++;
    }
    return true;
}

void nqueen(int currow) {
    if (currow == n) {
        print();
        return ;
    }
    int i, j;
    for (i = 0; i < n; i++) {
        if (can_be_placed(currow, i)) {
            grid[currow][i] = 1;
            nqueen(currow + 1);
            grid[currow][i] = 0;
        }
    }
}

int main()
{
    //  code starts
    cin >> n;
    clear_grid();
    nqueen(0);
}
