#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    
    // Introduzir as variáveis
    double AC1, AC2, AF, AG;
    char continuar = 's';
    string nome;
    int RA;
    
    // Iniciar o 'while' para que possa repetir
    while (continuar == 's' || continuar == 'S') {
        
    // Interface do usuario e recebimento das informacoes
    cout << "Digite seu nome: " << endl;
    cin >> nome;
    cout << "Digite seu RA: " << endl;
    cin >> RA;
    cout << "Digite a sua nota da AC1 >>> " << endl;
    cin >> AC1;
    cout << "Digite a sua nota da AC2 >>> " << endl;
    cin >> AC2;
    cout << "Digite a sua nota da AF >>> " << endl;
    cin >> AF;
    cout << "Digite a sua nota da AG >>> " << endl;
    cin >> AG;
    
    // Calcular a nota X a média da Facens
    double media = (AC1*1.5 + AC2*3.5 + AF*4 + AG*1);
    // A média dividida por 10
    media = (media / 10);
    
    // Interface para dizer a media
    cout << "Sua media eh:" << " " << (media) << endl;
    // Interface do resultado do usuário com o uso do 'switch'
    switch ((int)media) {
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
             cout << (RA) << ".  " << (nome) << ".  " << " Parabens, voce foi aprovado!" << endl << endl;
             break;
             
        case 4:
        case 3:
             cout << (RA) << ".  " << (nome) << ". " << " Voce devera realizar a prova substitutiva." << endl;
             break;
             
        default:
             cout << (RA) << ".  " <<  (nome) << ".  " << "Voce foi reprovado..." << endl << endl;
             break;
    }
    // Finalizacao do 'while' para que o programa posssa repetir
    cout << "Deseja calcular sua media novamente? (s/n) " << endl;
    cin >> continuar;
    }
    return 0;
}