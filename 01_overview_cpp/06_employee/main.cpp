#include<iostream>

using namespace std;

struct Employee {
    string fullName;
    string address;
    string cpf;
    double salary;

    Employee(
        string fn,
        string ad,
        string cf,
        double sl
    ): fullName(fn), address(ad), cpf(cf), salary(sl) {}

    friend ostream& operator<<(ostream& os, const Employee& emp);
};

ostream& operator<<(ostream& os, const Employee& emp) {
    os << "Full Name = " << emp.fullName << ", CPF = " << emp.cpf << ", Salary = " << emp.salary;
    return os;
}

int main() {
    Employee e1("Rodolfo Santos", "Endereco Logo Ali", "111.111.111-11", 1250.00);
    Employee e2("Maria Alecrina", "Endereco Bem Ali", "222.221.011-11", 2250.00);;

    cout << "EMPLOYEES:" << endl;
    cout << e1 << endl;
    cout << e2 << endl;

    return 0;
}