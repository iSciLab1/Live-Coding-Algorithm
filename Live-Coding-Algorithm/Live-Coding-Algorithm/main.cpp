#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> genPacTringle(int numOfRow) {
    vector<vector<int>> tringle;
    for (int i = 0; i < numOfRow; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = tringle[i-1][j-1] + tringle[i-1][j];
        }
        tringle.push_back(row);
    }
    return tringle;
}

int main() {
    int numOfRow = 6;
    vector<vector<int>> tringle = genPacTringle(numOfRow);
    //for (int i = 0; i < numOfRow; i++) {
    //    for (int j = 0; j < i+1; j++) {
    //        cout << tringle[i][j] << ", ";
    //    }
    //    cout << endl;
    //}

    for (auto row: tringle) {
        for (auto col: row) {
            cout << col << ", ";
        }
        cout << endl;
    }

    return 0;
}
