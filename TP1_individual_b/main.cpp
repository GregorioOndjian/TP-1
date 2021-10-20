#include <iostream>

using namespace std;

int main()
{
    int a1,b1,a2,b2,Xf,Yf,pendiente, ordenada = 0;
    cout << "Ingrese 2 pendientes " << endl;
    cin >> a1 >> a2;
    pendiente = a1-a2;
    cout << "Ingrese 2 ordenadas al origen " << endl;
    cin >> b1 >> b2;
    ordenada = b1-b2;
    if(a1 == a2 && b1 != b2){
        cout << "Las rectas son paralelas"<< endl;
    }else if(a1 == a2 && b1== b2){
        cout << "Las rectas son las mismas" << endl;
    }else{
    Xf = ((-1)*ordenada)/pendiente;
    Yf = (a1*Xf)+b1;
        cout << "El punto de interseccion es " <<"("<<Xf<<","<<Yf<<")" <<endl;
    }
}
