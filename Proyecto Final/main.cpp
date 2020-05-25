#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <stdio.h>
#include <time.h>
#include <windows.h>

using namespace std;

string matrizOpciones[5];
string lugarEspecifico = "No se Definio";
long int numeroEspecifico = 0;

COORD coord={0,0}; // this is global variable
                                    //center of axis is set to the top left cornor of the screen
 void gotoxy(int x,int y)
 {
      coord.X=x;
      coord.Y=y;
      SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
 }



// Get current date/time, format is YYYY-MM-DD.HH:mm:ss
const std::string currentDateTime() {
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    // Visit http://en.cppreference.com/w/cpp/chrono/c/strftime
    // for more information about date/time format
    strftime(buf, sizeof(buf), "%Y-%m-%d . %X", &tstruct);

    return buf;
}

void copiarArreglo(string arreglo1[5], int longitud)
{
    int c;
    c = 0;
    while (c<longitud)
    {
        matrizOpciones[c]=arreglo1[c];
        c++;
    }
}

char seleccion(char &c)
{
    cin>>c;
    if (c=='S' or c=='s')
        {
        return c;
        }
    else if (c=='N' or c=='n')
    {
        return c;
    }
    else
    {
        cout<<"caracter no valido, intente de nuevo"<<endl;
        return seleccion(c);
    }
}

void ingresardirreccion ()
{
    system("cls");
    cout << "Indique su ubicacion especifica.\n";
    cin >> lugarEspecifico;
    cout << "  El servicio mas cercano de la zona va en camino" << endl;
    system("pause");
}

void ingresarNumero()
{
    system("cls");
    cout << "Indique el numero de contacto.\n";
    cin >> numeroEspecifico;
    cout << "  Se contacto al numero ingresado " << endl;
    system("pause");

}

void desplegarMenuZona (int tecla1,int tecla2,int& tecla3,string teclaName1,string teclaName2,string& teclaName3)
{
    system("cls");
    int c,numeroDeOpciones;
    string opcionesMenuZona [5] = { " Indique donde se encuentra.\n",  "1 Zona Sur.",  "2 Zona Norte.",  "3 Zona especifica.",  "4 salir"};


        c=0;
        numeroDeOpciones=5;

        while (c<numeroDeOpciones)
        {
        cout <<  opcionesMenuZona[c] << endl;
        c++;
        }
        cin>>tecla3;

         if ((tecla3 > 0)&&(tecla3 < 5))
        {
            teclaName3 = opcionesMenuZona [tecla3];

            if(tecla3 == 3)
            {
                ingresardirreccion();
                teclaName3 = lugarEspecifico;
            }
        }
        else
        {
            cout << "La Opcion es incorrecta, Por favor ingrese un valor Valido";
            desplegarMenuZona (tecla1, tecla2,tecla3, teclaName1, teclaName2, teclaName3);
        }

}

void desplegarMenu2 (int tecla1,int& tecla2,int& tecla3,string teclaName1,string& teclaName2,string& teclaName3)
{
    system("cls");
    int c,opcion;


    string opcionRobo [5] =  {"1","1. Llamar a la Policia.","2. Llamar Personal medico.","3. Salir ."};
    string opcionPeligro [5] =   {"4","1. Llamar a la Policia.","2. Llamar Bomberos.","3. llamar a otra persona.","4. Salir ."};
    string opcionIncendio [5] =   {"2","1. Llamar a la Policia.","2. Salir ."};
    string opcionAccidente [5] =   {"3","1. Llamar a la Policia.","2. Llamar Personal medico.","3. Salir ."};


    if (tecla1 == 1)
    {
        copiarArreglo( opcionRobo,5);

        opcion = 3;
    }
    else if (tecla1 == 2)
    {
        copiarArreglo( opcionPeligro,5);

        opcion = 4;
    }
    else if (tecla1 == 3)
    {
        copiarArreglo( opcionIncendio,5);

        opcion = 2;
    }
    else if (tecla1 == 4)
    {
        copiarArreglo( opcionAccidente,5);

        opcion = 3;
    }

    c=0;

    while (c<opcion)
    {
        c++;
        cout <<  matrizOpciones[c] << endl;
    }
    cin >> tecla2;
        if ((tecla2 > 0)&&(tecla2 < opcion+1))
        {
            teclaName2 = matrizOpciones [tecla2];
            desplegarMenuZona (tecla1, tecla2,tecla3, teclaName1, teclaName2, teclaName3);
            if ((tecla1 ==2)&&(tecla2 == 3))
            {
                ingresarNumero();
            }
        }
        else
        {
            cout << "La Opcion es incorrecta, Por favor ingrese un valor Valido";
            desplegarMenu2 (tecla1, tecla2,tecla3, teclaName1, teclaName2, teclaName3);
        }
}


void desplegarMenu1(int& tecla1,int& tecla2,int& tecla3,string& teclaName1,string& teclaName2,string& teclaName3)
{

    system("cls");
    int c,numeroDeOpciones,Opcion;
        system("cls");
        cin.clear();
        string opcionesMenu1 [7] = {"SALVAVIDAS DE BOLSILLO \n \n " ,"1. Reportar un robo " ,"2. Me siento en peligro" ,"3. Reportar incendio" ,"4. Reportar accidente" ,"5. Salir \n" ,"Elije una opcion: "};
        c=0;
        numeroDeOpciones=7;



        while (c<numeroDeOpciones)
        {

            cout  << opcionesMenu1[c] << endl;
            c++;
        }

        cin >> tecla1;
        if (tecla1 == 5)
        {

            cout << " Gracias por Usar la Aplicacion " << endl;
        }
        else if ((tecla1 > 0)&&(tecla1 < numeroDeOpciones - 1))
        {
            teclaName1 = opcionesMenu1 [tecla1];
            desplegarMenu2 (tecla1, tecla2,tecla3, teclaName1, teclaName2, teclaName3);
        }
        else
        {
            cout << "La Opcion es incorrecta, Por favor ingrese un valor Valido";
            desplegarMenu1 (tecla1, tecla2,tecla3, teclaName1, teclaName2, teclaName3);
        }


}





void emergencia (int& tecla1,int& tecla2,int& tecla3,string& teclaName1,string& teclaName2,string& teclaName3)
{

    system("cls");
    desplegarMenu1(tecla1,tecla2,tecla3,teclaName1,teclaName2,teclaName3);

}



int main()
{
    bool bandera=false;
    int tecla1,tecla2,tecla3;
    char c;
    string teclaName,teclaName2,teclaName3;

    string strUbicacion;


    do
    {

       emergencia( tecla1,tecla2,tecla3,teclaName,teclaName2,teclaName3 );

        if(tecla1 == 5)
        {
            bandera=true;
        }
        else
        {
            system("cls");
               cout<<"Necesita otro servicio?(Si (S) / No (N))"<<endl;

               seleccion(c);
                 if(c=='N' or c=='n' or c=='no' or c=='nO' or c=='NO' or c=='No' )
                    {
                        system("cls");
                        cout<<"Informe Enviado "<<endl<<endl;
                        cout<<"Servicio: "<< teclaName <<endl;
                        cout<<"Categoria: "<< teclaName2 <<endl;
                        cout<<"Lugar: "<< teclaName3 <<endl;
                        std::cout << "Fecha y Hora:" << currentDateTime() << std::endl;
                        cout<<"Numero de auxilio: "<<numeroEspecifico<<endl<<endl;
                        cout<<"Espero haber sido de ayuda y que este a salvo :)"<<endl;
                        exit(1);
                     }

        }


    }while(bandera!=true);


    return 0;


}



/*
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
    string teclaName,teclaName2,teclaName3;
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
			    teclaname = " Reportar un Robo ";
				system("cls");

				cout << "1. Llamar a la Policia.\n";
				cout << "2. Llamar Personal medico.\n";
				cout << "3. Salir .\n";


				cin>>tecla2;
				switch(tecla2)
				{

                        case '1': //LLAMAR POLICIA
                        system("cls");
                        teclaName2 = "Llamar Policia";
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << "El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        teclaName2 = "Llamar Personal Medico";
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                teclaname = " Me siento en Peligro ";
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << " El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
            teclaname = " Reportar un Incendio ";
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << "El servicio mas cercano a la Zona  Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
				teclaname = " Reportar un Accidente ";
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << " El servicio mas cercanp de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

                        case '2':/\nORTE
                        system("cls");
                        cout << "El servicio mas cercano de la Zona Norte esta en camino.\n";
                        system("pause");
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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
                        cout<<"Necesita otro servicio?(S\n)"<<endl;
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

*/

