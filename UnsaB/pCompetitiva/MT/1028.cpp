#include <iostream>
 
using namespace std;
 
int main() {
 	int n,n1,f1,f2;
 	cin>>n;
 	n1=n;
 	int arr[n1];
 	if((n>=1 && n<=3000)){
	 	for (int i = 0 ; i<n ; i++){
	 		cin>>f1>>f2;
	 		if((f1>=1 && f1<=1000) && (f2>=1 && f2<=1000))
	 			arr[i]=f2/n;
	 		else{
	 			i = i-1;
	 		}
	 	}
	
	 	for (int j = 0 ; j<n ; j++){
	 		cout<<arr[j]<<"\n";
	 	}
	}
    return 0;
}