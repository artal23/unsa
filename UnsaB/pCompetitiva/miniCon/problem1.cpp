#include <iostream>
#include <string>
#include <cstdlib>
#include <math.h>

using namespace std;
string cambiar(string str, int nro){
	char temp,temp2;
	int cont = 0;
	int i = nro;
	int j = str.length();
	if(str[i] != str[j]){
		temp = str[i];
		str[i] = str[j];
	}

	for( int i = nro+1; i<str.length();i++ ){
		temp2 = str[i];
		str[i]=temp;
		temp = temp2;
	}
	return str;
}




int main(int argc, char const *argv[])
{
	string str;
	string no = "No Succesor";
	int cont=50;
	cin>>str;
	string arr[cont];

	while(str != "#"){
		
		if(str.length()<=50){
			for (int i = 0; i<str.length() ; i++){
				if(str[i]>='a' && str[i]<='z'){
					for(int j=str.length();j>-1;j--){
						if(str[i]>str[i-1]){
							str = cambiar(str,i);
						}
						arr[i] = no;
					}
					arr [i] = str;
				}
			}
		}
		cont++;
		cin>>str;
	}
	for(int x = 0 ; x<cont;x++){
		cout<<arr[x]<<"\n";
	}


	return 0;
}