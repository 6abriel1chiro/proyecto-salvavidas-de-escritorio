#include <iostream> // Es para Cin Co que es para ingresar y mostrar valores
#include <cstdlib> //sIRVE PARA EL CLS que es para limpiar la pantalla
#include <time.h> //Para el tiempo


using namespace std;
string matrizOpciones[5];
string lugarEspecifico = "No se Definio";
long int numeroEspecifico = 0;


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
    cout << "Indique su ubicacion especifica(separada por espacios, ej: av.buenos-aires-apartamentos-Tello-numero-789.).\n";
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
    string opcionesMenuZona [5] = { " Indique donde se encuentra.\n",
                                   "1 Zona Sur.",
                                   "2 Zona Norte.",
                                   "3 Zona especifica.",
                                   "5 salir"};


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


    string opcionRobo [5] =  {"1",
                              "1. Llamar a la Policia.",
                              "2. Llamar Personal medico.",
                              "5. Salir ."};
    string opcionPeligro [5] =   {"4",
                                  "1. Llamar a la Policia.",
                                  "2. Llamar Bomberos.",
                                  "3. llamar a otra persona.",
                                  "5. Salir ."};
    string opcionIncendio [5] =   {"2",
                                   "1. Llamar a la Policia.",
                                   "5. Salir ."};
    string opcionAccidente [5] =   {"3",
                                    "1. Llamar a la Policia.",
                                    "2. Llamar Personal medico.",
                                    "5. Salir ."};


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
        string opcionesMenu1 [7] = {"SALVAVIDAS DE BOLSILLO \n \n " ,
                                    "1. Reportar un robo " ,
                                    "2. Me siento en peligro" ,
                                    "3. Reportar incendio" ,
                                    "4. Reportar accidente" ,
                                    "5. Salir \n" ,
                                    "Elije una opcion: "};
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
                        cout << "Fecha y Hora:" << currentDateTime() <<endl;
                        cout<<"Numero de auxilio: "<<numeroEspecifico<<endl<<endl;
                        cout<<"Espero haber sido de ayuda y que este a salvo :)"<<endl;
                       system("pause");
                     }

        }


    }while(bandera!=true);


    return 0;


}
