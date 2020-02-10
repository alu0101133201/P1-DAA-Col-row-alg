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
#include "../include/Chronometer.hpp"


int main(void) {

  Chronometer X;
  X.start_();
  BasicMatrix A(100,100);
  BasicMatrix B(100,100);
  BasicMatrix C(100,100);
  Algorithms* punt;

  punt = new Alg_col;

  punt->mult(A,B,C);


  X.stop();

  std::cout << "Tiempo: " << X.get_duration().count() << "\n";

  return(0);
}
