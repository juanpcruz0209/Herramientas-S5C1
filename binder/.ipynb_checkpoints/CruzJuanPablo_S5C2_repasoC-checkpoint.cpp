#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int E(float mivarflotante, int mivarentera) {
    return pow(mivarflotante, mivarentera);
    }
int main() {
    srand(time(0));
	int A=7;
	float B=5.1;
	cout << "La primera tiene un valor de ";
	cout << A << "\n";
        cout << "y la segunda variable tiene un valor de ";
	cout << B << "\n";
	float C=A/B;
	cout << "El resultado es ";
	cout << C << "\n";
    int D[300]={};
    for ( int i = 0; i < 301; i++) {
        D[i] = rand() % 900;
        cout << D[i] << " ";
    }
    cout << D[4] << " ";
    cout << "\nLa longitud del arreglo es ";
    cout << sizeof(D)/sizeof(int) << " ";
    cout << "\n" << E(17.5,5);
    int min = 900; 
    for (int k = 0; k < 301; k++) {
        if (D[k] <= min)
            min = D[k];
    }
    cout << "\nmínimo: " << min;   
    for (int l = 0; l < 150; l++) {
        if (D[l] < 800 && D[l] % 2 == 1) {
            cout << "\n" << D[l];
        }
        else if (D[l] < 800 && D[l] % 2 == 0) {
            continue;
        }
        else {
            break;
        }
    }
	return 0;
}

        
