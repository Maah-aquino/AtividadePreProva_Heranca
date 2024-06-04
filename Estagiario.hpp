#ifndef ESTAGIARIO_HPP
#define ESTAGIARIO_HPP

#include "Funcionario.hpp"

// Classe Estagiario
class Estagiario : public Funcionario {
public:
    Estagiario();
    Estagiario(std::string nome, int id, double salarioBase);
    double calcularSalarioTotal() override;
};

#endif // ESTAGIARIO_HPP
