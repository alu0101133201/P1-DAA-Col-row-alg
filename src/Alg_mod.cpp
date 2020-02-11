/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase concreta que define operaciones de matrices con la matriz B invertida. Fichero cpp
 */

#include "Alg_mod.hpp"


/* Si devuelve 0 es que se multiplicó exitosamente, si no, devolverá 1 */
int Alg_mod::mult(const BasicMatrix &a, const BasicMatrix &b, BasicMatrix &c) {


    /* Para poder realizar la multiplicación, se tiene que cumplir que
     * el número de columnas de la primera matriz sea igual al número
     * de columas de la segunda (ya que está traspuesta) 
     */

     BasicMatrix tras(b.get_cols(),b.get_rows());
     tras  = traspuesta(b);

     if(a.get_cols() != b.get_cols()) {

       c.fill(-1);
       return 1;
     }



     for(int i = 0; i < a.get_rows(); i++){
       for(int j = 0; j < b.get_rows(); j++){
         int val = 0;
         for(int k = 0; k < a.get_cols(); k++){
    	   val += a.get_value(i,k) * tras.get_value(j,k);
         }
         c.set_value(i,j,val);
       }
     }


     return (0);
}


BasicMatrix Alg_mod::traspuesta(const BasicMatrix &b_){

  BasicMatrix tras(b_.get_cols(),b_.get_rows());
  for(int i = 0; i < b_.get_rows() ; i++){
    for(int j = 0; j < b_.get_cols(); j++){
	tras.set_value(j,i,b_.get_value(i,j));
    }	    
  }
  return tras;
}
