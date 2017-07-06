#include<string>
#include<iostream>
#include "globals.h"
#include "History.h"


History::History(int nRows, int nCols) {
	m_rows = nRows;
	m_cols = nCols;

	records = new char*[nRows];
	for (int r = 0; r < nRows; r++) {
		records[r] = new char[nCols];
	}

	for (int i = 0; i < m_rows; i++)
		for (int j = 0; j < m_cols; j++)
			records[i][j] = '.';
}

History::~History() {
    
    for (int r = 0; r < m_rows; r++) {
        delete[] records[r];
    }
	
    
}



bool History::record(int r, int c) {

	if (r > MAXROBOTS || c > MAXCOLS)
		return false;

	if (records[r][c] == '.') {
		records[r][c] = 'A';
	}
	else if (records[r][c]=='Z') {

	}
	else {
		records[r][c] ++;
	}
	return true;

}


void History::display() const {

	clearScreen();
	for (int r = 0; r < m_rows; r++)
	{
		for (int c = 0; c < m_cols; c++)
			std::cout << records[r][c];
		std::cout << std::endl;
	}
	std::cout << std::endl;


}


