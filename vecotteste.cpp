#include <iostream>
#include <string>
#include <vector>
#include <ios>

using namespace std;

int main () {
	vector<string> letras;
	letras.push_back("comi p�ozinho");
	typedef string::size_type sizinho; 
	//isto � realmente interessante, quando definimos typedef, queremos que
	//o tipo de variavel seja sinonimo (ou seja, mesma coisa) do nome da variavel.
	//� como se estivessemos trocando o nome do tipo para o nome dado.
	sizinho tamanho = letras[0].size(); 
	typedef vector<int>::size_type vec;
	//inserimos o size_type pq n�o sabemos 
	//que tamano ser� este vetor, a mesma coisa para variavel.
	//Se n�o usarmos isso, n�o garantiremos que caso o numero
	//do vetor utrapasse a capacidade maxima de armazenamento da vari�vel,
	//o programa funcione ou at� crash.
	
	vec size = letras.size();
	cout << letras[0] << " " << tamanho << size << endl;
	
	return 0;
}
