#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> clonar(const vector<int>& v){
    std::vector<int> vetNovo;

    for (int i = 0; i < v.size(); i++){
        vetNovo.push_back(v[i]);
    }
    cout << "Vetor novo: ";
    for(int i = 0; i<v.size();i++){
        cout << vetNovo[i] << " ,";
    }
    cout << endl;
    return vetNovo;
}


vector<int> pegar_homens(const vector<int>& v){
    vector<int> vetNovo;
    for (int i = 0; i < v.size(); i++){
        if(v[i] > 0){
            vetNovo.push_back(v[i]);
        }
    }
    cout << "Homens: ";
    for(int i = 0; i<vetNovo.size();i++){
        cout << vetNovo[i] << " ,";
    }
    cout << endl;
    return vetNovo;
}

vector<int> pegar_mulheres(const vector<int>& v){
    vector<int> vetNovo;
    for (int i = 0; i < v.size(); i++){
        if(v[i] < 0){
            vetNovo.push_back(v[i]);
        }
    }
    cout << "Mulheres: ";
    for(int i = 0; i<vetNovo.size();i++){
        cout << vetNovo[i] << " ,";
    }
    cout << endl;
    return vetNovo;
}

vector<int> pegar_calmos(const vector<int>& v){
    vector<int> vetNovo;
    for (int i = 0; i < v.size(); i++){
        if( v[i] < 10 && v[i] > -10){
             vetNovo.push_back(v[i]);
        }
    }
    cout << "Calmos: ";
    for(int i = 0; i<vetNovo.size();i++){
        cout << vetNovo[i] << " ,";
    }
    cout << endl;
    return vetNovo;
}

vector<int> pegar_mulheres_calmas(const vector<int>& v){
    vector<int> vetNovo;
    for (int i = 0; i < v.size(); i++){
        if( v[i] < 0 && v[i] > -10){
             vetNovo.push_back(v[i]);
        }
    }
    cout << "Mulheres calmas: ";
    for(int i = 0; i<vetNovo.size();i++){
        cout << vetNovo[i] << " ,";
    }
    cout << endl;
    return vetNovo;
}

vector<int> inverter_com_copia(const vector<int>& v){
    vector<int> vetNovo;
    for(int i = v.size()-1; i>=0;i--){
        vetNovo.push_back(v[i]);
    }
    cout << "Vetor invertido: ";
    for(int i = 0; i<vetNovo.size();i++){
        cout << vetNovo[i] << " ,";
    }
    cout << endl;
    return vetNovo;
}
/*
void inverter_inplace(vector<int> v){
     int aux = 0;
     for(int i = v.size()-1;i>=v.size()/2;i--){
        v[aux] = v[i];
        aux+=1;
     }
     cout << "Vetor invertido sem vetor auxiliar: ";
    for(int i = 0; i<v.size();i++){
        cout << v[i] << " ,";
    }
    cout << endl;
}
*/

int sortear(const vector<int>& v){
    int size = v.size() - 1;
    cout << "Sorteado: " << v[rand() % size] << endl;
    return v[rand() % size];
}

/*
void ordenar(vector<int> v){
    int indice_menor = 0;
    for (int i = 0; i < v.size(); i++){

        
            if(v[i] < v[indice_menor]){
                indice_menor = i;
            }
            int aux = v[i];
            v[i]= v[indice_menor];
            v[indice_menor] = aux;
        }
        
    cout << "Ordenado: ";
    for(int i = 0; i<v.size();i++){
        cout << v[i] << " ,";
    }
    cout << endl;
}
*/
vector<int> exclusivos(const vector<int>& v){
    vector<int> vetNovo;
    vetNovo.push_back(v[0]);
    for(int i = 0; i<v.size();i++){
        for(int j = 0;j<v.size();j++){
            if(vetNovo[i] != v[j]){
            vetNovo[i] = v[j];
            }
        
        }
    }
    

    cout << "Exclusivos: " ;
    for(int i = 0; i<v.size();i++){
        cout << vetNovo[i];
    }
    
    cout << endl;
    return v;
}
/*
vector<int> diferentes(const vector<int>& v){
    vector<int> n;
    int count = 0;
    for(int i = 0; i<v.size();i++){
        for(int j = v.size()-1; j>=0;j--){
            if(v[i] == v[j]){
                break;
            }else{
             count = 1;   
            }
        }
        if(count = 1){
            n[i] = v[i];
        }
    }
}*/

int main(){
    clonar({1,2,3,4});

    pegar_homens({1,2,3,-5,-6,-7});

    pegar_mulheres({1,2,3,-5,-6,-7});

    pegar_calmos({1,2,3,-5,-6,-7});

    pegar_mulheres_calmas({1,2,3,-5,-6,-7});

    inverter_com_copia({1,2,3,-5,-6,-7});

    //inverter_inplace({1,2,3,-5,-6,-7});

    sortear({1,2,3,-5,-6,-7});

   // ordenar({1,5,3,4,6,7,2});

    exclusivos({1,5,3,4,6,7,2});
}