#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;


int main() {
    vector<vector<char>> board1 {
        {'1','2','.','.','3','.','.','.','.'},
        {'4','.','.','5','.','.','.','.','.'},
        {'.','9','1','.','.','.','.','.','3'},
        {'5','.','.','.','6','.','.','.','4'},
        {'.','.','.','8','.','3','.','.','5'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','.','.','.','.','.','2','.','.'},
        {'.','.','.','4','1','9','.','.','8'},
        {'0','.','.','.','8','.','.','7','9'}
    };


    for (auto row : board1) {
        unordered_map<char,int> rowHash;
        for (int i {0}; i < 9; i++) {
            if (row[i] >= '1' && row[i] <= '9') rowHash[row[i]]++;
            if (rowHash[row[i]] > 1) return 1;
        }
    }


    for (int i {0}; i < 9; i++) {
        unordered_map<char,int> colHash;
        for (int j {0}; j < 9; j++) {
            if (board1[j][i] != '.')colHash[board1[j][i]]++;
            if (colHash[board1[j][i]] > 1) return 1;
        }
    }

    unordered_map<int,unordered_map<char,int>> boxHash;
    for (int row {0}; row < 9; row++) {
        for (int col {0}; col < 9; col++) {
            int square {(row/3) * 3 + (col/3)};
            if (board1[col][row] != '.') boxHash[square][board1[col][row]]++;
            if (boxHash[square][board1[col][row]] > 1) return 1;
        }
    }




    return 0;
}