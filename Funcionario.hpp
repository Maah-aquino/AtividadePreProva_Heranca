#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP
#include <iostream>
#include <string>

// Classe base Funcionario
class Funcionario {
protected:
    std::string nome;
    int id;
    double salarioBase;

public:
    Funcionario();
    Funcionario(std::string nome, int id, double salarioBase);
    
    virtual double calcularSalarioTotal() = 0; // Método abstrato
    
    
};

#endif // FUNCIONARIO_HPP
