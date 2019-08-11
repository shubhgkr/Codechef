/*
 Created by shubhgkr on 05/08/19.
 https://www.geeksforgeeks.org/rat-in-a-maze-backtracking-2/
 In this the rat moves in all direction and we are printing the path to reach the destination.
*/

#include <iostream>

#define n 5
int board[n][n] = {
		{1, 0, 1, 1, 1},
		{1, 0, 1, 0, 1},
		{1, 0, 0, 1, 1},
		{1, 0, 0, 1, 0},
		{1, 1, 1, 1, 1}
};

bool visBoard[n][n] = {
		{false, false, false, false, false},
		{false, false, false, false, false},
		{false, false, false, false, false},
		{false, false, false, false, false},
		{false, false, false, false, false},
};

bool solveMaze(int x, int y) {
	if (x == n - 1 && y == n - 1) {
		visBoard[x][y] = true;
		return true;
	}
	if (0 > x || 0 > y || x > n || y > n || board[x][y] == 0 || visBoard[x][y])
		return false;
	visBoard[x][y] = true;
	if (solveMaze(x - 1, y) || solveMaze(x, y + 1) || solveMaze(x + 1, y) || solveMaze(x, y - 1))
		return true;
	visBoard[x][y] = false;
	return false;
}

int main() {
	if (solveMaze(0, 0)) {
		std::cout << "Yes\n";
		for (auto &i : visBoard) {
			for (bool j : i) {
				std::cout << j << " ";
			}
			std::cout << "\n";
		}
	} else {
		std::cout << "No\n";
	}
	return 0;
}