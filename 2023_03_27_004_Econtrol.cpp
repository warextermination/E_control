// 2023_03_27_004_Econtrol.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Milko Sahy Martinez Arvizu
//En este programa haremos repaso del tema pasado
//Agrgamos la syntaxis de las estructuras de control
//Syntaxis

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;
int main()
{
    setlocale(LC_ALL, "es_MX.UTF-8");
    int  e_p = 0;
    float  p_p, Est_p, Imc = 0;
    char c_p, h_e [1000] = " ";
    bool pregunta = false;
    bool m_p  = false;
    bool a_m = false;
    std::string n_p;
    
    std::cout << "cual es su nombre completo? " << std::endl;
    getline(std::cin, n_p);
    cout << " Excelente \n" << n_p << std::endl;
    cout << "¿Cuantos años tienes? " << std::endl;
    cin.ignore();
    cin >> e_p;
    cout << "¿Peso? " << std::endl;
    cin.ignore();
    cin >> p_p;
    cout << "¿Estaura? " << std::endl;
    cin.ignore();
    cin >> Est_p;
    cout << "¿Algun dolor estomascal? << 0)No 1)Si " << std::endl;
    cin.ignore();
    cin >> m_p;
    cout << "¿Algún mareo?  << 0)No 1)Si " << std::endl;
    cin.ignore();
    cin >> a_m;
    cout << "¿Que es lo que comes? " << endl;
    cin.ignore();
    cin >> c_p;
    cout << "Hace cuanto que no te haces este estudio " << endl;
    cin.ignore();
    cin >> h_e;
    cout << "Dado los echos tu IMC es: " << endl;
    cin.ignore();
    Imc = (p_p/(Est_p*Est_p));
    cout << Imc;

    




}

