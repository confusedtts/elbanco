#include <iostream>
#include "Cliente.h"
#include "ContaBancaria.h"

ContaBancaria::ContaBancaria(int num, Cliente &nombre, double dinero){ //construtor pra quando tem o dinheiro declarado
    this->numero = num;
    this->titular = nombre;
    this-> saldo = dinero;
}

ContaBancaria::ContaBancaria(int num, Cliente &nombre){ //construtor pra quando NÃO tem o dinheiro declarado
    this->numero = num;
    this->titular = nombre;
    this->saldo = 0;
}

int ContaBancaria::getnumero(){ //getter pro numero
    return this->numero;
}

void ContaBancaria::depositar(double valor){
    if(valor > 0.0){
        saldo += valor;
    }
}

void ContaBancaria::sacar(double valor){
    if(valor > 0){
        if (saldo - valor >= 0){
            saldo -= valor;
        }
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino) { //transfere dinero entre uma conta e outra
    if (valor >0){
        saldo -= valor;
        destino.saldo += valor;
        cout <<"Transferido: R$ "<<valor<<" da conta "<<getnumero()<<" para a conta "<<destino.getnumero()<<endl;
    }
}

void ContaBancaria::transferir(double valor, ContaBancaria &destino1, ContaBancaria &destino2) { //transfere dinero entre uma conta e DUAS outras igualmente
    if (valor > 0){
        saldo -= valor;
        destino1.saldo += valor/2;
        destino2.saldo += valor/2;
        cout <<"Transferido: R$ "<<valor/2<<" para cada conta ("<<destino1.getnumero()<<" e "<<destino2.getnumero()<<") da conta "<<getnumero() <<endl;
    }
}

void ContaBancaria::exibirSaldo() { //exibe o saldo (wow)
    cout << "Saldo atual da conta " << numero <<": R$ "<< saldo << endl;
}

void ContaBancaria::exibirInformacoes() { //exibe todas as informações da conta
    cout <<"Titular: "<<titular.getnome()<<", CPF: "<<titular.getcpf()<< endl;
    cout <<" Número da Conta: "<<numero<<", Saldo: R$ "<<saldo<< endl;
}
