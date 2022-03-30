#include <iostream>
#include <vector>

using namespace std;

bool existe(vector<int> fila, int x){
    for (int i = 0; i < fila.size(); i++){
        if (fila[i] == x){
            cout << "true" << endl;
            return true;
        }
    }
    cout << "false" << endl;
    return false;
}

int contar(vector<int> fila, int x){
    int count = 0;
    for (int i = 0; i < fila.size(); i++){
        if (fila[i] == x){
            count += 1;
        }
    }
    cout << "Contou: "<< count<< endl; 
    return count;
}

int procurar(vector<int> fila, int x){
    int count = 0;

    for (int i = 0; i < fila.size(); i++){
        if(fila[i] == x ){
            cout <<"Posicao: " << i << endl;
            return i;
        }
    }
    cout << "Posicao: " << -1 << endl;
    return -1;

}

int procurar_apartir(vector<int> fila, int x,int inicio){
    int count = 0;

    for (int i = inicio; i < fila.size(); i++){
        if(fila[i] == x ){
            cout <<"Posicao(Apartir): " << i << endl;
            return i;
        }
    }
    cout << "Posicao(Apartir): " << -1 << endl;
    return -1;

}

int procurar_menor(vector<int> fila){
    int count = fila[0];

    for (int i = 0; i < fila.size(); i++){
        if(fila[i] < count  ){
            count = fila[i];
        }
    }
    cout << "Posicao(Menor): " << count << endl;
    return count;

}

int procurar_pos_menor(vector<int> fila){
    int count = fila[0];
    int posicao = 0;
    for (int i = 0; i < fila.size(); i++){
        if(fila[i] < count  ){
            count = fila[i];
            posicao = i;
        }
    }
    cout << "Posicao(Pos_Menor): " << posicao << endl;
    return posicao;

}

int procurar_pos_menor_apartir(vector<int> fila,int inicio){
    int count = fila[0];
    int posicao = 0;
    for (int i = inicio; i < fila.size(); i++){
        if(fila[i] < count  ){
            count = fila[i];
            posicao = i;
        }
    }
    cout << "Posicao(Pos_Menor_Apartir): " << posicao << endl;
    return posicao;

}

int procurar_melhor_pos_se(vector<int> fila){
    int count = 0;
    int posicao = 0;
    for(int i =0; i<fila.size();i++){
        if(fila[i]>0){
            count = fila[i];
            break;
        }else{
            posicao = -1;
        }
    }
   
    if(posicao == -1){
        cout << "Posicao(procurar_melhor_pos_se): " << posicao << endl;
        return posicao;
    }else{
    for (int i = 0; i < fila.size(); i++){
        if(fila[i] < count && fila[i] > 0 ){
            count = fila[i];
            posicao = i;
        }
    }
    cout << "Posicao(procurar_melhor_pos_se): " << posicao << endl;
    return posicao;
    }
}

float calcular_stress_medio(vector<int> fila){
    int count = 0;
    for (int i = 0; i < fila.size(); i++){
        if(fila[i]<0){
            fila[i] = fila[i]*-1;
        }
        count += fila[i];    
    }

    float media = count/fila.size();

    cout << "Media de stress: " << media << endl;
    return media;

}

string mais_homens_ou_mulheres(vector<int> fila){
    int countH = 0;
    int countM = 0;
    for (int i = 0; i < fila.size(); i++){
        if(fila[i]<0){
            countM += 1;
        }else{
            countH+=1;
        }   
    }

    if(countM>countH){
         cout << "Mulheres" << endl;
         return "Mulheres";
    }else if(countH>countM){
         cout << "Homens" << endl;
         return "Homens";
    }else{
        cout << "Empate" << endl;
         return "Empate";
    }

}

string qual_metade_eh_mais_estressada(vector<int> fila){
    int primeira = fila.size()/2;
    int segunda = fila.size();
    int countP = 0, countS = 0;
    for (int i = 0; i < primeira; i++){
        if(fila[i]<0){
            fila[i] *= -1;
            countP += fila[i];
        }else{
            countP+=fila[i];
        }   
    }
    for (int i = primeira; i < segunda; i++){
        if(fila[i]<0){
            fila[i] *= -1;
            countS += fila[i];
        }else{
            countS+=fila[i];
        }   
    }

    if(countP>countS){
         cout << "Primeira" << endl;
         return "Primeira";
    }else if(countS>countP){
         cout << "Segunda" << endl;
         return "Segunda";
    }else{
        cout << "Empate" << endl;
         return "Empate";
    }

}

string homens_sao_mais_estressados_que_mulheres(vector<int> fila){
    int countM = 0;
    int countH = 0;
    for (int i = 0; i < fila.size(); i++){
        if(fila[i]<0){
            countM += fila[i];
        }else{
            countH+=fila[i];
        }   
    }
    countM *= -1;
    if(countM>countH){
         cout << "Mulheres" << endl;
         return "Mulheres";
    }else if(countH>countM){
         cout << "Homens" << endl;
         return "Homens";
    }else{
        cout << "Empate" << endl;
         return "Empate";
    }

}

int main()
{
    existe({-1, -50, -99}, -1); // true
    existe({-1, -50, -99}, 10); // false
    

    contar({-1, -50, -1, -99}, -1); // 2
    contar({-1, -50, -1, -99}, 10); // 0

    procurar({-1, -50, -1 -99}, -50); // 1
    procurar({-1, -50, -1, -99}, 10); // -1

    procurar_apartir({5, 3, -1, -50, -1, -99}, -1, 0); // 2
    procurar_apartir({5, 3, -1, -50, -1, -99}, -1, 3); // 4
    procurar_apartir({5, 3, -1, -50, -1, -99}, -1, 4); // 4

    procurar_menor({5, 3, -1, -50, -1, -99}); // -99

    procurar_pos_menor({5, 3, -1, -50, -1, -99}); // 5

    procurar_pos_menor_apartir({5, 3, -1, -50, -1, 10}, 3); // 3

    procurar_melhor_pos_se({5, 3, -1, -50, -1, -99}); // 1
    procurar_melhor_pos_se({-1, -50, -1, -99}); // -1

    calcular_stress_medio({-1, -50, -1, -99}); // -1

    mais_homens_ou_mulheres({5, 3, -1, -50, -1, -99}); // "mulheres"
    mais_homens_ou_mulheres({5, 3, 1, -50, -1, -99}); // "empate"
    mais_homens_ou_mulheres({5, 3, 1, -50, -1, 99}); // "homens"

    qual_metade_eh_mais_estressada({5, 3, -1, -50, -1, -99}); // "segunda"
    qual_metade_eh_mais_estressada({50, 98, 2, -50, -1, -99}); // "empate"
    qual_metade_eh_mais_estressada({-51, 99, 1, -50, -1, -99}); // "primeira"

    homens_sao_mais_estressados_que_mulheres({1,2,3,-5,-6,-7}); //"mulheres"
    homens_sao_mais_estressados_que_mulheres({-1,-2,-3,5,6,7}); //"homens"
    homens_sao_mais_estressados_que_mulheres({-7,-6,-5,5,6,7}); //"empate"
}