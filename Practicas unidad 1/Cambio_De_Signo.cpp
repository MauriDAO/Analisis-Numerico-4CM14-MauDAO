#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int *poli;
    int grado,contador,signo,comparador,contneg,par,result;
    cout<<"Ingrese el grado del polinomio"<<endl;
    cin>>grado;
    poli = new int(grado+1);
    cout<<"Ingrese el termino constante del polinomio"<<endl;
    cin>>poli[0];
    contador=0;
    contneg=0;


    for(int i=1;i<=grado;i++)
    {

        cout<<"Ingrese el termino del polinomio a la potencia "<<i<<endl;
        cin>>poli[i];

    }

    if(poli[grado+1]>0)

        comparador=1;

    else

        comparador=0;



    for(int h=grado;h>=0;h--)
    {

        if(poli[h]>0)
        {
            if(poli[h]==0)
            {
                if(poli[h-1]<0)
                    {
                        signo=0;
                    }
                if(poli[h-1]>0)
                    {
                        signo=1;
                    }
            }
            else

                signo=1;

        }



        else
            {
            if(poli[h]==0)
            {
                if(poli[h-1]<0)
                    {
                        signo=0;
                    }
                if(poli[h-1]>0)
                    {
                        signo=1;
                    }
            }
            else

                signo=0;

        }
        if(comparador != signo)

            contador++;

    }

    cout<<"El numero de cambios de signo positivos es es"<<contador<<endl;


cout<<"El polinomio es:"<<endl;

    for(int j=grado;j>0;j--)

    {

        if(poli[j]<0)

        {

            if(poli[j]==0)

                cout<<"";
            else

            cout<<poli[j]<<"x^"<<j;

        }

        else

        {
            if(j==grado){

                    if(poli[j]==0)

                        cout<<"";
                    else

                        cout<<poli[j]<<"x^"<<j;

            }

            else
            {

            if(poli[j]==0)

                cout<<"";
            else


            cout<<"+"<<poli[j]<<"x^"<<j;
            }

        }


    }

    if(poli[0]>0)
        {


            if(poli[0]==0)

                cout<<"";
            else

                cout<<"+"<<poli[0]<<endl;

        }

    else
        {
            if(poli[0]==0)

                cout<<"";

            else
            cout<<poli[0]<<endl;

        }







    for(int f=1;f<=grado;f++)
    {
        par=f%2;

        if(par!=0)
       {


           poli[f]= poli[f]*(-1);

       }

        //}
    }

    if(poli[grado]>0)

        comparador=1;

    else

        comparador=0;



    for(int h=grado-1;h>=0;h--)
    {

        if(poli[h]>0)

            signo=1;

        else

            signo=0;
        if(comparador != signo)

            contneg++;

    }

    cout<<"El numero de cambios de signo negativos es es"<<contneg<<endl;




            poli[1]*5;





    cout<<"El polinomio es:"<<endl;

    for(int j=grado;j>0;j--)

    {

        if(poli[j]<0)

        {

            if(poli[j]==0)

                cout<<"";
            else

            cout<<poli[j]<<"x^"<<j;

        }

        else

        {
            if(j==grado){

                    if(poli[j]==0)

                        cout<<"";
                    else

                        cout<<poli[j]<<"x^"<<j;

            }

            else
            {

            if(poli[j]==0)

                cout<<"";
            else


            cout<<"+"<<poli[j]<<"x^"<<j;
            }

        }


    }

    if(poli[0]>0)
        {


            if(poli[0]==0)

                cout<<"";
            else

                cout<<"+"<<poli[0]<<endl;

        }

    else
        {
            if(poli[0]==0)

                cout<<"";

            else
            cout<<poli[0]<<endl;

        }

}



