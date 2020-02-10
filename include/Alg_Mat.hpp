/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase que define un context (interfax) para algoritmos sobre matrices. Fichero hpp
 */

#include "Algorithms.hpp"
#include "BasicMatrix.hpp"
#include "Chronometer.hpp"
#include "Alg_col.hpp"
#include "Alg_row.hpp"

class Alg_Mat {

	private:
	
		Chronometer timer;
		Algorithms* Alg;
		BasicMatrix* A;
		BasicMatrix* B;

	public:

		Alg_Mat(int x, int y, int z, int w, int opt);
		~Alg_Mat();

		void set_algorithm(Algorithms* pt);
		
	  int mult(BasicMatrix &C);
		
		std::chrono::duration<double> get_duration(void);	
	
		std::ostream& write_A(std::ostream&);
		std::ostream& write_B(std::ostream&);
	

};
