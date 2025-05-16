#ifndef CONTABANCARIA_H
#define CONTABANCARIA_H
#include <string>
#include "Cliente.h"
using namespace std;

class ContaBancaria {
    private:
        int numero;
        double saldo;
        Cliente titular;
    public:
        ContaBancaria(int num, Cliente &nombre, double dinero); //construtor pra quando tem o dinheiro declarado

        ContaBancaria(int num, Cliente &nombre); //construtor pra quando NÃO tem o dinheiro declarado

        int getnumero(); //getter pro numero

        void depositar(double valor); //função pra depositar el dinero
        
        void sacar(double valor); // função pra sacar el dinero

        void transferir(double valor, ContaBancaria &destino); //transfere dinero entre uma conta e outra

        void transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2); //transfere dinero entre uma conta e DUAS outras igualmente
        
        void exibirSaldo(); //exibe o saldo (wow)

        void exibirInformacoes(); //exibe todas as informações da conta
};
#endif