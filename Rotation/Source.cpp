#include <iostream>

int main()
{
	int i, j, m[100][100] = {};
	std::cout << "Enter number of row : ";
	std::cin >> i;
	std::cout << "Enter number of column : ";
	std::cin >> j;
	
	for (int row = 0;row < i;row++)	for (int col = 0;col < j;col++) std::cin >> m[row][col];
	
	printf("\nCounterclockwise rotated into\n");

	for (int row = j - 1;row >= 0;row--)
	{
		for (int col = 0;col <= j-1;col++)
		{
			std::cout << m[col][row] << " ";
		}
		std::cout << std::endl;
	}

	return 0;
}
