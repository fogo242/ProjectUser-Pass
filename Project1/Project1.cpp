/*
 * main.cpp
 *
 *  Created on: 30/06/2013
 *      Author: francves
 */

#include <iostream>
#include <stdlib.h>

using namespace std;

void login();

int main() {
    login();
    return 0;
}

void login() {
    string nombre;
    string pass;
    int i;
    for (i = 1; i < 4; i++) {
        system("cls");
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << "                                            ***WARNING RESTRICTED ACCESS*** " << endl;
        cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
        cout << endl;
        cout << "                                           <<<INSERT your ID and ACCES CODE>>>: " << endl;
        cout << endl;
        cout << "                                           INSERT ID:" << endl;
        cin >> nombre;
        if (nombre == "Euclides") {
            cout << "                                           ID ACCEPTED, INSERT YOUR ACCESS CODE" << endl;
            cin >> pass;
            if (pass == "coutEuclideS3388") {
                cout << endl;
                cout << "                                           CORRECT ACCESS CODE, INITIALIZING SYSTEM" << endl;
                system("pause>null");
                exit(0);
            }
            else
                if (pass != "coutEuclideS3388") {
                    cout << "                               INVALID CODE!!, NOT AUTHORIZED!!" << endl;
                    system("pause>null");
                }
        }
        else
            if (nombre != "Euclides") {
                cout << "                                   INVALID ID, NOT AUTHORIZED, INSERT ID AGAIN" << endl;
                system("pause>null");
            }

        if (i > 0) {
            cout << endl;
            cout << "Ha realizado " << i << "/3 intentos" << endl;
            cout << endl;
            system("pause>null");
        }
        if (i == 3) {
            cout << endl;
            cout << "Ha realizado 3 intentos, por seguridad el programa se cerrara..." << endl;
            system("pause>null");
            exit(0);
        }
    }

}