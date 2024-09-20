#include <iostream>

using namespace std;

int main(){
    int cantidadDeMaterias;
    double ponderacion, notasMasPonderacion, promedioPonderado2, notaDeLaMateria;
    double sumaDeLaPoderacion;
    double promedioPonderado;

     cout << "ingrese la cantidad de materias: " << endl;
     cin >> cantidadDeMaterias;

 for (int i = 0; i < cantidadDeMaterias; i++)
 {
    cout << "Materia " << i + 1 << endl;

    cout << "ingrese la nota de la materia" << endl;
    cin >> notaDeLaMateria;

    cout << "ingrese la ponderacion de la materia " << "%" << endl;
    cin >> ponderacion;

    notasMasPonderacion += notaDeLaMateria;
    sumaDeLaPoderacion += ponderacion;
    promedioPonderado = notasMasPonderacion * sumaDeLaPoderacion;
    promedioPonderado2 = promedioPonderado / sumaDeLaPoderacion;

 }
 
   cout << "el promedio ponderado es: " << promedioPonderado2 << "%" << endl;
}