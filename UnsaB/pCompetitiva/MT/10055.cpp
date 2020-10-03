#include <bits/stdc++.h>

using namespace std;

int main(){
	int ha, oa;
	int HA[3];
	int OA[3];
	
	for(int i = 0; i<3; i++){
		cin>>ha>>oa;
		HA[i]=ha;
		OA[i]=oa;
	}

	for(int j = 0; j<3; j++){
		cout<<OA[j]-HA[j]<<"\n";
	}

	return 0;
	
	// CODE HERE
}
