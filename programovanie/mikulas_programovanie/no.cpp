#include <iostream>
#include <queue>
using namespace std;

const int ROWS = 10;
const int COLS = 20;

// Structure to represent a cell in the maze
struct Cell {
    int row;
    int col;
};

// Function to check if a cell is valid or not
bool isValid(int row, int col) {
    return (row >= 0 && row < ROWS && col >= 0 && col < COLS);
}

// Function to find the path in the maze
void findPath(char maze[ROWS][COLS], int startRow, int startCol, int endRow, int endCol) {
    // Array to store the visited status of each cell
    bool visited[ROWS][COLS] = {false};

    // Queue to store the cells to be visited
    queue<Cell> q;

    // Starting cell
    Cell startCell = {startRow, startCol};
    q.push(startCell);
    visited[startRow][startCol] = true;

    // Array to store the path
    Cell path[ROWS][COLS];
    path[startRow][startCol] = {-1, -1};

    // Possible movements in the maze
    int dx[] = {-1, 0, 1, 0};
    int dy[] = {0, 1, 0, -1};
    string dir[] = {"UP", "RIGHT", "DOWN", "LEFT"};

    while (!q.empty()) {
        Cell currentCell = q.front();
        q.pop();

        // Check if we reached the end cell
        if (currentCell.row == endRow && currentCell.col == endCol) {
            // Print the path
            cout << "Path found!" << endl;
            Cell cell = {endRow, endCol};
            while (path[cell.row][cell.col].row != -1 && path[cell.row][cell.col].col != -1) {
                cout << "(" << cell.row << ", " << cell.col << ")" << endl;
                cell = path[cell.row][cell.col];
            }
            cout << "(" << startRow << ", " << startCol << ")" << endl;
            for (int i = 0; i < ROWS; i++) {
                for (int j = 0; j < COLS; j++) {
                    if (maze[i][j] == '#') {
                        cout << '#';
                    } else if (path[i][j].row != -1 && path[i][j].col != -1) {
                        cout << ' ';
                    } else {
                        cout << ' ';
                    }
                }
                cout << endl;
            }
            return;
        }

        // Explore the neighbors
        for (int i = 0; i < 4; i++) {
            int newRow = currentCell.row + dx[i];
            int newCol = currentCell.col + dy[i];

            if (isValid(newRow, newCol) && maze[newRow][newCol] == '.' && !visited[newRow][newCol]) {
                Cell neighbor = {newRow, newCol};
                q.push(neighbor);
                visited[newRow][newCol] = true;
                path[newRow][newCol] = currentCell;
            }
        }
    }

    // If no path is found
    cout << "No path found!" << endl;
}

int main() {
    // Example maze
    char maze[ROWS][COLS] = {
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'},
        {'#', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '.', '.', '#'},
        {'#', '#', '#', '.', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '.', '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '.', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '.', '.', '.', '.', '.', '.', '.', '.', '#', '.', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '.', '#', '.', '#', '#', '#', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '.', '#', '.', '#', '.', '.', '.', '.', '.', '#'},
        {'#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#'}
    };

    // Find the path from (1, 1) to (8, 18)
    findPath(maze, 1, 1, 8, 18);

    return 0;
}