#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t,n;
	int arr[n];
	int *parr[t];

	cout<<"nro de tests \n";
	cin>>t;
	
	for (int i = 1 ; i <= t ; i++){
		cout<<"tam array \n";
		cin>>n;
		if (n%2 == 0)
		{
			for(int j=1 ; j <= n ; j++){
				cin>>arr[j];
				while(arr[j]<0 || arr [j]>1){
					cout<<"again 0 / 1 \n";
					cin>>arr[j];
				}
			}
		}
		parr[i] = arr;
	}

	for(int i = 1 ; i <= t ; i++){
		arr = parr[i];
		int mitad = arr.size()/2;
		for(int j =1 ; j <= arr.size() ; j++){
			int cont=0;
			if(arr[j] == 1){
				cont++;
			}
		}
		if(cont%2 == 0 || cont == 1){
			for(int k = 1 ; k <= arr.size() ; k++){
				if(arr[k] == 1){
					delete arr[k];
				}
			}
		}
	}

	return 0;
}

