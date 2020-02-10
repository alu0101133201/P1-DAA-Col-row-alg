/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase concreta que define operaciones de matrices por filas. Fichero cpp
 */

#include "Alg_row.hpp"

/* Si devuelve 0 es que se multiplicó exitosamente, si no, devolverá 1 */
int Alg_row::mult(const BasicMatrix &a, const BasicMatrix &b, BasicMatrix &c) {

  /* Para poder realizar la multiplicación, se tiene que cumplir que
   * el número de columnas de la primera matriz sea igual al número
   * de filas de la segunda
   */

   if(a.get_cols() != b.get_rows()) {
     c.fill(-1);
     return 1;
   }

   for(int i = 0; i < a.get_rows(); i++){
     for(int j = 0; j < b.get_cols(); j++){
       int val = 0;
       for(int k = 0; k < a.get_cols(); k++){
         val += a.get_value(i,k) * b.get_value(k,j);
       }
       c.set_value(i,j,val);
     }
   }



   return (0);
}
