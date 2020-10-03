//#include "mergeSort.h"
//#include "intercala.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <time.h>
#include <stdlib.h>

clock_t t0, t1;
using namespace std;


void imprimir(int lista[],int tam){
	for (int i = 0; i < tam; ++i)
	{
		cout << lista[i]<<"-";
	}
	cout << endl;
}

void generador(int lista[], int aux[], int tam){
	for(int i=0; i<tam ; i++){
		lista[i] = rand() % (tam*2 - 1);
		aux[i]=lista[i];
	}
}

void intercala(int lista[],int p,int q, int r){

	int aux[r+1];
	
	for (int i = p; i <=r; ++i)
	{
		aux[i]=lista[i];

	}
	for (int i = q; i <= r; ++i)
	{
		aux[r+q+1-i]=lista[i];
	}
	int i = p;
	int j = r;
	for (int k = p; k <= r; ++k)
	{
		if (aux[i]<=aux[j])
		{
			lista[k]=aux[i];
			i++;
		}
		else{
			lista[k]=aux[j];
			j--;
		}
	}

}

void mergeSort(int lista[],int p, int r){
	//t0 = clock();
	if (p<r)
	{
		int q = (r+p)/2;
		mergeSort(lista,p,q);
		mergeSort(lista,q+1,r);
		intercala(lista,p,q,r);
	}
}



int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(int argc, char const *argv[])
{
	int tam;
	int *l = new int[tam];
	int *aux = new int[tam];
	
	cout<<"ingrese tamño de la lista: ";
	cin>>tam;

	generador(l,aux,tam);

	t0 = clock();
	qsort(aux,tam,sizeof(int),compare);
	t1 =  clock();
	long double tiempo = (double)(t1-t0) / CLOCKS_PER_SEC;
	cout<<"Tempo de qsort: "<<tiempo<<endl;

	t0 = clock();
	mergeSort(l,0,tam-1);
	t1 = clock();
	long double tempo = (double)(t1-t0) / CLOCKS_PER_SEC;
	cout<<"Tempo de mergeSort: "<<tempo<<endl;
	/*
	
	int lista[13]={9,8,7,6,5,4,3,2,10,32,43,27,92};
	int tam = 13;
	cout << "Iniciando...\n";
	mergeSort(lista,0,tam-1);

	cout << "\nLista Ordenada\n ";
	imprimir(lista,tam);*/
	delete l;
	delete aux;
	return 0;
}
