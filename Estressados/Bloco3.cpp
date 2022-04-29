#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> ocorrencias_sozinhos_maisOcorrencia_recorrentes(vector<int> v){
    vector<int> count;
    for(int i = 0; i<v.size();i++){
        count.push_back(0);
    }
    for(int i = 0; i< v.size();i++){
        int aux = v[i];
        for(int j = 0; j<v.size();j++){
            if(aux == v[j]){
                count[i]++;
            }
        }
    }
    
    cout << "Ocorrencias: ";
    for(int i = 0; i< v.size(); i++){
        cout << "O nivel de estresse " << v[i] << " aparece " << count[i] << " vez(es), ";
    }
    cout << endl;

    cout << "Sozinhos: ";
    for(int i = 0; i< v.size(); i++){
        if(count[i] == 1){
        cout << v[i] << ", ";
        }
    }
    cout << endl;
int aux = 0;
for(int i = 0; i<count.size();i++){
    if(count[i] > aux){
        aux = count[i];
    }
}

cout << "Mais ocorrencia: " << aux << endl;

int aux2 = 0;
vector<int> recorrentes;
for(int j = 0; j<count.size();j++){
    for(int i = 0; i<count.size();i++){
            if(count[j] >= count[i]){
                aux2++;
            }    
    }
    if(aux2 == count.size()){
        recorrentes.push_back(v[j]);
        aux2 = 0;
    }else{
        aux2 = 0;
    }
}
cout << "Mais recorrentes: ";
for(int i = 0; i<recorrentes.size(); i++){
cout << recorrentes[i] << ", ";
}
cout << endl;
}


int main(){
    

    ocorrencias_sozinhos_maisOcorrencia_recorrentes({1, 3, 4, 3, 1, -3, -3});

}