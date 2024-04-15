// Universidad de La Laguna
// Escuela Superior de Ingeniería y Tecnología
// Grado en Ingeniería Informática
// Asignatura: Computabilidad y Algoritmia
// Curso: 2º
// Práctica 1: Símbolos, alfabetos y cadenas
// Autor: Javier García Santana
// Correo: alu0101391663@ull.es
// Fecha: 28/09/2022
// Archivo cya-chain.h: programa cliente.
//      Contiene la definicion de los metodos y atributos 
//      de la clase Chain
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)

#include <iostream>
#include <string>
#include <vector>

#include "alphabet.h"

#ifndef CHAIN_H
#define CHAIN_H

class Chain {
 public:
  Chain();    //Constructor por defecto(cadena vacia)
  Chain(std::string& workload);  //Constructor por parametro
  //Getters
  Alphabet getAlphabet() const { return alphabet_; }
  std::vector<Symbol> getChain() const { return chain_; }
  //Sobrecarga del operador de extraccion
  friend std::ostream& operator<<(std::ostream& out, const Chain& desired_chain);

 private:
  std::vector<Symbol> workload_;
  Alphabet alphabet_;
  std::vector<Symbol> chain_;
};
//Metodos declarado fuera de la clase para favorecer la encapsulacion
int length(const Chain& chain);//Longitud de cadena
std::string backwards(const Chain& chain);//Cadena al reves
std::string prefixes(const Chain& chain, const int kSize);//Prefijos de la cadena
std::string suffixes(const Chain& chain, const int kSize);//Sufijos de la cadena
std::string subchains(Chain& chain, int size);//Subcadenas de la cadena

#endif  //CHAIN_H