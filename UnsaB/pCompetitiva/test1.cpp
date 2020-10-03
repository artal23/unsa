#include <iostream>
using namespace std;

int main(){
	int A,B,C,D;
	cin>>A>>B>>C>>D;

	if(B>C && D>A){
		if((C+D)>(A+B)){
			if(C>0 && D>0 && A%2==0){
				cout<<"Valores aceitos\n";
			}
		}
	}
	else{
		cout<<"Valores nao aceitos\n";
	}

}
