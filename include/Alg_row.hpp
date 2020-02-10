/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase concreta que define operaciones de matrices por filas. Fichero hpp
 */

#pragma once

#include "Algorithms.hpp"
#include "BasicMatrix.hpp"

class Alg_row : public Algorithms {

  int mult(const BasicMatrix &a, const BasicMatrix &b, BasicMatrix &c);

};
