#include <iostream>

using namespace std;

int main()
{
    int a1,b1,a2,b2,Xf,Yf,a;
    cout << "Ingrese 2 pendientes " << endl;
    cin >> a1 >> a2;
    a = a1;
     if (a1 == a2 || a1 == 0 || a2 == 0){
        cout << "Las rectas no se intersecan ya que son paralelas, o alguna de las 2 no existe" << endl;
    }else{
    cout << "Ingrese 2 ordenadas al origen " << endl;
    cin >> b1 >> b2;
        if(a1 == a2 && b1 == b2 ){
        cout << "El punto de intersección es toda la recta" << endl;
    }
    if(b1>=0){
        b2 = b2 -b1;
    }
    else{
        b1 =b1*-1;
        b2 = b2 + b1;
    }
    if (a1>0){
        a1 = a1 -a2;
    }
    else{
        a2 = a2 *-1;
        a1 = a1+a2;
    }
    if (a1<0){
        a1 = a1 *-1;
        b2 = b2*-1;
    }
    if(a1 =! 0){
    Xf = b2/a1;
    Yf = (a*Xf)+b1;
    }else{
    Yf = b2;
    }
    cout << "El punto de interseccion es " <<"("<<Xf<<","<<Yf<<")" <<endl;
    }

}
