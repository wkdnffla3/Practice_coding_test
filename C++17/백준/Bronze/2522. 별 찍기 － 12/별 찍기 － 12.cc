#include<iostream>

using namespace std;

int main(){
int N;
cin>> N;

for (int i=0; i<N;i++){
for(int j = N-1-i; j>0; j--) cout<< " ";
for ( int j =N-1 -i ; j < N ; j++){cout<<"*";}
cout<<"\n";
}
for(int i=0 ; i<N-1;i++){
for ( int j =N-1 -i ; j < N ; j++){cout<<" ";}
for(int j = N-1-i; j>0; j--) cout<< "*";
    cout<<"\n";

}


return 0;
}