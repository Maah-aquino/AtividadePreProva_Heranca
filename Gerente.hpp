#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

// Classe Gerente
class Gerente : public Funcionario {
private:
    double bonusAnual;

public:
    Gerente();
    Gerente(std::string nome, int id, double salarioBase, double bonusAnual);
    double calcularSalarioTotal() override;
};

#endif // GERENTE_HPP
