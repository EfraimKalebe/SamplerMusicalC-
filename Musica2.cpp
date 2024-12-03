#include <iostream> // cout ou cin ou endl
#include <conio.h> // captura as teclas getch()
#include <windows.h> // função beep()
#include <string> 

using namespace std;

void tocarNota(float frequencia, int duracao) {
    if (frequencia > 0) {
        Beep(frequencia, duracao);
    }
}

void Piano() {
    cout << "Comece a Tocar..." << endl;
    cout << "Tecle 'q' para encerrar e voltar ao menu principal." << endl;
    cout << "As teclas para tocar são A-S-D-F-G-H-J-K" << endl;

    while (true) {
        char tecla = getch();

        switch (tecla) {
        case 'a':
            tocarNota(261, 300); // do
            break;
        case 's':
            tocarNota(293, 300); // re
            break;
        case 'd':
            tocarNota(329, 300); // mi
            break;
        case 'f':
            tocarNota(349, 300); // fa
            break;
        case 'g':
            tocarNota(392, 300); // sol
            break;
        case 'h':
            tocarNota(440, 300); // la
            break;
        case 'j':
            tocarNota(493, 300); // si
            break;
        case 'k':
            tocarNota(523, 300); // do
            break;
        case 'q':
            cout << "ENCERRANDO O PIANO VIRTUAL..." << endl;
            return;
        default:
            break;
        }
    }
}

void Guitarra() {
    cout << "Comece a Tocar..." << endl;
    cout << "Tecle 'q' para encerrar e voltar ao menu principal." << endl;
    cout << "As teclas para tocar são A-S-D-F-G-H" << endl;
    while (true) {
        char tecla = getch();

        switch (tecla) {
        case 'a':
            tocarNota(82, 407); // do
            break;
        case 's':
            tocarNota(110, 307); // re
            break;
        case 'd':
            tocarNota(146, 832); // mi
            break;
        case 'f':
            tocarNota(195, 998); // fa
            break;
        case 'g':
            tocarNota(246, 942); // sol
            break;
        case 'h':
            tocarNota(329, 628); // la
            break;
        case 'q':
            cout << "ENCERRANDO A GUITARRA VIRTUAL..." << endl;
            return;
        default:
            break;
        }
    }
}

int main() {
    int option;

    while (true) {
        system("cls");
        cout << "Bem vindo ao criador de trilhas sonoras" << endl;
        cout << "VAMOS ESCOLHER!!!" << endl;
        cout << "1. Piano" << endl;
        cout << "2. Guitarra" << endl;
        cout << "3. Sair" << endl;
        cout << "Informe o instrumento desejado: ";
        cin >> option;

        system("cls");

        switch (option) {
        case 1:
            Piano();
            break;
        case 2:
            Guitarra();
            break;
        case 3:
            cout << "Ate mais!!" << endl;
            return 0;
        default:
            cout << "Opção inválida. Tente novamente!" << endl;
            system("pause");
            break;
        }
    }

    return 0;
}
