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
#include "Alg_Mat.hpp"


int main(void) {

	int a,b,c,d;
	int opt,write_opt;
	int flag;

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

	//Matriz para almacenar el resultado
	BasicMatrix C(a,d,opt);
	

	Alg_Mat matrix_mult(a,b,c,d,opt);

  punt = new Alg_row;
	matrix_mult.set_algorithm(punt);
	flag = matrix_mult.mult(C);

	if(flag != 0){
		return 1;	
	}

	t1 = matrix_mult.get_duration().count();


	delete punt;
	punt = new Alg_col;
	matrix_mult.set_algorithm(punt);
	matrix_mult.mult(C);
	t2 = matrix_mult.get_duration().count();
	
	delete punt;


	std::cout << "¿Desea imprimir las matrices (1 sí, 0 no)?\n >";
	std::cin >> write_opt;
	
	if(write_opt == 1) {
		std::cout << "\n--PRIMERA MATRIZ--\n\n";
		matrix_mult.write_A(std::cout);
		std::cout << "\n--SEGUNDA MATRIZ--\n\n";
		matrix_mult.write_B(std::cout);
		std::cout << "\n--MATRIZ RESULTADO--\n\n";
		C.write(std::cout);
	}

  std::cout << "\n\nTiempo por filas: " << t1 << "seg.\n";
  std::cout << "\n\nTiempo por columnas: " << t2 << "seg.\n";


  return(0);
}
