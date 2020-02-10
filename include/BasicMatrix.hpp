/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase que implementa una matriz básica. fichero hpp
 */

#pragma once

#include <vector>
#include <iostream>
#include <stdlib.h>

class BasicMatrix {

  private:

    std::vector<std::vector<int> > matrix;
    int rows;
    int cols;

  public:

  BasicMatrix(int r, int c, int num = 0);

  ~BasicMatrix();

  int get_rows(void) const;
  int get_cols(void) const;

  void fill(void);
  void fill(int num);

  int get_value(int x, int y) const;
  void set_value(int x, int y, int value);

  std::ostream& write(std::ostream& os);

};
