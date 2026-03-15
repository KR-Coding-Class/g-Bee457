// Bartlomiej Ligeza
// Program do liczenia liczby znakow w tekscie
 
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string slowo;
    string slo_odw;

    int licznik_liczb = 0;
    int licznik_samo = 0;

    cout << "Napisz slowo(bez polskich znakow): " << endl; 
    getline(cin,slowo);
    const int size = slowo.length();


    if (slowo.empty()){
        cout << "Blad puste slowo!" << endl;
        return 1;
    }
    cout << "Liczba znakow w tekscie (z bialymi znakami): " << size << endl;

    for (int i = size - 1; i >= 0; i--) {
        slo_odw += slowo[i];
    } 
    cout << "Tekst od tylu: " << slo_odw << endl;

    for (int i = 0; i < size; i++) {
        if (i == 0 || slowo[i - 1] == ' ') {
            slowo[i] = toupper(slowo[i]);
        }
    }
    cout << "Tekst z duzymi literami: " << slowo << endl; 

    for (int i = 0; i < size; i++){
        switch(tolower(slowo[i])) {
            case 'a':
            case 'o':
            case 'i':
            case 'e':
            case 'u':
            case 'y':
                licznik_samo++;
                break;
        }
    }
    
    for (int i = 0; i < size; i++) {
        switch(tolower(slowo[i])) {
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                licznik_liczb += (slowo[i] - '0' );
                break;
        }
    }
    cout << "Ilosc samoglosek: " << licznik_samo << endl;
    cout << "Suma cyfr: " << licznik_liczb << endl;
}