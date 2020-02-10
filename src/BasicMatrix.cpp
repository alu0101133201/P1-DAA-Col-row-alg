/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase que implementa una matriz básica. fichero cpp
 */

#include "BasicMatrix.hpp"


BasicMatrix::BasicMatrix(int r, int c, int num)
    : rows(r),
      cols(c) {

  matrix.resize(r);

    for(int i = 0; i < r; i++) {
      matrix[i].resize(c);
    }

	if (num != 0) 
  	fill(num);
	else
		fill();
}

BasicMatrix::~BasicMatrix()
  {}

int BasicMatrix::get_rows(void) const {
  return rows;
}

int BasicMatrix::get_cols(void) const {
  return cols;
}

void BasicMatrix::fill(void) {

  srand (time(NULL));

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      matrix[i][j] = (rand()%10);
    }
  }
}

void BasicMatrix::fill(int num) {

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      matrix[i][j] = num;
    }
  }
}

int BasicMatrix::get_value(int x, int y) const{
  return(matrix[x][y]);
}

void BasicMatrix::set_value(int x, int y, int value){
  matrix[x][y] = value;
}


std::ostream& BasicMatrix::write(std::ostream& os) {

  os << "\nMatriz. (" << rows << " x " << cols << ")\n\n";

  for(int i = 0; i < rows; i++) {
    for(int j = 0; j < cols; j++) {
      os << matrix[i][j] << " ";
    }
    os << "\n";
  }
  os << "\n";
  return os;
}
