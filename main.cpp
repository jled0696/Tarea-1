#include <QCoreApplication>
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    fstream pepe;
    pepe.open("C:\\Users\\CASA DIAZ\\Documents\\Tarea_1\\pepe.jpg", ios::binary | ios::in);
    int n;
    pepe.seekg(0,ios::end);
    n = pepe.tellg();
    pepe.seekg(0,ios::beg);
    char* arreglo = new char[n];
    pepe.read(arreglo, n);

    arreglo[1000] = 'f';
    arreglo[2000] = 'u';
    arreglo[3000] = 'n';

    fstream pepe2;
    pepe2.open("C:\\Users\\CASA DIAZ\\Documents\\Tarea_1\\pepe2.jpg",ios::binary | ios::out);
    pepe2.write(arreglo, n);

    cout<<arreglo[1000];
    cout<<arreglo[2000];
    cout<<arreglo[3000];


    return a.exec();
}
