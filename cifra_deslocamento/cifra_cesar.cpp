#include <iostream>
#include <string>
#include <vector>
#include <cctype>
#include <limits>
#define desync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

string cifrarTexto(string& texto, int k){
    string resultado = "";

    for(char c: texto){
        if(isalpha(c)){
            if(isupper(c)){
                char b = 'A';
            }
            else {
                char b = 'a';
            }

            char deslocado = (c - b + k) % 26 + b;
            resultado += deslocado;
        }
        else{
            resultado += c;
        }
    }

    return resultado;
}

string decifraTexto(string& textoCifrado, int k){
    return cifrarTexto(textoCifrado, (26-(k%26)));
}

void brute_force(string& textoCifrado){
    cout << "Tentativas de forca bruta" << endl;

    for(int k = 0; k<26; k++){
        string tentativa = decifraTexto(textoCifrado, k);
        cout << "Chave " << k << ": " << tentativa << endl;
    }

    return;
}

const double freq_esperada[26] = {
    13.9, 1.0, 4.4, 5.4, 12.2, 1.0, 1.2, 0.8, 6.9, 0.4, 
    0.1, 2.8, 4.2, 5.3, 10.8, 2.9, 0.9, 6.9, 7.9, 4.9, 
    4.0, 1.3, 0.0, 0.3, 0.0, 0.4
};

vector<double> calculaFrequenciaObservada(string& texto){
    vector<double> contador(26, 0.0);

    int total = 0;
    for(char c: texto){
        if(isalpha(c)){
            char letra = toupper(c);
            contador[letra - 'A'] += 1.0;
            total++;
        }
    }

    for(int i = 0; i < 26; i++){
        if(total > 0){
            contador[i] = contador[i] * 100.0 / total;
        } 
        else {
            contador[i] = 0.0;
        }
    }

    return contador;
}

void analise_de_frequencia(string& textoCifrado){
    vector<double> freq_observada = calculaFrequenciaObservada(textoCifrado);

    double melhorScore = numeric_limits<double>::infinity();
    int melhork = 0;

    for(int k = 0; k < 26; k++){
        double qui = 0.0;

        for(int letra = 0; letra < 26; letra++){
            int idxDeslocado = (letra + k) % 26;
            double freq_obs = freq_observada[idxDeslocado];
            double freq_exp = freq_esperada[letra];

            if(freq_exp > 0){
                qui += (freq_obs - freq_exp) * (freq_obs - freq_exp) / freq_exp;
            }
        }
    }

    if(qui < melhorScore){
        melhorScore = qui;
        melhork = k;
    }

    int deslocamentoDecifragem = 26 - melhork;
    string textoDecifrado = cifrarTexto(textoCifrado, deslocamentoDecifragem);

    cout << "Chave estimada (menor χ²): " << melhork 
         << " (χ² = " << melhorScore << ")" << endl;
    cout << "Texto Deifrado pela frequência: " << textoDecifrado << endl;

    return;
}


int main(){
    desync;
    string textoOriginal = "SegurancaComputacionalListaExercicio";

    int chave = 3;
    string textoCifrado = cifrarTexto(textoOriginal, chave);
    string textoDecifrado = decifraTexto(textoCifrado, chave);

    cout << "Texto Original: " << textoOriginal << endl;
    cout << "Texto Cifrado: " << textoCifrado << endl;
    cout << "Texto Decifrado: " << textoDecifrado << endl;
    cout << endl;

    brute_force(textoCifrado);
    analise_de_frequencia(textoCifrado);

    return 0;
}