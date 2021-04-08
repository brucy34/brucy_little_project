#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void menuCentrale()
{
    cout<<"---------------------------BIENVENUE DANS NOTRE PROGRAMME----------------------------"<<endl;
    cout<<"Faites un choix parmi la liste ci-dessoous: "<<endl;
    cout<<"1………………………….. Op"<<char(130)<<"ration de codage/D"<<char(130)<<"codage/Transcodage"<<endl;
    cout<<"2………………………….. Operations math"<<char(130)<<"matiques"<<endl;
    cout<<"3………………………….. Gestion d’information sur un "<<char(130)<<"tudiant"<<endl;
    cout<<"4………………………….. Ma r"<<char(130)<<"alisation"<<endl;
}
void choice()
{
    cout<<"1……………..  Binaire"<<endl;
	cout<<"2……………..  Octal"<<endl;
	cout<<"3……………..  Hexad"<<char(130)<<"cimal"<<endl;
	cout<<"4……………..  D"<<char(130)<<"cimal"<<endl;
}

void decbin (int a)
{
    char res[1000];
    itoa(a,res,2);
    cout<<a<<"(dec) = "<<res<<"(bin)"<<endl;
}
void decoctal (int a)
{
    char res[1000];
    itoa(a,res,8);
    cout<<a<<"(dec) = "<<res<<"(oct)"<<endl;
}
void dechexa (int a)
{
    char res[1000];
    itoa(a,res,16);
    cout<<a<<"(dec) = "<<res<<"(hexa)"<<endl;
}
void decdec (float a)
{
    char res[1000];
    itoa(a,res,10);
    cout<<a<<"(dec) = "<<res<<"(dec)"<<endl;
}
void bindec (string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(2,index);
        index++;
    }
    cout<<a<<"(bin) = "<<valeur<<"(dec)"<<endl;
}

void menuchoixUn()
{
    cout<<"1……………… D"<<char(130)<<"cimal en"<<endl;
	cout<<"2……………. Binaire en"<<endl;
	cout<<"3……………. Hexad"<<char(130)<<"cimal en"<<endl;
}
int main()
{
    int choix1,choix2,choix3;
    int valeurChoisi;
    string valeurBinaire;
    do
    {

    menuCentrale();
        cin>>choix1;
        switch(choix1)
        {
        case 1:
            {
               menuchoixUn();
               cin>>choix2;
               choice();
               switch (choix2)
               {
               case 1:
                    {
                      cin>>choix3;
                      switch (choix3)
                      {
                      case 1:
                            {
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en binaire: ";
                               cin>>valeurChoisi;
                               decbin(valeurChoisi);
                            }break;
                       case 2:
                            {
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en octal: ";
                               cin>>valeurChoisi;
                               decoctal(valeurChoisi);
                            }break;
                       case 3:
                            {
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en hexadecimal: ";
                               cin>>valeurChoisi;
                               dechexa(valeurChoisi);
                            }break;
                       case 4:
                            {
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en decimal: ";
                               cin>>valeurChoisi;
                               decdec(valeurChoisi);
                            }break;

                      }
                    }break;
                       case 2:
                        {
                            cin>>choix3;
                      switch (choix3)
                      {
                      case 1:
                            {
                                cout<<"Entrez le binaire que vous voulez mettre en binaire: ";
                               cin>>valeurBinaire;
                                cout<<valeurBinaire<<"(bin) = "<<valeurBinaire<<"(bin)"<<endl;
                            }break;
                       case 2:
                            {
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en octal: ";
                               cin>>valeurChoisi;
                               decoctal(valeurChoisi);
                            }break;
                       case 3:
                            {
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en hexadecimal: ";
                               cin>>valeurChoisi;
                               dechexa(valeurChoisi);
                            }break;
                       case 4:
                            {
                                cout<<"Entrez le binaire que vous voulez mettre en decimal: ";
                               cin>>valeurBinaire;
                               bindec(valeurBinaire);
                            }break;
                      }
                        }break;
               }



            }break;
        }
    }while(choix1<=0 || choix1>=5);
    //system("cls");
    main();

    return 0;
}
