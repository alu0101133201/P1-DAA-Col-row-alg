/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase concreta que define operaciones de matrices con la matriz B traspuesta. Fichero hpp
 */

#pragma once

#include "Algorithms.hpp"
#include "BasicMatrix.hpp"

class Alg_mod : public Algorithms{

  private:
    BasicMatrix traspuesta(const BasicMatrix &b_);

  int mult(const BasicMatrix &a, const BasicMatrix &b, BasicMatrix &c);

};
