#include <bits/stdc++.h>

using namespace std;

int main()
{
    double RAS, RAPS, RAGC, GM, GE;
    double IPS, ISS, ISGC, MD, GD, IB;

    cout << "Renda anual com salario: ";
    cin >> RAS;
    cout << "Renda anual com prestacao de servico: ";
    cin >> RAPS;
    cout << "Renda anual com ganho de capital: ";
    cin >> RAGC;
    cout << "Gastos medicos: ";
    cin >> GM;
    cout << "Gastos educacionais: ";
    cin >> GE;

    //CONSOLIDADO DE RENDA

    double SM = RAS / 12.0;

    if (SM < 3000){
        IPS = 0;
    }
    else if (SM < 5000) {
        IPS = RAS * 0.1;
    }
    else {
        IPS = RAS * 0.2;
    }

    ISS = RAPS * 0.15;
    ISGC = RAGC * 0.2;


    cout <<endl<< "RELATORIO DE IMPOSTO DE RENDA" <<endl<<endl;

    cout << fixed << setprecision(2);
    cout << "CONSOLIDADO DE RENDA: " <<endl;
    cout << "Imposto sobre salario: " << IPS <<endl;
    cout << "Imposto sobre servicos: " << ISS <<endl;
    cout << "Imposto sobre ganho de capital: " << ISGC <<endl;

    //DEDUCOES

    IB = IPS + ISS + ISGC;

    MD = IB * 0.3;
    GD = GM + GE;


    cout <<endl<< "DEDUCOES" <<endl;
    cout << "Maximo dedutivel: " << MD <<endl;
    cout << "Gastos dedutiveis: " << GD <<endl;


    return 0;
}
