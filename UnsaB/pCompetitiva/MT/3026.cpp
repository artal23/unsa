#include <iostream>
#include <cstdlib>
#include <math.h>
 
using namespace std;
 
int main() {
    string str;
    string nstr;
    string tem;
    int L,A,temp;
    cin>>L>>A;
    if( (0<L && L<=pow(10,5)) && (0<A && A<=pow(10,10))) {
    
        str=std::to_string(A);
        
        //cout<<str.length()<<"\n";
        if(str.length()%L==0){
            for (int i = 0; i<=L; i++){
                if(i<L-1){
                    nstr=nstr+str[i];
          //          cout<<nstr<<"\n";
                }
                if(i == L && str[i-1]!='9'){
                    tem=str[i-1];
                    temp = atoi(tem.c_str());
            //        cout<<"\n"<<temp<<"\n";
                    temp = temp+1;
                    nstr = nstr + std::to_string(temp);
                }

            }
            if(str[L-1]!='9'){
                int cost = str.length()/L;
                tem=nstr;
                for(int j=1 ; j<cost ; j++){
                    tem=tem+nstr;    
                }
                //tem = tem-nstr;
                temp = atoi(tem.c_str());
                cout<<temp<<"\n";    
            }
            
         //3
         //12945
         //124124    
        } 
        else{
            for(int j = 0; j < L ; j++){
                //cout<<L;
                if(j == 0){
                    //tem=str[i];
                    nstr='1';
                    //cout<<nstr<<"\n";
                }
                else
                    nstr=nstr+'0';
            }
            int len=nstr.length();
            tem = nstr;
            while(str.length()>len){
                //cout<<nstr;
                tem=tem+nstr;
                len=len+nstr.length();
            }
            temp = atoi(tem.c_str());
            cout<<temp<<"\n";
            //cout<<nstr<<"\n";
        }

    }
    else{
        return 0;
    }
    return 0;
}