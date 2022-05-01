#include <iostream>

using namespace std;

int imprimir_vetor(int v[], int size, int aux){
    if(size == 0){
        return 0;
    }else{
        cout << v[aux] << " ";
    }
    return imprimir_vetor(v,size-1,aux+1);
}

int imprimir_vetor_inverso(int v[],int size, int aux){
    if(size == 0){
        return 0;
    }else{
        cout << v[aux] << " ";
    }
    
    return imprimir_vetor_inverso(v, size-1,aux-1);
}

int somar_vetor(int v[], int size){
    if(size == 0){
        return 0;
    }
    return v[0] + somar_vetor(v+1,size-1);
}

int multiplica_vetor(int v[], int size){
    if(size == 0){
        return 1;
    }
    return v[0] * multiplica_vetor(v+1,size-1);
}

int menor_elem_vetor(int v[], int size){
    if(size == 1){
        return v[0];
    }else{
        if(v[0]> menor_elem_vetor(v+1,size-1)){
            return menor_elem_vetor(v+1,size-1);
        }else{
            return v[0];
        }
    }
}

int inverte_vetor(int v[], int size, int aux){
    int menor = 0;
    if(size > aux){
        menor = v[aux];
        v[aux] = v[size-1];
        v[size-1] = menor;
        return inverte_vetor(v,size-1,aux+1); 
    }
}

int main(){
    int v[] = {3,4,2};
    int size = sizeof(v) / sizeof(int);
    int aux =0;
    cout << "[ "; imprimir_vetor(v,size,aux); cout << "]" << endl;
    cout << "[ "; imprimir_vetor_inverso(v,size,size-1); cout << "]" << endl;
    cout << "[ " << somar_vetor(v,size) << " ]" << endl;
    cout << "[ " << multiplica_vetor(v,size) << " ]" << endl;
    cout << "[ " << menor_elem_vetor(v,size) << " ]" << endl;
    inverte_vetor(v,size,aux);
    cout << "[ "; imprimir_vetor(v,size,aux); cout << "]" << endl;
}