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
//      Contiene la implementacion de los metodos de la clase
//      Symbol
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)

#include "symbol.h"

std::ostream& operator<<(std::ostream& out, const Symbol& symbol) {
  out << symbol.symbol_;
  return out;
}