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
//      Contiene la implementacion de los metodos
//       de la clase Alphabet
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)

#include <fstream>
#include <vector>

#include "alphabet.h"

Alphabet::Alphabet() {
  std::cout << "Ejecutando el constructor de alfabetos por defecto..." << "\n";
  symbols_.clear();
}
Alphabet::Alphabet(const std::vector<Symbol>& input){
  std::cout << "Ejecutando el constructor de alfabetos por parametro..." << "\n";
  std::string aux, aux_2;
  if (input.size() == 1) {
    aux = input[0].getSymbol();
    for (int i = 0; i < aux.size(); ++i) {
      aux_2 = aux[i];
      symbols_.push_back(aux_2);
      aux_2.clear();
    }

  } else {
    for (int i = 0; i < input.size(); ++i) {
      symbols_.push_back(input[i]);
    }
  }

}
std::ostream& operator<<(std::ostream& out, const Alphabet& alphabet) {
  for (int i = 0; i < alphabet.getSymbols().size(); ++i) {
    out << alphabet.getSymbols()[i] << " ";  
  }
  return out;
}

