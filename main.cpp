#include <iostream>
#include <math.h>
#include <sstream>
#include <stdlib.h>
#include <bits/stdc++.h>
#include <fstream>

using namespace std;
 void menuCentrale()

{
    cout<<"---------------------------BIENVENUE DANS NOTRE PROGRAMME----------------------------"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
    cout<<"| Faites un choix parmi la liste ci-dessoous:                                       |"<<endl;
    cout<<"|    1............ Op"<<char(130)<<"ration de codage/D"<<char(130)<<"codage/Transcodage                         |"<<endl;
    cout<<"|    2............ Operations math"<<char(130)<<"matiques                                         |"<<endl;
    cout<<"|    3............ Gestion d information sur un "<<char(130)<<"tudiant                            |"<<endl;
    cout<<"|    4............ Ma r"<<char(130)<<"alisation                                                   |"<<endl;
    cout<<"-------------------------------------------------------------------------------------"<<endl;
}
void choice()//En definir un pour chaque choix et non un seul
{
    cout<<"1.......  Binaire"<<endl;
	cout<<"2.......  Octal"<<endl;
	cout<<"3.......  Hexad"<<char(130)<<"cimal"<<endl;
	cout<<"4.......  D"<<char(130)<<"cimal"<<endl;
}
void vider_buffer()
{
    cin.clear();
    cin.seekg(0,ios::end);

    if(!cin.fail())
        cin.ignore(numeric_limits<streamsize>::max());
    else
        cin.clear();
}
int saisie_securise(int a)
{
    string temp;

    while(true)
    {
        getline(cin,temp);


        if (cin.eof() || cin.bad())
        {
            cerr<<"Une erreur interne est survenue"<<endl;

        if (cin.eof())
        {
            break;
        }

        vider_buffer();
        continue;
        }
        else if(cin.fail() || temp.find_first_not_of("0123456789")!= string::npos)
        {
            cerr<<"Erreur saisie incorrect"<<endl;
            vider_buffer();
            continue;
        }

        istringstream stream(temp);
        stream >> a;

        if (stream.fail() || !stream.eof())
            cerr<<"Erreur saisie incorrect"<<endl;
        else
        break;
    }
    a=stoi(temp);
    return a;
}
int saisie_securise1(int a)
{
    string temp;

    while(true)
    {
        getline(cin,temp);


        if (cin.eof() || cin.bad())
        {
            cerr<<"Une erreur interne est survenue"<<endl;

        if (cin.eof())
        {
            break;
        }

        vider_buffer();
        continue;
        }
        else if(cin.fail() || temp.find_first_not_of("0123456789-,.")!= string::npos)
        {
            cerr<<"Erreur saisie incorrect"<<endl;
            vider_buffer();
            continue;
        }

        istringstream stream(temp);
        stream >> a;

        if (stream.fail() || !stream.eof())
            cerr<<"Erreur saisie incorrect"<<endl;
        else
        break;
    }
    a=stoi(temp);
    return a;
}
int saisie_securiseBin(int a)
{
    string temp;

    while(true)
    {
        getline(cin,temp);


        if (cin.eof() || cin.bad())
        {
            cerr<<"Une erreur interne est survenue"<<endl;

        if (cin.eof())
        {
            break;
        }

        vider_buffer();
        continue;
        }
        else if(cin.fail() || temp.find_first_not_of("01")!= string::npos)
        {
            cerr<<"Erreur saisie incorrect"<<endl;
            vider_buffer();
            continue;
        }

        istringstream stream(temp);
        stream >> a;

        if (stream.fail() || !stream.eof())
            cerr<<"Erreur saisie incorrect"<<endl;
        else
        break;
    }
    a=stoi(temp);
    return a;
}
string saisie_securiseBin(string a)
{
    string temp;

    while(true)
    {
        getline(cin,temp);


        if (cin.eof() || cin.bad())
        {
            cerr<<"Une erreur interne est survenue"<<endl;

        if (cin.eof())
        {
            break;
        }

        vider_buffer();
        continue;
        }
        else if(cin.fail() || temp.find_first_not_of("01")!= string::npos)
        {
            cerr<<"Erreur saisie incorrect"<<endl;
            vider_buffer();
            continue;
        }

        istringstream stream(temp);
        stream >> a;

        if (stream.fail() || !stream.eof())
            cerr<<"Erreur saisie incorrect"<<endl;
        else
        break;
    }
    return a;
}

string saisie_securiseHex(string a)
{
    string temp;

    while(true)
    {
        getline(cin,temp);


        if (cin.eof() || cin.bad())
        {
            cerr<<"Une erreur interne est survenue"<<endl;

        if (cin.eof())
        {
            break;
        }

        vider_buffer();
        continue;
        }
        else if(cin.fail() || temp.find_first_not_of("0123456789AaBbCcDdEeFf")!= string::npos)
        {
            cerr<<"Erreur saisie incorrect"<<endl;
            vider_buffer();
            continue;
        }

        istringstream stream(temp);
        stream >> a;

        if (stream.fail() || !stream.eof())
            cerr<<"Erreur saisie incorrect"<<endl;
        else
        break;
    }
    return a;
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
    cout<<"1...... D"<<char(130)<<"cimal en"<<endl;
	cout<<"2...... Binaire en"<<endl;
	cout<<"3...... Hexad"<<char(130)<<"cimal en"<<endl;
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
    N=saisie_securise(N);
    while(N%4!=0)
    {
        cout<<"La taille doit etre divisible par 4.Reesayer!"<<endl;
        N=saisie_securise(N);
    }
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
            bool r1=(i+1)%4==0 || i%4==0;
            bool r2=(j+1)%4==0 || j%4==0;

            if((r1 && !r2) || (!r1 && r2))
            {
                tab[i][j]=((N*N)+1)-tab[i][j];
            }
            cout<<"["<<tab[i][j]<<"]";
        }
        cout<<endl;
    }
}
void remplir_tab(int* p,int* tab,int l,int c)
{
    int k=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[k]=tab[k];
            k++;
        }
    }
}

void remplir_tab(float* p,float* tab,int l,int c)
{
    int k=0;
    for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            p[k]=tab[k];
            k++;
        }
    }
}

void ajout_valeur(int& val1,int& val2,int& val3,int& val4,int i,int j,int k,int L,int x,int n)//en utilisant la methode LUX
{
    if( (i==(L*2)-2 && j==n/2) || (i==(L*2)&& j!=n/2) )//cas de U
    {
        val1=k+3;
        val2=k+2;
        val3=k+1;
        val4=k;
    }
    else if(x-1!=0 && i>=(L*2)+2)//cas de X
    {
        val1=k+3;
        val2=k+1;
        val3=k+2;
        val4=k;
    }
    else//cas de L
    {
        val1=k;
        val2=k+2;
        val3=k+1;
        val4=k+3;
    }
}
void carre_simple_pair(int *p,int n)
{
    int tab[n][n],i,j,k;
    int x=((n/2)-1)/2, L=x+1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            tab[i][j]=0;
        }
    }
    i=0;
    j=n/2;
    ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,1,L,x,n);
    for(k=5;k<=n*n;k+=4)
    {
        i-=2;
        j+=2;
        if(i>=0 && j<n && tab[i][j]==0)//case ok
        {
             ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i>=0 && j<n && tab[i][j]!=0)//case occupe
        {
            i+=4;
            j-=2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i<0 && j<n)//debordement en haut
        {
            i=n-2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else if(i>=0 && j>=n)//debordement a droite
        {
            j=1;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
        else
        {
            i+=4;
            j-=2;
            ajout_valeur(tab[i][j],tab[i+1][j],tab[i+1][j-1],tab[i][j-1],i,j,k,L,x,n);
        }
    }
    remplir_tab(p,(int*)tab,n,n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<"["<<tab[i][j]<<"]";
        }
        cout<<endl;
    }
}


void p_gauss(float *m1,int l,int c,int &permute)
{
    permute=1;
    int i,j, p=0,k;
    float x, maxi, m[l][c];
    remplir_tab((float*)m,m1,l,c);
    for(j=0;j<c;j++)
    {
        maxi=m[p][j];
        k=p;
        for(i=p+1;i<l;i++)
        {
            if(maxi<abs(m[i][j]))
            {
                maxi=m[i][j];
                k=i;
            }
        }
        if(maxi!=0)
        {
            if(k!=p)
            {
                permute++;
                for(i=0;i<c;i++)
                {
                    maxi=m[k][i];
                    m[k][i]=m[p][i];
                    m[p][i]=maxi;
                }
            }
            for(i=p+1;i<l;i++)
            {
                x=-m[i][j];
                for(k=j;k<c;k++)
                {
                    m[i][k]+=(x/ m[p][j]) * m[p][k] ;
                }
            }
        }
        p++;
    }
    remplir_tab(m1,(float*)m,l,c);
}

float determinant(float *m,int n)
{
    float m1[n][n],delta=1;
    int i,j;
    int permute;
    remplir_tab((float*)m1,m,n,n);
    p_gauss((float*)m1,n,n,permute);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                delta*=m1[i][j];
            }
        }
    }
    if(permute%2==0)
    {
        delta*=-1;
    }
    return delta;
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

bool is_unique(string b)
{
    ifstream verify;
    verify.open("code.txt", ios::app);
    string line;
    while(getline(verify,line))
    {
        if(line == b)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
}
//fonction qui permet de rentrer les information sur un etudiant
void add_student()
{
    string nom;
    string prenom;
    string adresse;
    string code;
    cout<<"Enregistrez les informations sur l "<<char(130)<<"tudiant"<<endl;
    ofstream fichier;
    ofstream verify;//un autre flux creer pour stocker les codes etudiants dans un fichier a part
    fichier.open("info.txt",ios::app);
    verify.open("code.txt", ios::app);
    char k = 'c';
    while ( k == 'c')
    {

            fflush(stdin);
            cout<<"Entrez le nom de l'etudiant: "<<endl;
            getline(cin,nom);

            cout<<"Entrez le prenom de l'etudiant: "<<endl;
            getline(cin,prenom);


            cout<<"Entrez l'adresse de l'etudiant: "<<endl;
            getline(cin,adresse);

            cout<<"Entrez le code de l'etudiant: "<<endl;
            getline(cin,code);

            if(fichier && verify)
            {

                if (is_unique(code))
                {
                    fichier<<nom<<"\t"<<prenom<<"\t"<<adresse<<"\t"<<code;
                    fichier<<endl;
                    verify<<code;
                    verify<<endl;
                }
                else
                {
                    cout<<"Ce code existe deja!!!"<<endl;
                }

            }
            else
            {
                cout<<"Le fichier n'a pas "<<char(130)<<"t"<<char(130)<<" cr"<<char(130)<<char(130)<<endl;
            }
        cout<<"Appuyez sur (c) pour enregistrer un autre etudiant ou sur autre chose pour continuer"<<endl;
        cin>>k;
        system("cls");

    }

}
//fonction pour afficher et imprimer les informations des etudiants
void display_data()
{
    string line;
    char print;
    ifstream fichier;
    fichier.open("info.txt",ios::in);
    while(getline(fichier,line))
    {
        cout<<line<<endl;
    }
    cout<<"taper (p) pour imprimer le fichier ou (e) pour continuer"<<endl;
    cin>>print;
     while(print!='p' && print!='e' && print!='P' && print!='E')
     {
         cout<<"Mauvais caractere.Reessayer"<<endl;
         cin>>print;
     }
    if(print=='p' || print=='P')
    {
        string s =("notepad.exe /p info.txt");
        system(s.c_str());//commande system utilisé pour imprimer un fichier
    }
}
void AZ_data()
{
    string ligne,temp;
    int nb_ligne=0;
    char afficher;
    ifstream fichier;
    int i=0;
    fichier.open("info.txt",ios::in);
    while(getline(fichier,ligne))
    {
        nb_ligne++;
    }
    fichier.close();
    if(nb_ligne>0)
    {
        fichier.open("info.txt",ios::in);
    string info[nb_ligne];
    while(getline(fichier,ligne))
    {
        info[i]=ligne;

        if(int(info[i][0])>97 && int (info[i][0])<122)
            info[i][0]=char(int(info[i][0])-32);
        i++;
    }
    fichier.close();


    for(int p=0;p<nb_ligne;p++)
    {
        for(int i=0;i<nb_ligne-p;i++)
        {
            if(info[i]>info[i+1])
            {
              temp=info[i];
            info[i]=info[i+1];
            info[i+1]=temp;
            }

        }
    }

    for(int i=0;i<nb_ligne;i++)
        cout<<info[i]<<endl;

    cout<<"Tapez (p) pour imprimer ou (e) pour continuer"<<endl;
     cin>>afficher;
     while(afficher!='p' || afficher!='e' || afficher!='P' || afficher!='E')
     {
         cout<<"Mauvais caractere.Reessayer"<<endl;
         cin>>afficher;
     }
    if(afficher=='p' || afficher=='P')
    {
        string s = ("notepad.exe /p info.txt");
        system(s.c_str());
        fichier.open("info.txt",ios::in);
        system("print info.txt");
        fichier.close();
    }
}
    else
        cout<<"Veullez d'abord entrer des donnees dans le fichier"<<endl;
}

int main()
{
    int choix1,choix2,choix3, choixDeRetour, m_lignes,m_colonnes,m_lignes1,m_colonnes1;
    int valeurChoisi;
    string valeurBinaire;
    do
    {

    menuCentrale();
        choix1=saisie_securise(choix1);
        system("cls");
        switch(choix1)
        {
        case 1:
            {
                do{
               menuchoixUn();
               choix2=saisie_securise(choix2);
               system("cls");
               switch (choix2)
               {
               case 1:
                    {
                        do{
                                choice();
                      choix3=saisie_securise(choix3);
                      system("cls");
                      switch (choix3)
                      {
                      case 1:
                            {
                                do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en binaire: ";
                               valeurChoisi=saisie_securise(valeurChoisi);
                               decbin(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                                system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 2:
                            {
                               do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en octal: ";
                               valeurChoisi=saisie_securise(valeurChoisi);
                               decoctal(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 3:
                            {
                                do{
                                cout<<"Entrez le d"<<char(130)<<"cimal que vous voulez mettre en hexadecimal: ";
                               valeurChoisi=saisie_securise(valeurChoisi);
                               dechexa(valeurChoisi);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 4:
                            {
                                do{
                                cout<<"Un nombre d"<<char(130)<<"cimal est "<<char(130)<<"gal "<<char(133)<<" lui-m"<<char(136)<<"me en d"<<char(130)<<"cimal"<<endl;
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       }
                    }while(choix3<1 || choix3>4);
                    }break;
                       case 2:
                        {
                            do{
                                    choice();
                            choix3=saisie_securise(choix3);
                      switch (choix3)
                      {
                      case 1:
                            {
                                do{
                                cout<<"Un binaire est "<<char(130)<<"gal "<<char(133)<<" lui-m"<<char(136)<<"me en binaire: ";
                                cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 2:
                            {
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en octal: ";
                               valeurBinaire=saisie_securiseBin(valeurBinaire);
                               binoctal(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 3:
                            {
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en hexadecimal: ";
                               valeurBinaire=saisie_securiseBin(valeurBinaire);
                               binHex(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 4:
                            {
                                do{
                                cout<<"Entrez le binaire que vous voulez mettre en decimal: ";
                               valeurBinaire=saisie_securiseBin(valeurBinaire);
                               bindec(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                        }
                      }while(choix3<1 || choix3>4);
                        }break;
                       case 3:
                        {
                            do{
                                    choice();
                            choix3=saisie_securise(choix3);
                      switch (choix3)
                      {

                      case 1:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en binaire: ";
                               valeurBinaire=saisie_securiseHex(valeurBinaire);
                                hexabin(valeurBinaire);
                                cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 2:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en octal: ";
                               valeurBinaire=saisie_securiseHex(valeurBinaire);
                               hexoct(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 3:
                            {
                                do{
                                cout<<"Un nombre hexadecimal est "<<char(130)<<"gal "<<char(133)<<" lui-m"<<char(136)<<"me en hexadecimal.";
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                       case 4:
                            {
                                do{
                                cout<<"Entrez l'hexadecimal que vous voulez mettre en decimal: ";
                               valeurBinaire=saisie_securiseHex(valeurBinaire);
                               hexadec(valeurBinaire);
                               cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                            }break;
                          }
                      }while(choix3<1 || choix3>4);
               }break;
            }
                }while(choix2<1 || choix2>3);
        }break;
    case 2:
           {
               do{
               menuChoixDeux();
               choix1=saisie_securise(choix1);
               system("cls");
               switch(choix1)
               {
               case 1:
                {
                    do
                    {
                        cout<<"Pressez 0 pour un carre magique d ordre doublement pair"<<endl;
                        cout<<"Pressez 1 pour un carre magique d ordre simplement pair"<<endl;
                        choix1=saisie_securiseBin(choix1);


                        if(choix1==0)
                            carre_double_pair();
                        if(choix1==1)
                        {
                            int n;
                            cout<<"Entrez la valeur du carre simplement pair"<<endl;
                            n=saisie_securise(n);
                            while(n%2!=0 || n<=2 || n%4==0)
                            {
                                cout<<"Mauvais choix.Reessayez"<<endl;
                                n=saisie_securise(n);
                            }
                            int p[n][n];
                            carre_simple_pair(*p,n);
                        }

                    cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                    }while(choixDeRetour==1);
                    main();
                }break;
               case 2:
                {
                    do
                    {
                        cout<<"Entrer le nombre de lignes de votre matrice1"<<endl;
                        m_lignes=saisie_securise(m_lignes);
                        cout<<"Entrer le nombre de colonnes de votre matrice1"<<endl;
                        m_colonnes=saisie_securise(m_colonnes);
                        cout<<"Entrer le nombre de lignes de votre matrice2"<<endl;
                        m_lignes1=saisie_securise(m_lignes1);
                        cout<<"Entrer le nombre de colonnes de votre matrice2"<<endl;
                        m_colonnes1=saisie_securise(m_colonnes1);
                        while(m_colonnes!=m_lignes1)
                        {
                            cout<<"Erreur!!Le nombre de colonnes de matrice1 doit egales au nombre de lignes de matrice2.Veuillez reesayer"<<endl;
                            cout<<"Entrer le nombre de lignes de votre matrice1"<<endl;
                        m_lignes=saisie_securise(m_lignes);
                        cout<<"Entrer le nombre de colonnes de votre matrice1"<<endl;
                        m_colonnes=saisie_securise(m_colonnes);
                        cout<<"Entrer le nombre de lignes de votre matrice2"<<endl;
                        m_lignes1=saisie_securise(m_lignes1);
                        cout<<"Entrer le nombre de colonnes de votre matrice2"<<endl;
                        m_colonnes1=saisie_securise(m_colonnes1);
                        }
                        int a[m_lignes][m_colonnes];
                        int b[m_lignes1][m_colonnes1];
                        int p=0;
                        cout<<"Entrer les valeurs de la premiere matrice"<<endl;
                        for(int k=0;k<m_lignes;k++)
                        {
                            for(int l=0;l<m_colonnes;l++)
                            {
                                cin>>a[k][l];
                            }
                        }
                        cout<<"Entrer les valeurs de la deuxieme matrice"<<endl;
                        for(int m=0;m<m_lignes1;m++)
                        {
                            for(int n=0;n<m_colonnes1;n++)
                            {
                                cin>>b[m][n];
                            }
                        }
                         cout<<"La premiere matrice"<<endl;
                        for(int k=0;k<m_lignes;k++)
                        {
                            for(int l=0;l<m_colonnes;l++)
                            {
                                cout<<"["<<a[k][l]<<"]";
                            }
                            cout<<endl;
                        }
                         cout<<"la deuxieme matrice"<<endl;
                        for(int k=0;k<m_lignes;k++)
                        {
                            for(int l=0;l<m_colonnes;l++)
                            {
                                cout<<"["<<b[k][l]<<"]";
                            }
                            cout<<endl;
                        }
                        cout<<"Le resultat est: "<<endl;
                        int r[m_lignes][m_colonnes1];
                           for(int k=0;k<m_lignes;k++)
                                    {
                                       for(int m=0; m<m_colonnes1;m++)
                                        {

                                           for(int l=0;l<m_lignes1;l++)
                                            {
                                                p= a[k][l]*b[l][m]+p;
                                            }
                                            r[k][m]=p;
                                            p=0;
                                          }
                                    }

                          for(int k=0;k<m_lignes;k++)
                          {
                              for(int l=0;l<m_colonnes1;l++)
                              {
                                  cout<<r[k][l]<<endl;
                              }
                          }
                        cout<<"Si vous voulez continuer pressez 1"<<endl;
                               cout<<"Pour retourner au menu principal presser 0"<<endl;
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                    }while(choixDeRetour==1);
                    main();
                }break;
               case 3:
                {
                    float a,b,z,a1,b1,z1,y,x,temp,temp1,temp2;
                    do{
                    cout<<"Entrer la valeur de z,a et b pour la premiere equation ax+by=z: "<<endl;
                    z=saisie_securise1(z);
                    a=saisie_securise1(a);
                    b=saisie_securise1(b);
                    cout<<"Entrer la valeur de z,a et b pour la deuxieme equation ax+by=z: "<<endl;
                    z1=saisie_securise1(z1);
                    a1=saisie_securise1(a1);
                    b1=saisie_securise1(b1);
                    while((a || b || a1 || b1)==0)
                    {
                        cout<<"Les coefficient de x et y doivent etre different de 0. Reesayer"<<endl;
                        cout<<"Entrer la valeur de z,a et b pour la premiere equation ax+by=z: "<<endl;
                    z=saisie_securise1(z);
                    a=saisie_securise1(a);
                    b=saisie_securise1(b);
                    cout<<"Entrer la valeur de z,a et b pour la deuxieme equation ax+by=z: "<<endl;
                    z1=saisie_securise1(z1);
                    a1=saisie_securise1(a1);
                    b1=saisie_securise1(b1);
                    }
                    if(a+a1 != 0)
                    {
                        temp=a;
                        temp1=b;
                        temp2=z;
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
                               choixDeRetour=saisie_securiseBin(choixDeRetour);
                               system("cls");
                               }while(choixDeRetour==1);
                               main();
                }break;
               case 4:
                {
                    int i,j;
                    cout<<"Entrez le nombre de lignes de votre matrice: "<<endl;
                    m_lignes=saisie_securise(m_lignes);
                    cout<<"Entrez le nombre de colonnes de votre matrice: "<<endl;
                    m_colonnes=saisie_securise(m_colonnes);
                    float tab[m_lignes][m_colonnes];
                    cout<<"Entrez les valeurs de la matrice: "<<endl;
                    for(i=0;i<m_lignes;i++)
                    {
                        for(j=0;j<m_colonnes;j++)
                        {
                            cin>>tab[i][j];
                        }
                    }
                    cout<<"La transposée de votre matrice est: "<<endl;
                    for(j=0;j<m_colonnes;j++)
                    {
                        for(i=0;i<m_lignes;i++)
                            cout<<"["<<tab[i][j]<<"]";
                        cout<<endl;
                    }
                    if(m_lignes == m_colonnes)
                    cout<<"Le determinant est: "<<determinant((float*)tab,m_lignes)<<endl;
                    else
                        cout<<"Nous ne pouvons calculer le determinant d'une matrice non carre"<<endl;

                }break;
               }
               }while(choix1<1 || choix1>4);
           }break;
               case 3:
                {
                    do{
                    menuEtudiant();
                    choix1=saisie_securise(choix1);
                    switch(choix1)
                    {
                    case 1:
                        {
                                add_student();
                                cout<<"Pressez sur 0 pour retourner au menu principal ou 1 pour aller au menu etudiant"<<endl;
                                choixDeRetour=saisie_securiseBin(choixDeRetour);
                                if(choixDeRetour==1)
                                    {
                                        menuEtudiant();
                                        cin>>choix1;
                                    }
                               main();
                        }break;

                    case 2:
                        {
                            display_data();
                            cout<<"Pour retourner au menu principal presser 0 ou 1 pour aller au menu etudiant"<<endl;
                            choixDeRetour=saisie_securiseBin(choixDeRetour);
                            if(choixDeRetour==1)
                            {
                                menuEtudiant();
                                cin>>choix1;
                            }
                                main();
                        }break;
                    case 3:
                        {
                             AZ_data();
                            cout<<"Pour retourner au menu principal presser 0 ou 1 pour aller au menu etudiant"<<endl;
                            choixDeRetour=saisie_securiseBin(choixDeRetour);
                            if(choixDeRetour==1)
                            {
                                menuEtudiant();
                                cin>>choix1;
                            }
                                main();
                        }break;
                    }
                }while(choix1<1 || choix1>3);
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
