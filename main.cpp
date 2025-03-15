#include <iostream>
#include <cstring>

using namespace std;

int main() {

    int anno_corrente = 0;
    int nata_cr = 0;
    int focaccin = 0;
    int focacciout = 0;
    int focaccrimaste = 0;

    int età = 0;
    char nome_età[10] = "";

    cout << "Inserisci l'anno corrente: " << endl;
    cin >> anno_corrente;

    cout << "Inserisci l'anno di nascita di cappuccetto rosso: " << endl;
    cin >> nata_cr;

    cout << "Inserisci il numero di foccaccine che porta cappuccetto rosso:  " << endl;
    cin >> focaccin;

    cout << "Inserisci il numero di foccaccine che il lupo sottrae a cappuccetto rosso:  " << endl;
    cin >> focacciout;


    if (anno_corrente > 0 && nata_cr > 0) {
        età = anno_corrente - nata_cr;
        if (età < 12) {
            strcpy(nome_età ,  "bambina");
        }
        if (età > 12){
            strcpy(nome_età ,  "ragazza");
        }
    }

    cout << "C era una " << nome_età << " di nome Cappuccetto Rosso, che si recava dalla sua nonnina al di la del bosco per " << endl;
    cout << "portarle " << focaccin << " focaccine calde calde." << endl;
    cout << "Durante il tragitto, il Lupo Cattivo rubo' a Cappuccetto Rosso ben " << focacciout << " focaccine" << endl;
    cout << "Giunta infine dalla nonna, cappuccetto le porse il cestino e la nonna disse: "<< endl;

    focaccrimaste = focaccin - focacciout;

    if (focaccrimaste > 0) {
        cout << "grazie nipotina mia per queste " << focaccrimaste << " focaccine";
    }
    if (focaccrimaste == 0 || focaccrimaste < 0) {
        cout << "grazie nipotina mia per avermi fatto visita!";
    }



    return 0;
}