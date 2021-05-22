#include <iostream>

using namespace std;

int main() {
  string mensagemDoUsuario;
  char caracSubstituir, caracNovo;

//Informações que serão solicitadas ao usuário
  cout<< "Informe uma Palavra ou Mensagem: " << endl;
  cin >> mensagemDoUsuario;
  cout<< "Informe um caractere que deseja substituir: " << endl;
  cin >> caracSubstituir;
  cout<< "Informe um caractere que será susbtituido pelo caracter informado anteiormente: " << endl;
  cin >> caracNovo;

  return 0;
}


//função para troca
void funcao (string *mensagemUsu, int *tamanhoPalavra, char *caracSub, char *novoCarac){
  string palavra = *mensagemUsu;
  int tamanho = *tamanhoPalavra, i =0;
  char caracter;
  char caracterNovo = *novoCarac;

//para contagem da quantidade de trocas
  caracter = *caracSub;
  for (int cont = 0; cont<= tamanho; cont++){
    if(caracter == palavra[cont]){
      palavra[cont] = caracterNovo;
      i++;
    }
  }

}




