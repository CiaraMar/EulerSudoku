#include <iostream>
#include <fstream>
#include <string>
#include <vector>

typedef std::vector<std::vector<int>> Grid;

std::vector<int> read_line(std::string line) {
	std::vector<int> nums;
	for (auto c : line) {
    	int i = c - '0';
    	nums.push_back(i);
	}
	return nums;
}

std::vector<Grid> read_sudoku_file() {
	std::ifstream file("sudoku.txt");
	std::string str;
	std::vector<Grid> grids;
	Grid grid;
	int grid_number = 0;
	while(std::getline(file, str)) {
		if (str.substr(0,4) == "Grid") {
			grid_number++;
			grids.push_back(grid);
			grid.clear();
		}
		else {
			std::vector<int> nums = read_line(str);
			grid.push_back(nums);
		}
	}
	return grids;
}
/*
int main() {
	auto grids = read_sudoku_file();
	int grid_number = 0;
	for (auto grid1 : grids) {
		std::cout << "Grid " << grid_number << std::endl;
		for (auto row : grid1) {
			for (int i = 0; i < 9 * 4 + 1; i++) std::cout << "-";
			std::cout << std::endl;
			std::cout << "| ";
			for (auto elem : row) {
				std::cout << elem << " | ";
			}
			std::cout << std::endl << std::endl;
			for (int i = 0; i < 9 * 4 + 1; i++) std::cout << "-";
			std::cout << std::endl << std::endl;
		}
		grid_number++;
	}
}
*/