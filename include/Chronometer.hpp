/*
 * Práctica 01 - DAA
 * Sergio Guerra Arencibia
 *
 * Clase que implementa un cronómeto mediante el uso de la librería chrono. Fichero hpp
 */

#include <iostream>
#include <chrono>
#include <ctime>

class Chronometer{

  private:

    std::chrono::time_point<std::chrono::system_clock> start, end;
    std::chrono::duration<double> elapsed_seconds;

  public:

    Chronometer(void);
    ~Chronometer(void);

    void start_(void);
    void stop(void);

    std::chrono::duration<double> get_duration(void);

};
