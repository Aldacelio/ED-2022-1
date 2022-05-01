#include <iostream>
#include <vector>

using namespace std;
void imprimir_vetor_todo(vector<int> v, int size, int aux){
    if(size == 0){
        return;
    }else{
        cout << v[aux] << " ";
    }
    return imprimir_vetor_todo(v,size-1,aux+1);
}


void somar_base(vector<int> v,int size,int aux,vector<int> somado){
    if(size-1 > aux){
        somado.push_back(v[aux]+v[aux+1]);
        cout << somado[aux] << " ";
        return somar_base(v,size,aux+1,somado);
    }else{
        cout << endl;
        if(somado.size() == 1){
            return;
        }else{
            somar_base(somado,somado.size(),0,{});
        }
    }
}

int main(){
    vector<int> v = {1,2,4,8,16,32,64};
    int aux = 0;
    vector<int> somado;
    imprimir_vetor_todo(v,v.size(),aux);
    cout<<endl;
    somar_base(v,v.size(),aux,somado);
}