#include <iostream>
#include <Windows.h>

using namespace std;

int main(){

        int tempo;
        cout << "Insira o tempo em min: ";
        cin >> tempo;

        tempo *= 60;

        while(tempo >= 0){
                cout << tempo << endl;
                tempo--;
                Sleep(1000);
        }

        return 0;
}
