#include <iostream>
using namespace std;

int somatorioDosMultiplosDe3e5(int numero){

	if(numero == 0 || numero == 1){
		return 0;
	}
	if(numero%3 == 0 || numero%5 == 0){
		return numero + somatorioDosMultiplosDe3e5(numero -1);
	}else{
		return somatorioDosMultiplosDe3e5(numero -1);
	}
}

//Chamar função: sum = somatorioDosMultiplosDe3e5(1000-1);
//Resultado = 233168

