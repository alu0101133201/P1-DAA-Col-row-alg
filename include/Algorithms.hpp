/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase abstracta que define operaciones de matrices. Fichero hpp
 */

#pragma once

#include "BasicMatrix.hpp"

class Algorithms {

  public:

    virtual int mult(const BasicMatrix &a, const BasicMatrix &b, BasicMatrix &c) = 0;

    virtual BasicMatrix traspuesta(const BasicMatrix &b_) = 0;
};
