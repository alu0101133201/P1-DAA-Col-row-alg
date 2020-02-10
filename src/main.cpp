/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Cuerpo del programa, fichero main.
 */

#include <iostream>

#include "../include/BasicMatrix.hpp"
#include "../include/Algorithms.hpp"
#include "../include/Alg_row.hpp"
#include "../include/Alg_col.hpp"


int main(void) {

  BasicMatrix A(2,3);
  BasicMatrix B(3,2);
  BasicMatrix C(2,2);
  Algorithms* punt;

  punt = new Alg_col;

  punt->mult(A,B,C);

  A.write(std::cout);
  B.write(std::cout);
  C.write(std::cout);



  return(0);
}
