#include <iostream>             // Input/Output stream library
#include <fstream>              // File stream library
#include <vector>               // Vettori dinamici
using namespace std;            // Evito di dover specificare std::

int main() {
    /***********************************************
     * 1- Lettura file di input
     ************************************************/
    int N;                                  // N conterrà il numero di righe lette dal file di input
    ifstream inputFile("input.txt");        // Apro il file input.txt come input
    inputFile >> N;                         // Leggo il primo intero e lo salvo nella variabile N
    cout << "Ho letto:" <<  N << endl;      // Stampa di debug

    vector<string> arrayInput;              // Creo un vettore per contenere tutte le stringhe successive
    for (int i=0; i<N; i++){                // Per ogni riga N del file in input
        string rigaInput;                   // Variabile d'appoggio per la lettura di una riga di input
        inputFile >> rigaInput;             // Leggo dal file di input una riga alla volta
        arrayInput.push_back(rigaInput);    // Salvo nel vettore (in automatico alloca una nuova casella ed aumenta la dimensione del vettore)
    }

    for(int i=0; i<N; i++){                 // Faccio una stampa di controllo
        cout << "arrayInput[" << i << "] = " << arrayInput[i] << endl;
    }
    /***********************************************
     * 2- Soluzione del problema
     * Qui dovrete confrontare le stringhe per
     * decidere il risultato finale 
     ************************************************/
    
    // ...
    string output = "0";
    // ...

    /***********************************************
     * 3- Scrittura del risultato in output
     ************************************************/
    ofstream outputFile("output.txt");      // Apro il file di output (lo crea in automatico) output.txt
    outputFile << output;                   // Scrivo il risultato in output

    return 0;
}