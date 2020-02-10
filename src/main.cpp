/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Cuerpo del programa, fichero main.
 */

#include <iostream>

#include "BasicMatrix.hpp"
#include "Algorithms.hpp"
#include "Alg_row.hpp"
#include "Alg_col.hpp"
#include "Chronometer.hpp"


int main(void) {

	int a,b,c,d;
	int opt,write_opt;
	int r;		//Almacenará si la multiplicación se pudo realizar

  Chronometer X;
  Algorithms* punt;

	std::chrono::duration<double>::rep t1;
	std::chrono::duration<double>::rep t2;

	std::cout << "\nPráctica 01 de la asignatura Diseño y Análisis de Algoritmos (DAA)\n";
	std::cout << "\nIntroduzca las dimensiones de la primera matriz:\t";
	std::cin >> a >> b;

	std::cout << "\nIntroduzca las dimensiones de la segunda matriz:\t";
	std::cin >> c >> d;
	
	std::cout << "\nIntroduzca un 0 para valores aleatorios, en otro caso, introduzca el valor para rellenar las matrices:\t";
	std::cin >> opt;


	BasicMatrix A(a,b,opt);
	BasicMatrix B(c,d,opt);
	BasicMatrix C(a,d,opt);


  punt = new Alg_row;
	X.start_();
  r = punt->mult(A,B,C);
  X.stop();

	if( r == 1 ) {
	
		std::cout << "Las matrices no son multiplicables\n";
		return 0;
	} 
	
	t1 = X.get_duration().count();

	delete punt;
	punt = new Alg_col;
	X.start_();
  r = punt->mult(A,B,C);
  X.stop();
	
	t2 = X.get_duration().count();


	std::cout << "¿Desea imprimir las matrices (1 sí, 0 no)?\n >";
	std::cin >> write_opt;
	
	if(write_opt == 1) {
		std::cout << "\n--PRIMERA MATRIZ--\n\n";
		A.write(std::cout);
		std::cout << "\n--SEGUNDA MATRIZ--\n\n";
		B.write(std::cout);
		std::cout << "\n--MATRIZ RESULTADO--\n\n";
		C.write(std::cout);
	}

  std::cout << "\n\nTiempo por filas: " << t1 << "seg.\n";
  std::cout << "\n\nTiempo por columnas: " << t2 << "seg.\n";

  return(0);
}
