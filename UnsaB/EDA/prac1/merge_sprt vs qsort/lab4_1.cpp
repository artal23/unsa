
#include "funciones.h"
#include <iostream>
#include <algorithm>
#include <fstream>
#include <ctime>
#include <time.h>

using namespace std;

int main(int argc, char const *argv[])
{
	
	clock_t t0,t1;

	int *lista;
	int *aux;
	int tam = 1000;
	double tiempo[2]={0.0,0.0};

	ofstream archivo;
	archivo.open("tablas.ods",ofstream::out | ofstream::trunc);
	archivo<<"TABLA DE TIEMPOS"<<endl;
	archivo<<"Tamanio;Merge Sort;Quick Sort"<<endl;

	for (int i = 1000; i <=tam; i+=1000)
	{
		lista=new int[i];
		aux=new int[i];

		generador(lista,aux,i);

		//IINTERCALA
		t0=clock();
		mergeSort(lista,0,i-1);
		t1=clock();
		tiempo[0]=(double)(t1-t0) / CLOCKS_PER_SEC;
		
		//QUICK SORT
		t0=clock();
		sort(aux,aux+i);
		t1=clock();
		tiempo[1]=(double)(t1-t0) / CLOCKS_PER_SEC;

		//GUARDO DATOS
		archivo << i << ";"<<tiempo[0]<<";"<<tiempo[1]<<endl;

		imprimir(lista,i);
		delete lista;
		delete aux;
	}

	archivo.close();
	return 0;
}
