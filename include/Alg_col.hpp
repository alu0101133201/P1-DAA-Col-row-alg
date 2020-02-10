/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase concreta que define operaciones de matrices por columnas. Fichero hpp
 */

#include "Algorithms.hpp"
#include "BasicMatrix.hpp"

class Alg_col : public Algorithms {

  int mult(const BasicMatrix &a, const BasicMatrix &b, BasicMatrix &c);

};
