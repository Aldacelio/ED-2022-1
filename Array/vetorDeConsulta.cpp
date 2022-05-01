#include <iostream>
#include <string>

using namespace std;

int main(){

int npos;

cin >> npos;

string vet[npos];
for(int i = 0; i<npos;i++){
    cin >> vet[i]; 
}

int nposcon;

cin >> nposcon;

string vetcon[nposcon];
for(int i = 0; i<nposcon;i++){
    cin >> vetcon[i]; 
}

int cont = 0;

for(int i = 0; i<nposcon;i++){
    for(int j = 0; j<npos;j++){
        if(vetcon[i] == vet[j]){
            cont +=1;
        }
    }
    cout << "O numero de vezes que : " << vetcon[i] << " : " << cont << endl;
    cont = 0;
}

}