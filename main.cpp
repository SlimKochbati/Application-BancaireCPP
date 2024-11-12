
#include <iostream>
#include "Banque.cpp"
#include "client.cpp"
#include <windows.h> // Pour afficher les symboles

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8); 
    system("CLS");
    
    int tentatives = 0;
    while (tentatives < 3) {
        system("CLS");
        cout << "1.SLIM KOCHBATI" << endl <<"2. KHELFA RIYAD\n";

        
        int choix;
        cin >> choix;
        
        if (choix == 1) {
            Client client("FR-AAAC1234Z567", "KOCHBATI", "SLIM", "0601234567");
            Banque monCompte("0002", 150, "FR76 3000 4028 3798 7654 3210 123");
            
            cout << "\n\tEntrer le code de securite : ";
            int code;
            cin >> code;
            
            if (code == 1111) {
                system("CLS");
                cout << "\n\tBienvenue\n\n\n";
                system("pause");
                monCompte.MENU();
                return 0;
            }
        } else if (choix == 2) {
            Client client2("FR-AAAC9876Y543", "KHELFA", "RIYAD", "0607654321");
            Banque monCompte2("0003", 200, "FR76 3000 4028 3798 7654 3210 456");
            
            cout << "\n\tEntrer le code de securite: ";
            int code;
            cin >> code;
            
            if (code == 2222) {
                system("CLS");
                cout << "\n\tBienvenue\n\n\n";
                system("pause");
                monCompte2.MENU();
                return 0;
            }
        } else {
            system("CLS");
            cout << "ERREUR\n\n Il vous reste " << (2 - tentatives) << " essais \n\n";
            system("pause");
            tentatives++;
        }
    }
    
    return 0;
}
