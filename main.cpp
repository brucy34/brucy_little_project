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
    cout<<"4......... Le d"<<char(130)<<"terminant et la tranpos"<<char(130)<<"e d'une matrice quelconque."<<endl;
}
void carre_double_pair()
{
    int N,k,i,j;
    cout<<"Veuillez entrer la valeur du carre doublement pair: "<<endl;
    cin>>N;
    int tab[N][N];
    k=1;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            tab[i][j]=k;
            k++;
            cout<<"["<<tab[i][j]<<"]";
        }
        cout<<endl;
    }
    cout<<"Le carre magique correspondant est: "<<endl;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            bool r1=(i-1)%4==0 || i%4==0;
            bool r2=(j-1)%4==0 || j%4==0;

            if((r1 && !r2) || (!r1 && r2))
            {
                tab[i][j]=(N*N)-tab[i][j];
            }
            cout<<"["<<tab[i][j]<<"]";
        }
        cout<<endl;
    }
}
void detMatrix()
{
    int val_ligne,val_colonne;
    cout<<"Veuillez entrez le nombre de ligne de votre matrice: "<<endl;
    cin>>val_ligne;
    cout<<"Veuillez entrez le nombre de colonne de votre matrice: "<<endl;
    cin>>val_colonne;
    int mat[val_ligne][val_colonne];
    cout<<"Veuillez entrer les valeurs de votre matrice: "<<endl;
    for(int a=0;a<val_ligne;a++)
    {
        for(int b=0;b<val_colonne;b++)
        {
            cin>>mat[a][b];
        }
    }
}
void menuEtudiant()
{
    cout<<"1............ Entrez des informations sur un etudiant dans un fichier Notepad"<<endl;
    cout<<"2............ Afficher les informations du fichier avec la possibilite de les imprimer"<<endl;
    cout<<"3............ Afficher les informations des etudiants par ordre alphabetique des noms"<<endl;
}
//a ne pas oublier de gerer les erreurs de saisies+

char square[3][3];


int winBoard()
{
    if(square[1][1]==square[1][2] && square[1][2]==square[1][3])
        return 1;
    else if(square[2][1]==square[2][2] && square[2][2]==square[2][3])
        return 2;
    else if(square[3][1]==square[3][2] && square[3][2]==square[3][3])
        return 3;
    else if(square[1][1]==square[2][2] && square[2][2]==square[3][3])
        return 4;
    else if(square[1][3]==square[2][2] && square[2][2]==square[3][1])
        return 5;
    else if(square[1][1]==square[2][1] && square[2][1]==square[3][1])
        return 6;
    else if(square[1][2]==square[2][2] && square[2][2]==square[3][2])
        return 7;
    else if(square[1][3]==square[2][3] && square[2][3]==square[3][3])
        return 8;
    else if(square[1][1]!='1' && square[1][2]!='2' && square[1][3]!='3' &&
            square[2][1]!='4' && square[2][2]!='5' && square[2][3]!='6' &&
            square[3][1]!='7' && square[3][2]!='8' && square[3][3]!='9')
        return 0;
    else
    return -1;
}
void board()
{
    system("cls");

    cout<<"\aCurrent board"<<endl<<endl;

    for(int r=1;r<=3;r++)
    {

        for(int c=1;c<=3;c++)
        {
            cout<<square[r][c];
            cout<<" | ";
        }
        cout<<endl;
        cout<<" -----+---- ";
        cout<<endl;
    }
}

int main()
{
    int choix1,choix2,choix3, choixDeRetour, m_lignes,m_colonnes,m_lignes1,m_colonnes1;
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
                    do
                    {
                        cout<<"Pressez 1 pour un carre magique d ordre doublement pair"<<endl;
                        cout<<"Pressez 2 pour un carre magique d ordre simplement pair"<<endl;
                        cin>>choix1;
                        if(choix1==1)
                            carre_double_pair();
                    cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                    }while(choixDeRetour==1);
                    main();
                }break;
               case 2:
                {
                    do
                    {
                        cout<<"Entrer le nombre de lignes de votre matrice1"<<endl;
                        cin>>m_lignes;
                        cout<<"Entrer le nombre de colonnes de votre matrice1"<<endl;
                        cin>>m_colonnes;
                        cout<<"Entrer le nombre de lignes de votre matrice2"<<endl;
                        cin>>m_lignes1;
                        cout<<"Entrer le nombre de colonnes de votre matrice2"<<endl;
                        cin>>m_colonnes1;
                        while(m_colonnes!=m_lignes1)
                        {
                            cout<<"Erreur!!Le nombre de colonnes de matrice1 doit egales au nombre de lignes de matrice2.Veuillez reesayer"<<endl;
                            cout<<"Entrer le nombre de lignes de votre matrice1"<<endl;//mettre pause peut etre
                        cin>>m_lignes;
                        cout<<"Entrer le nombre de colonnes de votre matrice1"<<endl;
                        cin>>m_colonnes;
                        cout<<"Entrer le nombre de lignes de votre matrice2"<<endl;
                        cin>>m_lignes1;
                        cout<<"Entrer le nombre de colonnes de votre matrice2"<<endl;
                        cin>>m_colonnes1;
                        }
                        int a[m_lignes][m_colonnes];
                        int b[m_lignes1][m_colonnes1];
                        int p;
                        cout<<"Entrer les valeurs de la premiere matrice"<<endl;
                        for(int k=1;k<=m_lignes;k++)
                        {
                            for(int l=1;l<=m_colonnes;l++)
                            {
                                cin>>a[k][l];
                            }
                        }
                        cout<<"Entrer les valeurs de la deuxieme matrice"<<endl;
                        for(int m=1;m<=m_lignes1;m++)
                        {
                            for(int n=1;n<=m_colonnes1;n++)
                            {
                                cin>>b[m][n];
                            }
                        }
                        /*for(int m=1;m<=m_lignes1;m++)
                        {
                            for(int n=1;n<=m_colonnes1;n++)
                            {
                                cout<<b[m][n];
                            }
                        }*/
                        cout<<"Le resultat est: "<<endl;
                        int r[m_lignes][m_colonnes1];
                        /*for(int i=0;i<m_lignes;i++)
                        {
                            for(int j=0;j<m_colonnes1;j++)
                            {
                                r[i][j]=0;
                                for(int k=0;k<m_lignes1;k++)
                                {
                                    r[i][j]+=a[i][k]*b[k][j];
                                }
                                cout<<r[i][j]<<endl;
                            }
                        }*/
                            for(int i=0;i<m_lignes;i++)
                            {
                                for(int j=0;j<m_colonnes1;j++)
                                {
                                    for(int k=0;k<m_lignes;k++)
                                    {
                                        for(int l=0;l<m_colonnes;l++)
                                        {
                                            for(int m=0;m<m_lignes1;m++)
                                            {
                                                for(int n=0;n<m_colonnes1;n++)
                                                {
                                                    r[i][j]=(a[k][l]*b[m][n])+(a[k][l+1]*b[m+1][n]);
                                                }
                                            }
                                        }
                                    }
                                    cout<<r[i][j]<<endl; //must to be debugging
                                }
                            }

                        /*for(int i=1;i<=m_lignes;i++)
                        {
                            for(int j=1;j<=m_colonnes1;j++)
                            {
                                cout<<r[i][j]<<endl;
                            }
                        }*/
                        cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
                    }while(choixDeRetour==1);
                    main();
                }break;
               case 3:
                {
                    float a,b,z,a1,b1,z1,y,x,temp,temp1,temp2;
                    do{
                    cout<<"Entrer la valeur de z,a et b pour la premiere equation ax+by=z: "<<endl;
                    cin>>z;
                    cin>>a;
                    cin>>b;
                    cout<<"Entrer la valeur de z,a et b pour la deuxieme equation ax+by=z: "<<endl;
                    cin>>z1;
                    cin>>a1;
                    cin>>b1;
                    while((a || b || a1 || b1)==0)
                    {
                        cout<<"Les coefficient de x et y doivent etre different de 0. Reesayer"<<endl;
                        cout<<"Entrer la valeur de z,a et b pour la premiere equation ax+by=z: "<<endl;
                    cin>>z;
                    cin>>a;
                    cin>>b;
                    cout<<"Entrer la valeur de z,a et b pour la deuxieme equation ax+by=z: "<<endl;
                    cin>>z1;
                    cin>>a1;
                    cin>>b1;
                    }
                    if(a+a1 != 0)
                    {
                        temp=a;
                        temp1=b;
                        temp2=z;
                       //a=(-a1/a)*a;
                       b=(-a1/a)*b;
                       z=(-a1/a)*z;
                       b1+=b;
                       z1+=z;
                       y=z1/b1;
                       x=(temp2-(temp1*y))/temp;
                       cout<<"Le resultat de x est: "<<x<<endl;
                       cout<<"Le resultat de y est: "<<y<<endl;
                    }
                    else
                    {
                       b1=b+b1;
                       z1=z+z1;
                       y=z1/b1;
                       x=(z-(b*y))/a;
                       cout<<"Le resultat de x est: "<<x<<endl;
                       cout<<"Le resultat de y est: "<<y<<endl;
                    }
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
                    detMatrix();

                }break;
               }
           }break;
               case 3:
                {
                    menuEtudiant();
                    cin>>choix1;
                    switch(choix1)
                    {
                    case 1:
                        {
                            string nom,prenom,code,adresse;
                         cout<<"Veuillez saisir les informations suivantes sur un etudiant: "<<endl;
                        cout<<"Nom: ";
                        cin>>nom;
                        cout<<"Prenom: ";
                        cin>>prenom;
                        cout<<"Code: ";
                        cin>>code;
                        cout<<"Adresse: ";
                        cin>>adresse;
                        }break;
                    case 2:
                        {

                        }break;
                    case 3:
                        {

                        }break;
                    }
                }break;
               case 4:
                {
    do{
    const char PLAYER_X='X',PLAYER_O='O';
    char lastPlayer=PLAYER_O;
    char currentPlayer=PLAYER_X;

    char c='1';
    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=3;j++)
        {
            square[i][j]=c;
            c++;
        }
    }

    char bridge='p';
    int choice;
    int guard=1;
    for(int i=-1;i==-1 && guard<=9;i=winBoard())
    {
        board();
        cout<<"Turn of player_"<<currentPlayer<<endl;
        cout<<"Choose the number of the case: ";
        cin>>choice;


        if(choice==1 && square[1][1]=='1')
            square[1][1]=currentPlayer;
        else if(choice==2 && square[1][2]=='2')
            square[1][2]=currentPlayer;
        else if(choice==3 && square[1][3]=='3')
            square[1][3]=currentPlayer;
        else if(choice==4 && square[2][1]=='4')
            square[2][1]=currentPlayer;
        else if(choice==5 && square[2][2]=='5')
            square[2][2]=currentPlayer;
        else if(choice==6 && square[2][3]=='6')
            square[2][3]=currentPlayer;
        else if(choice==7 && square[3][1]=='7')
            square[3][1]=currentPlayer;
        else if(choice==8 && square[3][2]=='8')
            square[3][2]=currentPlayer;
        else if(choice==9 && square[3][3]=='9')
            square[3][3]=currentPlayer;
        else
        {

            for(int f=0;f<=100000000;f++){
                    if(f==50){
                        cout<<"Invalid choice"<<endl;
                    }
                }
                continue;
        }
        board();
        guard++;
        bridge=currentPlayer;
        currentPlayer=lastPlayer;
        lastPlayer=bridge;

    }


    if (winBoard()==1)
        cout<<"Player_"<<lastPlayer<<" wins on the top row"<<endl;
    else if(winBoard()==2)
        cout<<"Player_"<<lastPlayer<<" wins on the middle row"<<endl;
    else if(winBoard()==3)
        cout<<"Player_"<<lastPlayer<<" wins on the bottom row"<<endl;
    else if(winBoard()==4)
        cout<<"Player_"<<lastPlayer<<" wins on the left diagonal"<<endl;
    else if(winBoard()==5)
        cout<<"Player_"<<lastPlayer<<" wins on the right diagonal"<<endl;
    else if(winBoard()==6)
        cout<<"Player_"<<lastPlayer<<" wins on the left column"<<endl;
    else if(winBoard()==7)
        cout<<"Player_"<<lastPlayer<<" wins on the middle column"<<endl;
    else if(winBoard()==8)
        cout<<"Player_"<<lastPlayer<<" wins on the right column"<<endl;
    else
        cout<<"Draw.Nobody wins"<<endl;

cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               cin>>choixDeRetour;
                               system("cls");
    }while(choixDeRetour==1);
    main();
                }break;
    }
}while(choix1<=0 || choix1>=5);

    return 0;
}
