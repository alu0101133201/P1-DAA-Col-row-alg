/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase que define un context (interfax) para algoritmos sobre matrices. Fichero cpp
 */

#include "Alg_Mat.hpp"

Alg_Mat::Alg_Mat(int x, int y, int z, int w, int opt){

	A = new BasicMatrix(x,y,opt);
	B = new BasicMatrix(z,w,opt);
	
}

Alg_Mat::~Alg_Mat(){
		
	delete A;
	delete B;

}

void Alg_Mat::set_algorithm(Algorithms* pt){

	Alg = pt;

}

int Alg_Mat::mult(BasicMatrix &C){

	

	timer.start_();
	int r = Alg->mult(*A,*B,C);
	timer.stop();

	if( r == 1){
		std::cerr << "Las matrices no son multiplicables\n";
		return 1;
	}
	return 0;
}

std::chrono::duration<double> Alg_Mat::get_duration(void){
	return timer.get_duration();
}


std::ostream& Alg_Mat::write_A(std::ostream& os){
	A->write(os);
	return os;
}

std::ostream& Alg_Mat::write_B(std::ostream& os){
	B->write(os);
	return os;
}
