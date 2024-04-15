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
//      Contiene la definicion de los metodos y
//      atributos de la clase Alphabet
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)

#ifndef ALPHABET_H
#define ALPHABET_H

#include <vector>
#include <fstream>

#include "symbol.h"

class Alphabet{
 public:
  Alphabet(); //Constructor por defecto
  Alphabet(const std::vector<Symbol>& input); //Constructor por parametro
  //Sobrecarga del operador de extraccion
  friend std::ostream& operator<<(std::ostream& out, const Alphabet& alphabet);

  //Getter
  std::vector<Symbol> getSymbols() const { return symbols_; }

 private:
  std::vector<Symbol> symbols_;
};

#endif  //ALPHABET_H