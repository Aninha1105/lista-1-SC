#include <bits/stdc++.h>
#define desync ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

using namespace std;

map<string,double> DIGRAFOS ={
    {"AA",5.13}, {"AB",2.35}, {"AC",10.05}, {"AD",14.80}, {"AE",4.49}, {"AF",2.27}, {"AG",2.14}, {"AH",0.48}, {"AI",5.11}, {"AJ",0.57},
    {"AK",0.09}, {"AL",9.03}, {"AM",8.08}, {"AN",11.62}, {"AO",11.84}, {"AP",5.84}, {"AQ",1.85}, {"AR",14.89}, {"AS",16.41}, {"AT",5.01},
    {"AU",2.26}, {"AV",3.04}, {"AW",0.04}, {"AX",0.15}, {"AY",0.08}, {"AZ",0.84}, {"BA",1.90}, {"BB",0.02}, {"BC",0.03}, {"BD",0.02},
    {"BE",1.90}, {"BI",1.02}, {"BJ",0.10}, {"BL",0.83}, {"BM",0.03}, {"BO",1.26}, {"BP",0.02}, {"BR",1.83}, {"BS",0.22}, {"BT",0.07},
    {"BU",0.46}, {"BV",0.02}, {"BY",0.01}, {"CA",12.57}, {"CB",0.01}, {"CC",0.45}, {"CD",0.07}, {"CE",3.78}, {"CF",0.01}, {"CG",0.01},
    {"CH",1.12}, {"CI",6.09}, {"CK",0.09}, {"CL",0.80}, {"CM",0.02}, {"CN",0.15}, {"CO",14.00}, {"CP",0.10}, {"CQ",0.02}, {"CR",1.38},
    {"CS",0.03}, {"CT",1.62}, {"CU",1.88}, {"DA",11.92}, {"DB",0.02}, {"DC",0.03}, {"DD",0.03}, {"DE",20.33}, {"DF",0.01}, {"DG",0.02},
    {"DH",0.02}, {"DI",4.96}, {"DJ",0.04}, {"DL",0.02}, {"DM",0.20}, {"DN",0.03}, {"DO",14.45}, {"DP",0.05}, {"DQ",0.03}, {"DR",0.50},
    {"DS",0.07}, {"DT",0.02}, {"DU",1.13}, {"DV",0.07}, {"DW",0.01}, {"DY",0.02}, {"EA",6.34}, {"EB",0.95}, {"EC",7.25}, {"ED",5.77}, 
    {"EE",3.34}, {"EF",2.17}, {"EG",2.81}, {"EH",0.44}, {"EI",5.31}, {"EJ",0.89}, {"EK",6.07}, {"EL",5.97}, {"EM",10.92}, {"EN",14.94},
    {"EO",3.24}, {"EP",3.99}, {"EQ",1.66}, {"ER",13.33}, {"ES",20.71}, {"ET",3.53}, {"EU",3.28}, {"EV",2.35}, {"EW",0.08}, {"EX",1.52},
    {"EY",0.06}, {"EZ",0.73}, {"FA",1.56}, {"FC",0.04}, {"FD",0.01}, {"FE",2.03}, {"FF",0.04}, {"FI",2.64}, {"FL",0.21}, {"FM",0.01}, 
    {"FN",0.01}, {"FO",2.21}, {"FP",0.02}, {"FR",0.81}, {"FS",0.01}, {"FT",0.03}, {"FU",0.64}, {"GA",2.60}, {"GB",0.01}, {"GC",0.02}, 
    {"GD",0.03}, {"GE",1.74}, {"GF",0.01}, {"GG",0.01}, {"GH",0.04}, {"GI",1.22}, {"GK",0.01}, {"GL",0.13}, {"GM",0.13}, {"GN",0.21}, 
    {"GO",2.05}, {"GP",0.02}, {"GR",1.56}, {"GS",0.03}, {"GT",0.05}, {"GU",2.52}, {"HA",2.70}, {"HC",0.02}, {"HD",0.02}, {"HE",1.44}, 
    {"HF",0.01}, {"HH",0.02}, {"HI",0.53}, {"HL",0.02}, {"HM",0.03}, {"HN",0.06}, {"HO",2.26}, {"HP",0.01}, {"HR",0.03}, {"HS",0.01},
    {"HT",0.04}, {"HU",0.24}, {"IA",8.15}, {"IB",0.67}, {"IC",6.83}, {"ID",5.54}, {"IE",1.16}, {"IF",0.85}, {"IG",1.50}, {"IH",0.02},
    {"II",0.11}, {"IJ",0.05}, {"IK",0.05}, {"IL",2.52}, {"IM",3.70}, {"IN",8.22}, {"IO",4.84}, {"IP",1.07}, {"IQ",0.18}, {"IR",4.50},
    {"IS",8.79}, {"IT",4.90}, {"IU",0.56}, {"IV",2.50}, {"IX",0.45}, {"IZ",1.31}, {"JA",1.14}, {"JE",0.56}, {"JI",0.03}, {"JO",1.04},
    {"JU",0.75}, {"KA",0.10}, {"KC",0.01}, {"KD",0.01}, {"KE",0.11}, {"KF",0.01}, {"KH",0.02}, {"KI",0.10}, {"KK",0.01}, {"KL",0.02},                  
    {"KM",0.02}, {"KN",0.01}, {"KO",0.09}, {"KP",0.01}, {"KR",0.02}, {"KS",0.03}, {"KT",0.01}, {"KU",0.02}, {"KY",0.01}, {"LA",4.93},
    {"LB",0.15}, {"LC",0.52}, {"LD",1.32}, {"LE",3.96}, {"LF",0.18}, {"LG",0.59}, {"LH",1.92}, {"LI",5.22}, {"LJ",0.06}, {"LK",0.02},
    {"LL",0.31}, {"LM",0.78}, {"LN",0.24}, {"LO",3.43}, {"LP",0.45}, {"LQ",0.31}, {"LR",0.10}, {"LS",0.35}, {"LT",1.39}, {"LU",1.16},
    {"LV",0.56}, {"LY",0.04}, {"LA",0.10}, {"MA",11.35}, {"MB",1.48}, {"MC",1.08}, {"MD",1.29}, {"ME",8.13}, {"MF",0.37}, {"MG",0.20}, 
    {"MH",0.12}, {"MI",3.37}, {"MJ",0.16}, {"MK",0.01}, {"ML",0.30}, {"MM",0.66}, {"MN",0.54}, {"MO",5.21}, {"MP",3.49}, {"MQ",0.58},
    {"MR",0.38}, {"MS",0.86}, {"MT",0.54}, {"MU",1.88}, {"MV",0.27}, {"MW",0.01}, {"MY",0.01}, {"NA",8.65}, {"NB",0.04}, {"NC",4.47}, 
    {"ND",5.27}, {"NE",2.24}, {"NF",0.72}, {"NG",1.05}, {"NH",1.91}, {"NI",3.43}, {"NJ",0.14}, {"NK",0.07}, {"NL",0.04}, {"NM",0.05}, 
    {"NO",6.13}, {"NP",0.06}, {"NQ",0.25}, {"NR",0.10}, {"NS",3.05}, {"NT",13.27}, {"NU",1.30}, {"NV",0.64}, {"NW",0.00}, {"NY",0.03},
    {"NZ",0.06}, {"NV",0.64}, {"OA",5.41}, {"OB",2.08}, {"OC",5.37}, {"OD",9.58}, {"OE",6.29}, {"OF",1.89}, {"OG",1.73}, {"OH",0.47}, 
    {"OI",2.79}, {"OJ",0.83}, {"OK",0.06}, {"OL",3.66}, {"OM",7.79}, {"ON",10.14}, {"OO",2.04}, {"OP",6.30}, {"OQ",1.84}, {"OR",11.85}, 
    {"OS",18.26}, {"OT",2.55}, {"OU",4.06}, {"OV",2.24}, {"OW",0.08}, {"OX",0.25}, {"OY",0.03}, {"OZ",0.16}, {"PA",6.74}, {"PC",0.17}, 
    {"PD",0.05}, {"PE",5.23}, {"PF",0.02}, {"PG",0.01}, {"PH",0.04}, {"PI",0.93}, {"PJ",0.01}, {"PL",0.86}, {"PM",0.02}, {"PN",0.03},
    {"PO",7.46}, {"PP",0.10}, {"PQ",0.02}, {"PR",6.02}, {"PS",0.26}, {"PT",0.21}, {"PU",0.93}, {"PV",0.01}, {"QU",9.38}, {"RA",17.43}, 
    {"RB",0.28}, {"RC",2.34}, {"RD",2.41}, {"RE",14.16}, {"RF",0.31}, {"RG",0.92}, {"RH",0.07}, {"RI",8.06}, {"RJ",0.10}, {"RK",0.05}, 
    {"RL",0.41}, {"RM",1.88}, {"RN",1.61}, {"RO",8.11}, {"RP",0.85}, {"RQ",0.81}, {"RR",1.84}, {"RS",1.31}, {"RT",3.73}, {"RU",1.53},
    {"RV",0.66}, {"RW",0.01}, {"RY",0.05}, {"RZ",0.02}, {"SA",9.19}, {"SB",0.66}, {"SC",4.18}, {"SD",6.33}, {"SE",13.47}, {"SF",1.19}, 
    {"SG",0.39}, {"SH",0.57}, {"SI",4.72}, {"SJ",0.38}, {"SK",0.06}, {"SL",0.65}, {"SM",2.37}, {"SN",1.82}, {"SO",5.91}, {"SP",5.20},
    {"SQ",1.47}, {"SR",1.05}, {"SS",6.33}, {"ST",9.80}, {"SU",2.58}, {"SV",0.63}, {"SW",0.02}, {"SY",0.01}, {"SZ",0.03}, {"TA",11.46}, 
    {"TB",0.01}, {"TC",0.09}, {"TD",0.03}, {"TE",12.72}, {"TF",0.01}, {"TG",0.01}, {"TH",0.15}, {"TI",6.17}, {"TJ",0.01}, {"TL",0.07}, 
    {"TM",0.06}, {"TN",0.04}, {"TO",9.33}, {"TP",0.07}, {"TQ",0.01}, {"TR",5.83}, {"TS",0.11}, {"TT",0.12}, {"TU",2.94}, {"TV",0.03}, 
    {"TW",0.01}, {"TY",0.02}, {"TZ",0.02}, {"UA",3.98}, {"UB",1.01}, {"UC",1.05}, {"UD",1.22}, {"UE",8.55}, {"UF",0.14}, {"UG",0.87}, 
    {"UH",0.03}, {"UI",2.55}, {"UJ",0.15}, {"UK",0.02}, {"UL",2.15}, {"UM",5.54}, {"UN",3.20}, {"UO",0.51}, {"UP",0.96}, {"UQ",0.18}, 
    {"UR",2.72}, {"US",2.07}, {"UT",2.17}, {"UU",0.15}, {"UV",0.26}, {"UX",0.07}, {"UZ",0.24}, {"VA",3.36}, {"VC",0.01}, {"VD",0.01},
    {"VE",4.75}, {"VI",3.19}, {"VL",0.01}, {"VM",0.01}, {"VO",1.75}, {"VP",0.01}, {"VR",0.17}, {"VS",0.01}, {"VU",0.07}, {"WA",0.11}, 
    {"WE",0.05}, {"WH",0.01}, {"WI",0.06}, {"WN",0.01}, {"WO",0.04}, {"WS",0.01}, {"XA",0.45}, {"XC",0.13}, {"XD",0.01}, {"XE",0.32}, 
    {"XI",0.58}, {"XM",0.01}, {"XO",0.20}, {"XP",0.42}, {"XS",0.01}, {"XT",0.24}, {"XU",0.03}, {"XV",0.01}, {"XX",0.01}, {"YA",0.06}, 
    {"YB",0.01}, {"YC",0.02}, {"YD",0.02}, {"YE",0.05}, {"YF",0.01}, {"YI",0.01}, {"YL",0.02}, {"YM",0.02}, {"YN",0.02}, {"YO",0.05}, 
    {"YP",0.01}, {"YR",0.01}, {"YS",0.03}, {"YT",0.01}, {"YU",0.01}, {"YX",0.01}, {"ZA",1.20}, {"ZB",0.01}, {"ZC",0.05}, {"ZD",0.15}, 
    {"ZE",0.86}, {"ZF",0.02}, {"ZH",0.01}, {"ZI",0.29}, {"ZJ",0.01}, {"ZL",0.01}, {"ZM",0.08}, {"ZN",0.05}, {"ZO",0.33}, {"ZP",0.07}, 
    {"ZQ",0.08}, {"ZR",0.02}, {"ZS",0.05}, {"ZT",0.02}, {"ZU",0.06}, {"ZV",0.01}, {"ZZ",0.02} 
};


map<string,double> TRIGRAFOS = {
    {"QUE",72.29}, {"ENT",70.23}, {"NTE",55.08}, {"ADO",51.16}, {"ADE",50.04},
    {"ODE",45.43}, {"ARA",45.37}, {"EST",43.90}, {"RES",43.08}, {"CON",41.73},
    {"COM",40.95}, {"STA",30.95}, {"DOS",38.08}, {"CAO",37.97}, {"PAR",36.29},
    {"ACA",35.55}, {"MEN",34.65}, {"SDE",33.45}, {"ICA",33.05}, {"ESE",31.87},
    {"ACO",31.54}, {"ADA",31.45}, {"POR",31.39}, {"NTO",31.14}, {"OSE",30.82},
    {"DES",30.51}, {"ASE",27.76}, {"ERA",27.18}, {"OES",26.60}, {"UMA",25.73},
    {"TRA",25.66}, {"IDA",25.55}, {"DAD",24.84}, {"ANT",24.54}, {"ARE",24.30},
    {"ONT",24.05}, {"PRE",24.04}, {"IST",23.91}, {"TER",23.89}, {"AIS",23.37}
};


vector<int> gerarChaveNumerica(string& chaveTexto){
    int tamanho = chaveTexto.size();

    vector<pair<char,int>> indexLetras;
    for(int i = 0; i < tamanho; i++){
        indexLetras.push_back({toupper(chaveTexto[i]), i});
    }

    sort(indexLetras.begin(), indexLetras.end());

    vector<int> chaveNumerica(tamanho);
    for(int novaPosicao = 0; novaPosicao < tamanho; novaPosicao++){
        int index = indexLetras[novaPosicao].second;
        chaveNumerica[index] = novaPosicao;
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
    int index = 0;
    for(int i = 0; i < numLinhas; i++){
        for(int j = 0; j < numColunas; j++){
            matriz[i][j] = texto[index++];
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

    int index = 0;
    for(int coluna: chave){
        for(int i = 0; i < numLinhas; i++){
            matriz[i][coluna] = textoCifrado[index++];
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

double calcularScore(const string& texto) {
    double score = 0.0;

    for (size_t i = 0; i + 1 < texto.size(); ++i) {
        string par = texto.substr(i,2);
        transform(par.begin(), par.end(), par.begin(), ::toupper);
        auto it = DIGRAFOS.find(par);
        if (it != DIGRAFOS.end())
            score += it->second;
    }

    for (size_t i = 0; i + 2 < texto.size(); ++i) {
        string tri = texto.substr(i, 3);
        transform(tri.begin(), tri.end(), tri.begin(), ::toupper);
        auto it = TRIGRAFOS.find(tri);
        if (it != TRIGRAFOS.end())
            score += it->second;
    }

    return score;
}

void bruteForceComFrequencia(string& textoCifrado){
    cout << "-----Tentativas de forca bruta-----" << endl;
    string melhorDecifrado;
    vector<int> melhorChave(6), chave = {0, 1, 2, 3, 4, 5};

    double melhorScore = -1.0;
    int permutacoes = 0;

    do{
        string tentativa = decifrarTexto(textoCifrado, chave);
        double score = calcularScore(tentativa);

        if(score > melhorScore){
            melhorScore = score;
            melhorChave = chave;
            melhorDecifrado = tentativa;
        }

        cout << "Chave: ";
        for(int col : chave) cout << col << " ";
        cout << " => " << tentativa << endl;

        permutacoes++;
    } while(next_permutation(chave.begin(), chave.end()));

    cout << "Total de tentativas: " << permutacoes << endl;

    cout << endl;
    cout << "-----Distribuição de Frequência-----" << endl;
    cout << "Score: " << melhorScore << " | Chave: ";
    for(int col: melhorChave) cout << col << " ";
    cout << endl;
    cout << "Texto Decifrado pela frequência: " << melhorDecifrado << endl;
}

int main(){
    desync;

    string textoOriginal = "Amoreumfogoqueardesemsevereferidaquedoienaosesenteeumcontentamentodescontenteedorquedesatinasemdoer";
    string chaveTexto = "CAMOES";
    vector<int> chaveNumerica = gerarChaveNumerica(chaveTexto);

    cout << "Palavra-chave: " << chaveTexto << endl;
    cout << "Chave numérica: ";
    for (int val : chaveNumerica) cout << val << " ";
    cout << endl;
    cout << "Tamanho da chave: " << chaveNumerica.size() << endl;
    cout << endl;

    string textoCifrado = cifrarTexto(textoOriginal, chaveNumerica);
    string textoDecifrado = decifrarTexto(textoCifrado, chaveNumerica);

    cout << "Texto original:   " << textoOriginal << endl;
    cout << "Texto cifrado:    " << textoCifrado << endl;
    cout << "Texto decifrado:  " << textoDecifrado << endl;
    cout << "Tamanho do texto: " << textoOriginal.size() << endl;
    cout << endl;
    
    bruteForceComFrequencia(textoCifrado);
    

    return 0;
}