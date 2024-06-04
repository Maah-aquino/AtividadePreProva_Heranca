#ifndef FUNCIONARIOREGULAR_HPP
#define FUNCIONARIOREGULAR_HPP

#include "Funcionario.hpp"

// Classe FuncionarioRegular
class FuncionarioRegular : public Funcionario {
public:
    FuncionarioRegular();
    FuncionarioRegular(std::string nome, int id, double salarioBase);
    double calcularSalarioTotal() override;
};

#endif // FUNCIONARIOREGULAR_HPP
