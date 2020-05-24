#include <iostream>
#include <cstdlib>


using namespace std;
char seleccion(char &c){
cin>>c;
if (c=='S' or c=='s'){
return c;
    }
else if (c=='N' or c=='n'){
return c;
                        }
else{
cout<<"caracter no valido, intente de nuevo"<<endl;
return seleccion(c);
    }
}

void save_str(){
string str;
cout<<"direccion: ";
getline(cin,str);

cout<<"se guardo:  "<<str<<endl;
system("pause");

}
int main()
{

//save_str();
    bool bandera=false;
    char tecla,tecla2,tecla3, c;
    long int numero_auxilio=0;
    string strUbicacion;

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
			case '1': //REPORTAR ROBO
				system("cls");

				cout << "1. Llamar a la Policia.\n";
				cout << "2. Llamar Personal medico.\n";
				cout << "3. Salir .\n";


				cin>>tecla2;
				switch(tecla2)
				{

                        case '1': //LLAMAR POLICIA
                        system("cls");
                        cout << " Indique donde se encuentra.\n";
                        cout << "1 Zona Sur.\n";
                        cout << "2 Zona Norte.\n";
                        cout << "3 Zona especifica.\n";
                        cout << "4 salir.\n";
                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"numero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }


                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << "El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                        cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                             case '4'://SALIR
                        system("cls");

                        system("pause");
                        break;
                }

                        break;
                            case '2'://LLAMAR PERSONAL MEDICO
                        system("cls");
                        cout << " Indique donde se encuentra.\n";
                        cout << "1 Zona Sur.\n";
                        cout << "2 Zona Norte.\n";
                        cout << "3 Zona especifica.\n";
                        cout << "4 salir.\n";
                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << "  El servicio mas cercano de la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                        cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                        break;

                            case '3'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
            }
            break; // fin case 1

			case '2': //ME SIENTO EN PELIGRO
				system("cls");

				cout << "1 llamar policia.\n";
				cout << "2 llamar bomberos.\n";
				cout << "3 llamar a otra persona.\n";
				cout << "4 salir.\n";

                cin >> tecla2;
				switch(tecla2)
				{

                    case '1': //LLAMAR POLICIA
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                    cout << "1 Zona Sur.\n";
                    cout << "2 Zona Norte.\n";
                    cout << "3 Zona especifica.\n";
                    cout << "4 salir.\n";

                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << "  El servicio mas cercano de la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                         cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                    break;
                    case '2': //LLAMAR BOMBEROS
                    system("cls");
                    cout << " Indique donde se encuentra.\n";
                    cout << "1 Zona Sur.\n";
                    cout << "2 Zona Norte.\n";
                    cout << "3 Zona especifica.\n";
                    cout << "4 salir.\n";

                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                        cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                    break;

                    case '3':// LLAMAR OTRA PERSONA
                	system("cls");
                	cout << " Digite el numero a llamar.\n";
                	cin>>numero_auxilio;
                    cout << " Esta persona recibira su pedido de ayuda, indique su ubicacion \n";
                        cout << "1 Zona Sur.\n";
                        cout << "2 Zona Norte.\n";
                        cout << "3 Zona especifica.\n";
                        cout << "4 salir.\n";
                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << "el numero "<<numero_auxilio<<"recibio su ubicacion.\n";
                        system("pause");
                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << "el numero "<<numero_auxilio<<"recibio su ubicacion.\n";
                        system("pause");
                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);

                        cout << "el numero "<<numero_auxilio<<"recibio su ubicacion.\n";
                        cout<<strUbicacion<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                break;
                    case '4'://SALIR
                	system("cls");
                    //exit(1);
                    system("pause");
                    break;
                }

break; // case 2




			case '3': //REPORTAR INCENDIO
            system("cls");
            cout<<"1. Llamar a los bomberos.\n";
            cout<<"2. salir "<<endl;
            cin>>tecla2;
            switch(tecla2)
            {

                case '1': //LLAMAR BOMBEROS
                system("cls");
                cout << " Indique donde se encuentra.\n";
                cout << "1 Zona Sur.\n";
				cout << "2 Zona Norte.\n";
				cout << "3 Zona especifica.\n";
				cout << "4 salir.\n";

                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << " El servicio mas cercano a la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }

                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << "El servicio mas cercano a la Zona  Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                        cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                break;

                case '2': //SALIR
                system("cls");
                //exit(1);
				system("pause");
                break;

            }

break; //fin case 3

			case '4':// REPORTAR ACCIDENTE
				system("cls");
				cout << "1. Llamar a la Policia.\n";
				cout << "2. Llamar Personal medico.\n";
                cout << "3. Salir.\n";
               cin>>tecla2;
                switch(tecla2)
                {

                    case '1':// LLAMAR POLICIA
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                    cout << "1 Zona Sur.\n";
                    cout << "2 Zona Norte.\n";
                    cout << "3 Zona especifica.\n";
                    cout << "4 salir.\n";

                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << " El servicio mas cercanp de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                         cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                    break;
                    case '2': //LLAMAR PERSONAL MEDICO
                	system("cls");
                	cout << " Indique donde se encuentra.\n";
                    cout << "1 Zona Sur.\n";
                    cout << "2 Zona Norte.\n";
                    cout << "3 Zona especifica.\n";
                    cout << "4 salir.\n";
                    system("pause");
                        cin>>tecla3;
                        switch(tecla3)
                    {

                        case '1': //SUR
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Sur esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                        case '2'://NORTE
                        system("cls");
                        cout << "El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                        case '3'://OTRA ZONA
                        system("cls");
                        cout << "Indique su ubicacion especifica.\n";
                        getline(cin,strUbicacion);
                         cout << "  El servicio mas cercano de la Zona: ";
                        cout<<strUbicacion<<endl;
                        cout<<"  esta en camino"<<endl;
                        system("pause");
                        cout<<"Necesita otro servicio?(S/N)"<<endl;
                        seleccion(c);
                        if(c=='S' or c=='s'){
                            break;
                        }
                        else if(c=='N' or c=='n'){
                            cout<<"resumen"<<endl;
                            cout<<"servicio: "<<endl;
                            cout<<"hora "<<endl;
                            cout<<"lugar"<<endl;
                            cout<<"mumero de auxilio "<<numero_auxilio<<endl;
                            cout<<"espero haber sido de ayuda y que este a salvo :)"<<endl;
                            exit(1);
                        }
                        break;

                             case '4'://SALIR
                        system("cls");
                        //exit(1);
                        system("pause");
                        break;
                }
                    break;

                    case '3'://salir
                	system("cls");
                    //exit(1);
                    system("pause");
                    break;
            }
            break; // fin case 4

			case '5': //SALIR
            bandera=true;
            break; //fin case 5

			default:
            system("cls");
            cout << "Opcion no valida.\a\n";
            system("pause");
            break;
		}// end main switch

    }while(bandera!=true);
    return 0;
}

