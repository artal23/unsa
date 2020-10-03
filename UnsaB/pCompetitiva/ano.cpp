#include <iostream>
using namespace std;

int main(){
	int nro;
	cin>>nro;

	int ano = (int)(nro/365);
	int mes = (int)((nro-365*ano)/30);
	int dia = nro-((365*ano)+(30*mes));

	cout<<ano<<" ano(s)\n";
	cout<<mes<<" mes(es)\n";
	cout<<dia<<" dia(s)\n"; 
}
