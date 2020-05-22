#include <iostream>
#include <cstdlib>


using namespace std;


int main()
{
    bool bandera=false;
    char tecla,tecla2;
    int numero_auxilio;

    do
    {
        system("cls");
        cin.clear();
        cout << "SALVAVIDAS DE BOLSILLO" << endl;
        cout << "-----------" << endl << endl;
        cout << "1.Reportar un robo " << endl;
        cout << "2. Me siento en peligro" << endl;
        cout << "3.Reportar incendio" << endl;
        cout << "4.Reportar accidente" << endl;
        cout << "5 .- Salir" << endl << endl;
        cout << "Elije una opcion: ";

        cin >> tecla;

		switch(tecla)
		{
			case '1':
				system("cls");

				cout << "1. Llamar a la Policia.\n";
				cout << "2. Llamar Personal medico.\n";
				cout << "3. Salir .\n";
				system("pause");


				cin>>tecla2;
				switch(tecla2){




                    case '1':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '2':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '3':
                	system("cls");
                exit(1);
				system("pause");
                break;
            }




            break; // fin case 1

			case '2':
				system("cls");

				cout << "1 llamar policia.\n";
				cout << "2 llamar bomberos.\n";
				cout << "3 llamar a otra persona.\n";
				cout << "4 salir.\n";
				system("pause");

                cin >> tecla2;
				switch(tecla2){

            case '1':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '2':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '3':
                	system("cls");
                	cout << " Digite el numero a llamar.\n";
                	cin>>numero_auxilio;
                    cout << " Lamando. . . \n";
				system("pause");
                break;
            }

break; // case 2




			case '3':
				system("cls");
				cout << "1. Llamar a los bomberos.\n";
				cout<<"2. salir "<<endl;

                system("pause");

	cin>>tecla2;
                switch(tecla2){

            case '1':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '2':
                	system("cls");
                exit(1);
				system("pause");
                break;

            }


				break; //fin case 3

			case '4':
				system("cls");
				cout << "1. Llamar a la Policia.\n";
				cout << "2. Llamar Personal medico.\n";
					cout << "3. Salir.\n";

                system("pause");




                switch(tecla2){

            case '1':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '2':
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";
				system("pause");
                break;
                            case '3':
                	system("cls");
                exit(1);
				system("pause");
                break;
            }






				break; // fin case 4

			case '5':
				bandera=true;
				//exit(1);
				break; //fin case 5

			default:
				system("cls");
				cout << "Opcion no valida.\a\n";

				break;
		}
    }while(bandera!=true);

    return 0;
}

