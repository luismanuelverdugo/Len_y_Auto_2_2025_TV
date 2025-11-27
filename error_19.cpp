#include <iostream>
using namespace std;

class Cuenta {
protected:
    double saldo;

public:
    Cuenta(double s = 0) : saldo(s) {}

    virtual void depositar(double monto) {
        saldo += monto;
        cout << "[Cuenta] Nuevo saldo tras depositar: " << saldo << endl;
    }
};

class CuentaInvalida : public Cuenta {
public:
    using Cuenta::Cuenta;

    // ERROR conceptual: el método ahora resta en lugar de sumar
    void depositar(double monto) override {
        saldo -= monto;
        cout << "[CuentaInvalida] Nuevo saldo tras 'depositar' (restando): "
             << saldo << endl;
    }
};

int main() {
    Cuenta* c1 = new Cuenta(100);
    Cuenta* c2 = new CuentaInvalida(100);

    cout << "Depositando 50 en Cuenta normal:" << endl;
    c1->depositar(50);  // Comportamiento correcto

    cout << "\nDepositando 50 en CuentaInvalida:" << endl;
    c2->depositar(50);  // Comportamiento incorrecto (rompe el contrato)

    delete c1;
    delete c2;
    return 0;
}
