#include<iostream>
#include<math.h>
using namespace std;

int main(){
int N;
cin>> N;

for(int i=0 ; i<N*2 -1 ;i++){
    for(int j = 0 ; j < abs(N-i-1);j++)
        cout << " ";
    for(int j=0 ; j<N -abs(N-i-1);j++ )
        cout<<"*";
    cout<<"\n";
    
}


return 0;
}