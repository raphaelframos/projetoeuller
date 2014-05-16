#include <iostream>
using namespace std;

long double fibonacci(){

	int numeroAnterior = 1;
	int numeroSeguinte = 2;
	int numeroAuxiliar = 0;
	long double sum = 1;
	while(numeroSeguinte < 4000000){
		if(numeroSeguinte%2 == 0){
			sum += numeroSeguinte;
		}
		numeroAuxiliar = numeroAnterior;
		numeroAnterior = numeroSeguinte;
		numeroSeguinte = numeroAuxiliar + numeroAnterior;

	}
	return sum;
}

/*int main(){
	cout.precision(7);
	cout << "Resultado = " << fibonacci();
	return 0;
}*/
