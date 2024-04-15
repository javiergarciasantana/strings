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
//      Contiene la definicion del metodo Usage y de todas sus variables
// Referencias:
//      Enlaces de interés
//
// Historial de revisiones
// 28/09/2022 - Creacion(primera versión del codigo)

#ifndef USAGE_H
#define USAGE_H
//Funcion para ayudar al usuario a entender la manera de usar el programa
void Usage(int argc, char* argv[]);
//variables constantes
const std::string kDefaultMessage = {"Ha intoducido erroneamente los parametros requeridos por el programa,\n\ 
por favor, siga el siguiente esquema: ./p01_strings filein.txt fileout.txt option\n\
para mas informacion ejecute lo siguiente: ./p01_strings --help"};
const std::string kHelpMessage = {"      DIVERSAS FUNCIONES DEL PROGRAMA P01_STRINGS\n\
1: Retorna la longitud de la cadena deseada\n\
2: Retorna la cadena al reves\n\
3: Retorna los distintos prefijos de la cadena en cuestion\n\
4: Retorna los distintos sufijos de la cadena en cuestion\n\
5: Retorna las distintas subcadenas de la cadena en cuesion"};

#endif //USAGE_H