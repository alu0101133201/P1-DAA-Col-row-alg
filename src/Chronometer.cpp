/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase que implementa un cronómeto mediante el uso de la librería chrono. Fichero cpp
 */

#include "../include/Chronometer.hpp"

Chronometer::Chronometer(void){}

Chronometer::~Chronometer(void){}

void Chronometer::start_(void){
  start = std::chrono::system_clock::now();
}

void Chronometer::stop(void){
  end = std::chrono::system_clock::now();
}

std::chrono::duration<double> Chronometer::get_duration(void){
  return elapsed_seconds;
}
