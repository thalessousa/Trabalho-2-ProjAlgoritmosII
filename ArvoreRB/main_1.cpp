/* 
 * File:   main.cpp
 * Author: Kae
 *
 * Created on 14 de Novembro de 2014, 12:39
 */

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string>
#include <iostream>
#include "RB.h"

using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
//int vetor[] = {86, 11, 7, 35, 170, 2, 120, 21, 88, 152, 32, 12, 181, 28, 134, 70, 1, 85, 25, 77, 10, 128, 198};
// 
// 	int nnos = 0; //numero de nos com dois filhos.
// 	int nfolhas = 0; // numero de folhas.
// 	int totalnos = 0; // numero total de nos na arvore(usado para calcular a media).
// 	int maior;
//  	int menor;
// 	int niveis; //variavel utilizada na função que calcula o numero de niveis da arvore.
// 	float media = 0;
// 	 
//	radixsort(vetor, 23);
	Apontador arvore;
 	arvore = CriaArvore();
	int res; 
 	while(1) {
            system("cls");
            cout<<"1-Inserir no' na arvore\n";
            cout<<"2-Imprimir Arvore.\n";
            cout<<"0-Sair\n";
            
            cin>>res;
            switch(res){
                case 0:
                    exit(0);
                case 1:
                    int d;
                    cout<<"Digite o valor para inserir:";
                    cin>>d;
                    Insere(d,arvore);
                    system("pause");
                    break;
                case 2:
                    ImprimePreOrdem(arvore);
                    system("pause");
                    break;
                default:
                    cout<<"Valor invalido\n";
                            
            }
                    
        };
        
        
        
        
 	return 0;
}
