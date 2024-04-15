// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Javier García Santana
// Correo: alu0101391663@ull.es
// Fecha: 28/09/2022
// Archivo cya-P01-Strings.cc: programa cliente.
//      Contiene la implementacion de la funcion Usage()
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)
#include <iostream>
#include "usage.h"

void Usage(int argc, char* argv[]) {
    
  if (argc != 4 || argc == 1) {
    std::string parameter{argv[1]};
    if (parameter == "--help") {
      std::cerr << kHelpMessage << std::endl;
      exit(EXIT_SUCCESS);
    } else {
      std::cerr << kDefaultMessage << std::endl;
      exit(EXIT_SUCCESS);
    }
  }
}