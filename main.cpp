#include <iostream>
#include "Node.h"
#include "Lista.h"
#include "Operacoes.h"
using namespace std;

int menu(void)
{
   int opt;

   cout << ("Escolha a opcao\n") << endl;
   cout << ("1. Inserir elemento no inicio \n") << endl;
   cout << ("2. Buscar valor\n") << endl;
   cin >> opt;

   return opt;
};

void opcao(Lista lista, int op)
{
   int position;
   int value;
   switch (op){


   case 1:
      cout << "Insira posição" << endl;
      cin >> position;
      lista.AddDepoisPosition(position);

      break;

   case 2:

      cout << "Insira posição" << endl;
      cin >> value;
      lista.BuscaValor(value);
      break;

   case 3:

      break;

   case 4:

      break;

   default:
      cout << "Comando invalido" << endl;
   }
}

int main()
{
   Lista lista;
   int opt;
   while (opt != 0)
   {
      opt = menu();
      opcao(lista, opt);
   }
}
