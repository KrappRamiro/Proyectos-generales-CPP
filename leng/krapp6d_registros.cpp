#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string idiomatico1 = "aba";     //pensaba, miraba
    string comprimido1 = "ŋ";
    string idiomatico2 = "ion";     //destruccion, cancion, malversacion
    string comprimido2 = "ð";
    string idiomatico3 = "ando";    //pensando, mirando
    string comprimido3 = "æ";
    string idiomatico4 = "endo";    //huyendo, oliendo, muriendo
    string comprimido4 = "ß";


    string texto,s1,s2;
    cout << "empieza el programa:\n";
    cout << "Ingrese su texto"<<endl;
    getline(cin, texto);

    cout << "Ingrese la palabra que desea buscar"<<endl;
    getline(cin, s1);

    cout << "Ingrese la palabra con la cual debe ser reemplazada"<<endl;
    getline(cin, s2);

    cout << "Resultado final:\n\n";

    texto.replace( texto.find(s1) , s1.length() , s2 );
    texto.replace( texto.find(idiomatico1) , idiomatico1.length() , comprimido1 );
    texto.replace( texto.find(idiomatico2) , idiomatico2.length() , comprimido2 );
    texto.replace( texto.find(idiomatico3) , idiomatico3.length() , comprimido3 );
    texto.replace( texto.find(idiomatico4) , idiomatico4.length() , comprimido4 );
    cout << texto << '\n';


cout << "Finaliza el programa\n\n\n";
return 0;
}
