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

void inverter_inplace(vector<int> v){
    int j = 0,aux = 0;
    for(int i = 0; i<(v.size()) / 2;i++){
        j = v.size()-i-1;
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;
    }
     cout << "Vetor invertido sem vetor auxiliar: ";
    for(int i = 0; i<v.size();i++){
        cout << v[i] << " ,";
    }
    cout << endl;
}

int sortear(const vector<int>& v){
    int size = v.size() - 1;
    cout << "Sorteado: " << v[rand() % size] << endl;
    return v[rand() % size];
}

void embaralhar(vector<int> v){
    for(int i =0; i< v.size(); i++){
        int randomize = (rand() % v.size());
    
         int aux = v[i];
         v[i] = v[randomize];
        v[randomize] = aux;
     }

    cout << "Vetor embaralhado: "; 
    for(int i =0; i<v.size();i++){
        cout << v[i] << ",";
    }
    cout << endl;

}


void ordenar(vector<int> v){
    int menor = 0,aux = 0;
    vector<int> vetOrdenado;
    for (int i = 0; i < v.size(); i++){
        menor = i;
        for(int j = i+1; j<v.size();j++){
            if(v[menor]>v[j]){
                menor = j;
            }
        }
        if(i != menor){
            aux = v[i];
            v[i] = v[menor];
            v[menor] = aux;
        }
    }
    cout << "Vetor ordenado: ";
    for(int i = 0; i<v.size()-1;i++){
        cout << v[i] << ",";
    }
    cout << endl;
    
}

vector<int> exclusivos_abandonados(vector<int> v){

    vector<int> exclusivos;
    vector<int> abandonados;
    int count = 0;
    exclusivos.push_back(v[0]);
    for(int i = 1; i<v.size();i++){
        int aux = v[i];
       for(int j = 0; j<exclusivos.size();j++){
           if(aux != exclusivos[j]){
               count ++;
           }
       }
       if(count == exclusivos.size()){
           exclusivos.push_back(aux);
           count = 0;
       }else{
           abandonados.push_back(aux);
           count = 0;
       }
    } 
    
    cout << "Exclusivos: ";
    for(int i =0; i<exclusivos.size();i++){
        cout << exclusivos[i] << " ,";
    }
    cout << endl;

    cout << "Abandonados: ";
    for (int i = 0; i < abandonados.size(); i++){
        cout << abandonados[i] << " ,";
    }
    cout << endl;
    
 }
 




vector<int> diferentes(const vector<int>& v){
       vector<int> diferentes;
    int count = 0;
    for(int i = 0; i<v.size();i++){
        int aux = v[i];
       for(int j = 0; j<v.size();j++){
           if(aux != v[j]){
               count ++;
           }
       }
       if(count == v.size()-1){
           diferentes.push_back(aux);
           count = 0;
       }else{
           count = 0;
       }
    } 
    
    cout << "Diferentes: ";
    for(int i =0; i<diferentes.size();i++){
        cout << diferentes[i] << " ,";
    }
    cout << endl;
}

int main(){
    clonar({1,2,3,4});

    pegar_homens({1,2,3,-5,-6,-7});

    pegar_mulheres({1,2,3,-5,-6,-7});

    pegar_calmos({1,2,3,-5,-6,-7});

    pegar_mulheres_calmas({1,2,3,-5,-6,-7});

    inverter_com_copia({1,2,3,-5,-6,-7});

    inverter_inplace({1,2,3,-5,-6,-7});

    sortear({1,2,3,-5,-6,-7});

    embaralhar({1,5,3,4,6,7,2});

    ordenar({1,5,3,4,6,7,2});

    exclusivos_abandonados({1,3,2,2,4});

    diferentes({1,3,2,2,4});
}