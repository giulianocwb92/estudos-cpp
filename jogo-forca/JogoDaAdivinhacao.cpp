#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main (){
    cout << "***************************************"<< endl;
    cout << "* Boas vindas ao Jogo da Adivinhacao! *"<< endl;
    cout <<"***************************************"<< endl;

    cout << "Escolha o seu nivel de dificuldade: "<<endl;
    cout << "Facil (F), Media (M) ou Dificil (D) " <<endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;

    if(dificuldade == 'F'){
        numero_de_tentativas = 15;
    }
    else if(dificuldade == 'M'){
        numero_de_tentativas = 10;
    }
    else{
        numero_de_tentativas = 5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand()%100;
    //cout << "O numero secreto e " << NUMERO_SECRETO << " nao conte pra ninguem" << endl;

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++)
    {
        //tentativas++;
        cout << "Tentativa "<<tentativas<<endl;
        int chute;
        cout << "Qual seu chute? ";
        cin >> chute;
        cout<<"O valor do seu chute e: " << chute << endl;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos = pontos - pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            cout<<"Parabens voce acertou"<<endl;
            nao_acertou = false;
            break;
        }
        else if (maior)
        {
            cout<<"Seu chute eh maior que o numero secreto"<<endl;
        }
        else{
            cout<<"Seu chute eh menor que o numero secreto"<<endl;
        }
    }

    

    if(nao_acertou){
        cout << "Voce nao ganhou, tente novamente em uma proxima"<<endl;
    }

    else{
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuacao final foi de "<< pontos << endl;
        cout<<"Voce acertou em " <<tentativas<< " tentativas!"<<endl;
    }

    cout << "Fim de jogo" << endl;
}