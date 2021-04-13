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
void choice()//En definir un pour chaque choix et non un seul
{
    cout<<"1……………..  Binaire"<<endl;
	cout<<"2……………..  Octal"<<endl;
	cout<<"3……………..  Hexad"<<char(130)<<"cimal"<<endl;
	cout<<"4……………..  D"<<char(130)<<"cimal"<<endl;
}

void decbin (int a)
{
    int x=a,y=a;

    string res,text;
    do
    {
        y=x%2;
        if(y==0)
            text="0";
        else
            text="1";
        res+=text;
        x=x/2;
    }while(x>=1);
        if(x==0)
            text="0";
        else
            text="1";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(dec) = "<<res_reversed<<"(bin)"<<endl;
}
void decoctal (int a)
{
    int x=a,y=a;

    string res,text;
    do
    {
        y=x%8;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        res+=text;
        x=x/8;
    }while(x>=7);
        if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(dec) = "<<res_reversed<<"(oct)"<<endl;
}
void dechexa (int a)
{
    int x=a,y=a;

    string res,text;
    do
    {
        y=x%16;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        else if(y==8)
            text="8";
        else if(y==9)
            text="9";
        else if(y==10)
            text="A";
        else if(y==11)
            text="B";
        else if(y==12)
            text="C";
        else if(y==13)
            text="D";
        else if(y==14)
            text="E";
        else if(y==15)
            text="F";
        res+=text;
        x=x/16;
    }while(x>=15);
    if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        else if(x==8)
            text="8";
        else if(x==9)
            text="9";
        else if(x==10)
            text="A";
        else if(x==11)
            text="B";
        else if(x==12)
            text="C";
        else if(x==13)
            text="D";
        else if(x==14)
            text="E";
        else if(x==15)
            text="F";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(dec) = "<<res_reversed<<"(hexa)"<<endl;
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
        {
            valeur += pow(2,index);
        }

        index++;

    }

    cout<<a<<"(bin) = "<<valeur<<"(dec)"<<endl;
}
void binoctal (string a)// A repenser
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
        {
            valeur += pow(2,index);
        }

        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%8;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        res+=text;
        x=x/8;
    }while(x>=7);
    if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        res+=text;//A utiliser une fonction qui retourne un  int pour simplifier
     string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(bin) = "<<res_reversed<<"(oct)"<<endl;
}
void binHex(string a)//A redefinir
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
        {
            valeur += pow(2,index);
        }

        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%16;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        else if(y==8)
            text="8";
        else if(y==9)
            text="9";
        else if(y==10)
            text="A";
        else if(y==11)
            text="B";
        else if(y==12)
            text="C";
        else if(y==13)
            text="D";
        else if(y==14)
            text="E";
        else if(y==15)
            text="F";
        res+=text;
        x=x/16;
    }while(x>=7);
    if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        else if(x==8)
            text="8";
        else if(x==9)
            text="9";
        else if(x==10)
            text="A";
        else if(x==11)
            text="B";
        else if(x==12)
            text="C";
        else if(x==13)
            text="D";
        else if(x==14)
            text="E";
        else if(x==15)
            text="F";
        res+=text;//A utiliser une fonction qui retourne un  int pour simplifier
     string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(bin) = "<<res_reversed<<"(hex)"<<endl;
}
//fonction hexadecimal to decimal
void hexadec (string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(16,index);
        else if(a[i] == '2')
            valeur += 2*pow(16,index);
        else if(a[i] == '3')
            valeur += 3*pow(16,index);
        else if(a[i] == '4')
            valeur += 4*pow(16,index);
        else if(a[i] == '5')
            valeur += 5*pow(16,index);
        else if(a[i] == '6')
            valeur += 6*pow(16,index);
        else if(a[i] == '7')
            valeur += 7*pow(16,index);
        else if(a[i] == '8')
            valeur += 8*pow(16,index);
        else if(a[i] == '9')
            valeur += 9*pow(16,index);
        else if(a[i] == 'a')
            valeur += 10*pow(16,index);
        else if(a[i] == 'b')
            valeur += 11*pow(16,index);
        else if(a[i] == 'c')
            valeur += 12*pow(16,index);
        else if(a[i] == 'd')
            valeur += 13*pow(16,index);
        else if(a[i] == 'e')
            valeur += 14*pow(16,index);
        else if(a[i] == 'f')
            valeur += 15*pow(16,index);
        index++;

    }

    cout<<a<<"(hex) = "<<valeur<<"(dec)"<<endl;
}
//fontion hexadecimmal to bin
void hexabin(string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(16,index);
        else if(a[i] == '2')
            valeur += 2*pow(16,index);
        else if(a[i] == '3')
            valeur += 3*pow(16,index);
        else if(a[i] == '4')
            valeur += 4*pow(16,index);
        else if(a[i] == '5')
            valeur += 5*pow(16,index);
        else if(a[i] == '6')
            valeur += 6*pow(16,index);
        else if(a[i] == '7')
            valeur += 7*pow(16,index);
        else if(a[i] == '8')
            valeur += 8*pow(16,index);
        else if(a[i] == '9')
            valeur += 9*pow(16,index);
        else if(a[i] == 'a')
            valeur += 10*pow(16,index);
        else if(a[i] == 'b')
            valeur += 11*pow(16,index);
        else if(a[i] == 'c')
            valeur += 12*pow(16,index);
        else if(a[i] == 'd')
            valeur += 13*pow(16,index);
        else if(a[i] == 'e')
            valeur += 14*pow(16,index);
        else if(a[i] == 'f')
            valeur += 15*pow(16,index);
        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%2;
        if(y==0)
            text="0";
        else
            text="1";
        res+=text;
        x=x/2;
    }while(x>=1);
        if(x==0)
            text="0";
        else
            text="1";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(hex) = "<<res_reversed<<"(bin)"<<endl;

}
//fonction hexadecimal to octal
void hexoct(string a)
{
    int valeur=0;
    int index=0;
    for(int i=a.length()-1; i>=0; i--)
    {
        if(a[i] == '1')
            valeur += pow(16,index);
        else if(a[i] == '2')
            valeur += 2*pow(16,index);
        else if(a[i] == '3')
            valeur += 3*pow(16,index);
        else if(a[i] == '4')
            valeur += 4*pow(16,index);
        else if(a[i] == '5')
            valeur += 5*pow(16,index);
        else if(a[i] == '6')
            valeur += 6*pow(16,index);
        else if(a[i] == '7')
            valeur += 7*pow(16,index);
        else if(a[i] == '8')
            valeur += 8*pow(16,index);
        else if(a[i] == '9')
            valeur += 9*pow(16,index);
        else if(a[i] == 'a')
            valeur += 10*pow(16,index);
        else if(a[i] == 'b')
            valeur += 11*pow(16,index);
        else if(a[i] == 'c')
            valeur += 12*pow(16,index);
        else if(a[i] == 'd')
            valeur += 13*pow(16,index);
        else if(a[i] == 'e')
            valeur += 14*pow(16,index);
        else if(a[i] == 'f')
            valeur += 15*pow(16,index);
        index++;

    }
    int x=valeur,y=valeur;

    string res,text;
    do
    {
        y=x%8;
        if(y==0)
            text="0";
        else if(y==1)
            text="1";
        else if(y==2)
            text="2";
        else if(y==3)
            text="3";
        else if(y==4)
            text="4";
        else if(y==5)
            text="5";
        else if(y==6)
            text="6";
        else if(y==7)
            text="7";
        res+=text;
        x=x/8;
    }while(x>=7);
        if(x==0)
            text="0";
        else if(x==1)
            text="1";
        else if(x==2)
            text="2";
        else if(x==3)
            text="3";
        else if(x==4)
            text="4";
        else if(x==5)
            text="5";
        else if(x==6)
            text="6";
        else if(x==7)
            text="7";
        res+=text;
    string res_reversed(res);
    reverse(res_reversed.begin(),res_reversed.end());
    cout<<a<<"(hex) = "<<res_reversed<<"(oct)"<<endl;
}

void menuchoixUn()
{
    cout<<"1……………… D"<<char(130)<<"cimal en"<<endl;
	cout<<"2……………. Binaire en"<<endl;
	cout<<"3……………. Hexad"<<char(130)<<"cimal en"<<endl;
}
void menuChoixDeux()
{
    cout<<"1......... Carr"<<char(130)<<" magique d'ordre pair"<<endl;
    cout<<"2......... Multiplication de deux matrices"<<endl;
    cout<<"3......... R"<<char(130)<<"solution d'un syst"<<char(138)<<"me d'"<<char(130)<<"quation "<<char(133)<<" deux inconnues."<<endl;
    cout<<"4......... Le d"<<char(130)<<"terminant et le tranpos"<<char(130)<<"e d'une matrice quelconque."<<endl;
}
// fonction pour demander a l'utilisateur s'il veut continuer ou retourner

/*void retour (int a)
{
   if(a==0)
        menuCentrale();
}*/
//a ne pas oublier de gerer les erreurs de saisies+
int main()
{
    int choix1,choix2,choix3, choixDeRetour;
    int valeurChoisi;
    string valeurBinaire;
    do
    {

    menuCentrale();
        cin>>choix1;
        system("cls");
        switch(choix1)
        {
        case 1:
            {
               menuchoixUn();
               cin>>choix2;
               system("cls");
               choice();
               switch (choix2)
               {
               case 1:
                    {
                      cin>>choix3;
                      system("cls");
                      switch (choix3)
                      {
                      case 1:
                            {
                                do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en binaire: ";
                               cin>>valeurChoisi;
                               decbin(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               //retour(choixDeRetour);
                                system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 2:
                            {
                               do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en octal: ";
                               cin>>valeurChoisi;
                               decoctal(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 3:
                            {
                                do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en hexadecimal: ";
                               cin>>valeurChoisi;
                               dechexa(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 4:
                            {
                                do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en decimal: ";
                               cin>>valeurChoisi;
                               decdec(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
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
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en binaire: ";
                               cin>>valeurBinaire;
                                cout<<valeurBinaire<<"(bin) = "<<valeurBinaire<<"(bin)"<<endl;
                                cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 2:
                            {
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en octal: ";
                               cin>>valeurBinaire;
                               binoctal(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 3:
                            {
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en hexadecimal: ";
                               cin>>valeurBinaire;
                               binHex(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 4:
                            {
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en decimal: ";
                               cin>>valeurBinaire;
                               bindec(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                      }
                        }break;
                       case 3:
                        {
                            cin>>choix3;
                      switch (choix3)
                      {
                      case 1:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en binaire: ";
                               cin>>valeurBinaire;
                                hexabin(valeurBinaire);
                                cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 2:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en octal: ";
                               cin>>valeurBinaire;
                               hexoct(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 3:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en hexadecimal: ";
                               cin>>valeurBinaire;
                               cout<<valeurBinaire<<"(hex) = "<<valeurBinaire<<"(hex)"<<endl;
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 4:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en decimal: ";
                               cin>>valeurBinaire;
                               hexadec(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                               //retour(choixDeRetour);
                               }while(choixDeRetour==1);
                               main();
                            }break;
                      }
               }break;
            }break;
        }break;
    case 2:
           {
               menuChoixDeux();
               cin>>choix1;
               switch(choix1)
               {
               case 1:
                {

                }break;
               case 2:
                {

                }break;
               case 3:
                {

                }break;
               case 4:
                {

                }break;
               }
           }break;
    }
}while(choix1<=0 || choix1>=5);

    //main();

    return 0;
}
