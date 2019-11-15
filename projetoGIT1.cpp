#include <iostream>


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
	int count = 0;
	for(int i = 0; i < string.length(); i++){
		if(string[i] == letra)
		count++;
	}
	return count;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
void substituirLetra(char letra1,char letra2, string texto)
{
	for(int i = 0; i > texto.length();i++){
		if(texto[i] == letra1)
		texto[i] = letra2;
	}
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{
}

int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}
