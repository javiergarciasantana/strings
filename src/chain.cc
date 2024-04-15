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
//      de la clase Chain
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)
// 03/10/2011 - Finalizacion de la ultima version del codigo

#include <iostream>
#include <string>
#include <vector>
#include <cassert>

#include "chain.h"

Chain::Chain() {
  std::cout << "Ejecutando el constructor de cadenas por defecto..." << "\n";
  workload_.clear();
  chain_.clear();
  alphabet_.getSymbols().clear();
  Symbol empty_symbol{"&"};
  chain_.push_back(empty_symbol);
}

Chain::Chain(std::string& workload) {
  std::cout << "Ejecutando el constructor de cadenas por parametro..." << "\n";
  std::string aux, aux_2;
  for (int i = 0; i < workload.size(); ++i) {
    if (workload[i] == '&') {
      workload.erase(i);
    }
  }
  for (int i = 0; i < workload.size(); ++i) {
    if (workload[i] == ' ') {  //dos casos rey
      workload_.push_back(aux);
      aux.clear(); 
    } else if (i == workload.size() - 1) {
      aux += workload[i];
      workload_.push_back(aux);
      aux.clear();
    } else {
      aux += workload[i]; 
    }
  }
  
  aux += workload_[workload_.size() - 1].getSymbol();

  for (int i = 0; i < aux.size(); ++i) {
    aux_2 += aux[i];
    chain_.push_back(aux_2);
    aux_2.clear();
  }
  if (workload_.size() > 1) {
    workload_.erase(workload_.end() - 1);
  }

  alphabet_ = workload_;
}

std::ostream& operator<<(std::ostream& out, const Chain& desired_chain) {
  for (int i = 0; i < desired_chain.getChain().size(); ++i) {
    out << desired_chain.getChain().at(i).getSymbol() << " ";
  }
  return out;
}

int length(const Chain& chain) {
  return chain.getChain().size();
}

std::string backwards(const Chain& desired_chain) {
  std::string result;
  for (int i = desired_chain.getChain().size() - 1; i >= 0; --i) {
    result += desired_chain.getChain().at(i).getSymbol();
  }
  for (int i = 0; i < result.size(); ++i) {
    std::cout << result[i];
  }
  std::cout << std::endl;
  return result;
}

std::string prefixes(const Chain& chain, const int kSize) {
  std::string result;
  for (int i = 0; i < kSize; ++i) {
    result += chain.getChain().at(i).getSymbol();
  }
  return result;
}

std::string suffixes(const Chain& chain, const int kSize) {
  std::string result;
  for (int i = (chain.getChain().size() - kSize), k = 0; i < chain.getChain().size(); ++i) {
    result += chain.getChain().at(i).getSymbol();
  }
  return result;
}

std::string subchains(Chain& chain, int size) {
  std::string result;
  for (int length = 1; length <= size; length++) {   
    for (int i = 0; i <= size - length; i++) {
      int j = i + length - 1;           
      for (int k = i; k <= j; k++) {
        result += chain.getChain().at(k).getSymbol();
      }
      result += " ";
    }
  }
  return result;
}