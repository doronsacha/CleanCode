#include <iostream>
#include <vector>

//Bad Code
bool doSomething(std::vector<std::vector<int>>& srh39fdfkdl) {
    // This function is supposed to check if the Sudoku is correct or not
    // But with these variable names, it's difficult to understand what's going on
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            int x1i90jjdk = srh39fdfkdl[i][j];
            for (int k = 0; k < 9; ++k) {
                if (k != j && srh39fdfkdl[i][k] == x1i90jjdk) return false;
                if (k != i && srh39fdfkdl[k][j] == x1i90jjdk) return false;
            }
            int boxStartRow = i - i % 3;
            int boxStartCol = j - j % 3;
            for (int k = 0; k < 3; ++k) {
                for (int l = 0; l < 3; ++l) {
                    if (k != i && l != j && srh39fdfkdl[boxStartRow + k][boxStartCol + l] == x1i90jjdk)
                        return false;
                }
            }
        }
    }
    return true;
}

//Good Code
bool isValidSudoku(const std::vector<std::vector<int>>& sudokuGrid) {
    for (int row = 0; row < 9; ++row) {
        for (int col = 0; col < 9; ++col) {
            int currentValue = sudokuGrid[row][col];
            
            // Check for duplicate values in the same row
            for (int i = 0; i < 9; ++i) {
                if (i != col && sudokuGrid[row][i] == currentValue) {
                    return false;
                }
            }
            
            // Check for duplicate values in the same column
            for (int j = 0; j < 9; ++j) {
                if (j != row && sudokuGrid[j][col] == currentValue) {
                    return false;
                }
            }
            
            // Check for duplicate values in the same 3x3 box
            int boxStartRow = 3 * (row / 3);
            int boxStartCol = 3 * (col / 3);
            for (int i = 0; i < 3; ++i) {
                for (int j = 0; j < 3; ++j) {
                    int currentRow = boxStartRow + i;
                    int currentCol = boxStartCol + j;
                    if (currentRow != row && currentCol != col && sudokuGrid[currentRow][currentCol] == currentValue) {
                        return false;
                    }
                }
            }
        }
    }
    
    return true;
}




