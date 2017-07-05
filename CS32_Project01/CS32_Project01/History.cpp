#include<string>
#include<iostream>
#include "globals.h"
#include "History.h"


History::History(int nRows, int nCols) {
	m_rows = nRows;
	m_cols = nCols;
	for (int i = 0; i < m_rows; i++)
		for (int j = 0; j < m_cols; j++)
			records[i][j] = '.';
}


bool History::record(int r, int c) {

	if (r > MAXROBOTS || c > MAXCOLS)
		return false;

	if (records[r][c] == '.') {
		records[r][c] = 'A';
	} else {
		records[r][c] = 'B';
	}
	return true;

}


void History::display() const {


}



History::~History() {


}

