#include <iostream>

#include <lfortran/ast.h>

int main(int argc, char *argv[])
{
    std::cout << "OK: " << LFortran::AST::operatorType::Pow  << std::endl;
    return 0;
}
