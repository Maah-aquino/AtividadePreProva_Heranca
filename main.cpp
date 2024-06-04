#include <iostream>
#include "Funcionario.hpp"
#include "FuncionarioRegular.hpp"
#include "Gerente.hpp"
#include "Estagiario.hpp"


int main() {
    FuncionarioRegular fr("João", 1, 1400.0);
    Gerente gerente("Maria", 2, 1400.0, 2500.0);
    Estagiario estagiario("Carlos", 3, 1400.0);

    std::cout << "Salário Total do Funcionário Regular: " << fr.calcularSalarioTotal() << std::endl;
    std::cout << "Salário Total do Gerente: " << gerente.calcularSalarioTotal() << std::endl;
    std::cout << "Salário Total do Estagiário: " << estagiario.calcularSalarioTotal() << std::endl;

    return 0;
}
