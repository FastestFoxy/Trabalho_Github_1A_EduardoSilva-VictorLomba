#include <iostream>
#include<string>
using namespace std;

/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
	int count = 0;
	for(int i = 0; i < texto.length(); i++){
		if(texto[i] == letra)
		count++;
	}
	return count;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
string substituirLetra(char letra1,char letra2, string &texto)
{
	for(int i = 0; i < texto.length();i++){
		if(texto[i] == letra1)
		texto[i] = letra2;
	}
	return texto;
}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    int V=0;
    int y=0;
    int tamanho=0;
    for(int x=0;x<texto.length();x++)
    {
       if(texto[x]==palavra[y]){
            tamanho++;
            for(y = 1; y < palavra.length(); y++){
                if(texto[x+y]==palavra[y]) tamanho++;
        }
        if(tamanho==palavra.length()) V++;
       }
       tamanho=0;
       y=0;
    }


    return V;

}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
string substituirPalavras(string palavra1, string palavra2, string texto)
{
    size_t pos = texto.find(palavra1);
    while(pos != string::npos)
    {
        texto.replace(pos,palavra1.length(),palavra2);
        pos = texto.find(palavra1);
    }
    return texto;
}

int main(){
	string texto, palavra1, palavra2;
	char letra1, letra2;

	cout << "Entre com o texto para fazer o teste: ";
	getline(cin, texto);
	cout << "Entre com a letra que deseja encontrar: ";
	cin >> letra1;
    if(contaLetras(letra1, texto)==0) cout << "Nao existem exemplares de '" << letra1 << "' no texto.";
    else{
        cout << "Existe(m) " << contaLetras(letra1, texto) << " exemplar(es) desta palavra no texto.";
        cout << "\nEntre com a letra pela qual gostaria de substituir: ";
        cin >> letra2;
        cout << "O texto foi modificado para '" << substituirLetra(letra1, letra2, texto) << "'.";
    }
    cout << "\nEntre com a palavra que deseja encontrar: ";
	cin >> palavra1;
    if(contaPalavras(palavra1, texto)==0) cout << "Nao existem exemplares de '" << palavra1 << "' no texto.";
    else{
        cout << "Existe(m) " << contaPalavras(palavra1, texto) << " exemplar(es) desta palavra no texto.";
        cout << "\nEntre com a palavra pela qual gostaria de substituir: ";
        cin >> palavra2;
        cout << "O texto foi modificado para '" << substituirPalavras(palavra1, palavra2, texto) << "'.";
    }


	return 0;
}
