
#include <iostream>
using namespace std;

void ordenar( int arr[]) {
    int x;
    int lon = 5;
    for (int i = 0; i < lon; i++){
        for (int j = 0; j < lon - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                x = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = x;
            }
        }
    }
    for(int i=0;i<lon;i++) {
        cout << arr[i] << endl;
    }
}

void par(int par){   // EJERCICIO 2.24
    if(par%2==0)
        cout <<" Es par"<<endl;
    else
        cout <<" Impar"<<endl;
}
 void multiplo(int num1 ,int num2){   // EJERCICIO 2.25
   if (num2 % num1 == 0)
      cout << "Es multiplo" << endl;
   else
      cout << "No es multiplo " << endl;
 }

 void kiloXlitro() {   //EJERCICIO 4.13
     double km = 0, lt = 0;
     double klp;

     while (km != -1) {
         cout << "Escriba los kilometros usados \n(-1 para salir): ";
         cin >> km;
         if (km == -1) {
             break;
         }
         cout << "Escriba los litros: ";
         cin >> lt;
         cout << " KPL en este reabastecimiento: " << (klp = km / lt) << endl;
         cout << "TOTAL KPL: " << klp << endl;
     }
 }


void  salarioxventa() {//EJERCICIO 4.15
    int v = 0;
    while (v != -1) {
        cout << "Escriba las ventas en dolares; (-1 para salir): ";
        cin >> v;
        if (v == -1) {
            break;
        }
        v = (v / 100) * 9 + 200;
        cout << "El salario es: " << v << endl;
    }
}

void horaEmpleado(){ //EJERCICIO 4.16
    float h = 0, t = 0;
    while (h != -1) {
        cout << "Introduzca las horas trabajadas; (-1 para salir): ";
        cin >> h;
        if(h==-1)
        break;

        cout << "Introduzc la tarifa por horas del empleado ($00.00): ";
        cin >> t;
        cout << "El salario es:" << " $" <<(h *t) <<endl;
    }
}
void NumeroPalindromo() { //EJERCICIO 4.17
    int numPalidromo, p, s, t, c, m;
    cout << "Ingrese un numero : ";
    cin >> numPalidromo;
    p = numPalidromo % 10;
    s = p / 10;
    c = s / 10;
    m = p * 100 + t * 10 + c;
    if (m = numPalidromo)
       cout << "El Numero es Palindromo" << endl;
    else
       cout << "El Numero no es Palindromo" << endl;
}
void circulo(){//EJERCICIO 4.18
    double r, a, d;
    double pi = 3.14159;
    cout << "Ingrese el radio del circulo: " << endl;
    cin >> r;
    a = pi * (r * r);
    d = a * 2;
    cout << "Area:" << a << endl;
    cout << "Diametro:" << d << endl;
    cout << "Circunferencia:" << d * pi << endl;

}

int main() {
    bool opcion=true;
    int menu;
    do {
        cout << "----Menu----\n";
        cout<<"1.Ordenacion de numeros"<<endl;
        cout<<"2.Par o Impar"<<endl;
        cout<<"3.Numeros Multiplos"<<endl;
        cout<<"4.Kilometros x Litros"<<endl;
        cout<<"5.Salario x Ventas"<<endl;
        cout<<"6.Horas Empleados"<<endl;
        cout<<"7.Salario x Ventas"<<endl;
        cout<<"8.Salario x Ventas"<<endl;
        cout<<"Ingrese una Opcion: ";
        cin>>menu;
        switch(menu) {
            case 1:
                int n;
                int arr[5];
                for (int i = 0; i < 5; i++) {
                    cout << "Ingresa el numero: ";
                    cin >> n;
                    arr[i] = n;
                }
                cout << endl << "Numeros ordenados: " << endl;
                ordenar(arr);
                break;
            case 2:
                int numpar;
                cout << "Ingrese un numero: ";
                cin >> numpar;
                par(numpar);
                break;
            case 3:
                int num1, num2;
                cout << "Ingrese el primer numero: ";
                cin >> num1;
                cout << "Ingrese el segundo numero: ";
                cin >> num2;
                multiplo(num1, num2);
                break;
            case 4:
                kiloXlitro();
                break;
            case 5:
                salarioxventa();
                break;
            case 6:
                horaEmpleado();
                break;
            case 7:
                NumeroPalindromo();
                break;
            case 8:
                circulo();
                break;
        }
        cout<<"Desea Continuar ?";
        string op;
        cin>>op;
        if(op!="no" && op!="No"){
            opcion==true;
        }else
            opcion==false;

    }while(opcion==true);

    return 0;
}