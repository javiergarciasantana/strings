// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Javier García Santana
// Correo: alu0101391663@ull.es
// Fecha: 28/09/2022
// Archivo cya-p01-strings.cc: programa cliente.
//      Contiene la función main del proyecto que usa las clases chain.h 
//      y usage.h. El programa interactua con ficheros de texto y llama
//      a un metodo u a otro depende le la opcion insertada
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)


#include <iostream>
#include <string>
#include <vector>
#include <fstream>

#include "chain.h"
#include "usage.h"

int main(int argc, char* argv[]) {
  Usage(argc, argv); 
  std::ifstream input;
  input.open(argv[1], std::ios_base::in);
  if (input.is_open()) {
    std::string line;
    std::ofstream output_file{argv[2]};
    while (getline(input, line)) { //Mete cada linea del fichero de texto en un string y 
      Chain desired_chain(line);   //con eso crea la cadena y el alfabeto correspondiente
      Chain empty_chain;
      switch(atoi(argv[3])) {

        case 1:
          output_file << length(desired_chain) << std::endl;
          break;

        case 2:
          output_file << backwards(desired_chain) << std::endl;
          break;

        case 3:
          output_file << empty_chain;
          for (int i = 0; i < desired_chain.getChain().size(); ++i) {
            output_file << prefixes(desired_chain, i + 1) << " ";
          }
          output_file << std::endl;
          break;

        case 4:
          output_file << empty_chain;
          for (int i = 0; i < desired_chain.getChain().size(); ++i) {
            output_file << suffixes(desired_chain, i + 1) << " ";
          }
          output_file << std::endl;
          break; 

        case 5:
          output_file << empty_chain << subchains(desired_chain, desired_chain.getChain().size()) << std::endl; 
          break;

        default:
          break;
      }
    }
  } else {
    std::cerr << "An error was produced opening the file" << std::endl;
    exit(EXIT_SUCCESS);
  }
  return 0;
}