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
//      Contiene la definicion de los metodos y atributos de la clase 
//      Symbol
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)

#ifndef SYMBOL_H
#define SYMBOL_H

#include <iostream>
#include <vector>
#include <string>
#include <fstream>


class Symbol {
 public:
  Symbol() { //Constructor por defecto
    std::cout << "Ejecutando el constructor de simbolos por defecto..." << "\n";
    symbol_.clear(); 
  } 
  Symbol(const std::string& symbol) : symbol_{symbol} { //Constructor por parametro
    std::cout << "Ejecutando el constructor de simbolos por defecto..." << "\n";
  } 
  //Sobrecarga del poperador de extraccion
  friend std::ostream& operator<<(std::ostream& out, const Symbol& symbol);

  //Getter
  std::string getSymbol() const { return symbol_; }

 private:
  std::string symbol_;
};

#endif  //SYMBOL_H