#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#define desync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

vector<int> gerarChaveNumerica(string& chaveTexto){
    int tamanho = chaveTexto.size();

    vector<pair<char,int>> idx_letras;
    for(int i = 0; i < tamanho; i++){
        idx_letras.push_back({toupper(chaveTexto[i]), i});
    }

    sort(idx_letras.begin(), idx_letras.end());

    vector<int> chaveNumerica(tamanho);
    for(int nova_pos = 0; nova_pos < tamanho; nova_pos++){
        int idx = idx_letras[nova_pos].second;
        chaveNumerica[idx] = nova_pos;
    }

    return chaveNumerica;
}

string padTexto(string& texto, int numColunas){
    string resultado = texto;
    int resto = texto.size() % numColunas;

    if(resto != 0){
        int padding = numColunas - resto;
        resultado += string(padding, '*');
    }

    return resultado;
}

string cifrarTexto(string& textoOriginal, vector<int>& chave){
    int numColunas = chave.size();
    string texto = padTexto(textoOriginal, numColunas);
    int numLinhas = texto.size() / numColunas;

    vector<vector<char>> matriz(numLinhas, vector<char>(numColunas));
    int idx = 0;
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            matriz[i][j] = texto[idx++];
        }
    }

    string resultado = "";
    for(int coluna : chave){
        for(int linha = 0; linha < numLinhas; linha++){
            resultado += matriz[linha][coluna];
        }
    }

    return resultado;
}

string decifrarTexto(string& textoCifrado, vector<int>& chave){
    int numColunas = chave.size();
    int numLinhas = textoCifrado.size() / numColunas;

    vector<vector<char>> matriz(numLinhas, vector<char>(numColunas));

    vector<int> posColuna(numColunas);
    for(int i = 0; i < numColunas; i++){
        posColuna[chave[i]] = i;
    }

    int idx = 0;
    for(int coluna: chave){
        for(int i = 0; i < numLinhas; i++){
            matriz[i][coluna] = textoCifrado[idx++];
        }
    }

    string resultado = "";
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            resultado += matriz[i][j];
        }
    }

    return resultado;
}

int main(){
    desync;

    string textoOriginal = "SegurancaComputacionalListaExercicio";
    string chaveTexto = "MEGABUCK";
    vector<int> chaveNumerica = gerarChaveNumerica(chaveTexto);

    cout << "Chave-palavra: " << chaveTexto << endl;
    cout << "Chave numérica: ";
    for (int val : chaveNumerica) cout << val << " ";
    cout << endl;

    string textoCifrado = cifrarTexto(textoOriginal, chaveNumerica);
    string textoDecifrado = decifrarTexto(textoCifrado, chaveNumerica);

    cout << "Texto original:   " << textoOriginal << endl;
    cout << "Texto cifrado:    " << textoCifrado << endl;
    cout << "Texto decifrado:  " << textoDecifrado << endl;
    cout << endl;

    return 0;
}