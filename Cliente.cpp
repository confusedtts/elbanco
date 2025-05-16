#include <iostream>
#include <string>
#include "Cliente.h"

Cliente::Cliente(){} // inicializar o construtor vazio

Cliente::Cliente(std::string nombre, std::string id){ // inicializar o construtor cheio
    this-> nome = nombre;
    this-> cpf = id;
}
std::string Cliente::getcpf(){ //getter pro cpf
return this->cpf;}
std::string Cliente::getnome(){ //getter pro nome (eu queria botar gnome() mas fiquei com receio de perder ponto pq vc especificou no documento ;-;)
return this->nome;}

