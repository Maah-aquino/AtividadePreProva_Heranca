#include "Estagiario.hpp"

Estagiario::Estagiario(std::string nome, int id, double salarioBase)
    : Funcionario(nome, id, salarioBase) {}// lembrar que precisa inicializar o construtor da classe base

double Estagiario::calcularSalarioTotal() {
    return salarioBase * 0.6;// estágiario da MRS só recebe 60% e sem passagem
}
