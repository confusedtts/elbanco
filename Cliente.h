#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>

class Cliente {
    private:
        std::string cpf;
        std::string nome;
    public:
        Cliente();
        Cliente(std::string id, std::string nombre); //construtor
        std::string getnome(); //getter pro nome do cliente
        std::string getcpf(); //getter pro cpf do cliente
};
#endif