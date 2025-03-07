
#include <iostream>
#include <iomanip>
#include<ctime>
#include<string>
#include<cstdlib>
#include<vector>
using namespace std;

void weappen(); // to get weappen to player
void die();  // player die
void gameOver(); 
void random(); // to create random to styr game
void menu(); // menu to choose 
void monsterroom(); // Monster place
int hp , damage ; // player variables
int mhp, mdamage; // monster variables
string user; // to styr input of menu

int main()
{
     hp = 0, damage = 0; // healthy and damage of player
     mhp = 0, mdamage = 0;  // healthy and damage of monster
    cout <<  " Welcome to Monster Ratta Game  Pl select one choice"<<"\n";
    cout << "Select \n[1]easy\n[2]medium\n[3]hard\n";
    cin >>user;
    if (user == "1") hp = 12, damage= 0 ;
    else if (user == "2") hp = 25, damage = 0;
    else if  (user == "3") hp = 50, damage = 0;
    while ( user != "Q" || user != "q" )
    {
        user = " ";
        menu();
    }
    
    return 0;
}
void weappen()
{
    system("cls");
    random();
    cout << " get weappon\n";
    cout << "hp  (w):" <<   hp ;
    cout << "-----damage (w): " << damage << endl;
    cout << "mhp (w): " << mhp ;
    cout << "-----mdamage (w): " << mdamage << endl;
    
}
void monsterroom()
{
    system("cls");
    cout << " Welcome y will be my food  \n";
    cout << " Did want fihgt with sword press [1]\n  ";
    cin >> user;
    if (user == "1") {
        cout << " yr health are " << hp ;
        cout << " to fight  press [1] \n";
        cin >> user;
    }
    
    if (user == "1" )
    {
        cout << " In fight  \n";
         if ( mhp < 0)
         {
             mdamage += 10;
         }
        
        if ( mhp >= 50 || damage >= 50)
        {   system("cls");
            system("pause");
            cout <<" I am died ( damage > 50) \n ";
            gameOver();
        }
        if ( hp < 0)
        {
            damage += 10;
        }
        if ( hp >= 50 || mdamage >= 50)
        {
            system("cls");
            system("pause");
            cout <<" I am  wonn ( mdamage > 50) \n ";
            gameOver();
        }
        
        
        cout << " hp (moroom) ; " << hp ;
        cout << " damage (moroom) ; " << damage << " \n";
        cout << " mhp (moroom) ; " << mhp ;
        cout << " mdamage (moroom) ; " << mdamage << " \n";
    }
    else
    {
        system("cls");
        system("pause");
        cout <<" I wonn  \n ";
        cout << " Game over  \n" ;
        gameOver();
    }
    if (user == "2" && mhp > 0)
    {
        cout << " Y \n";
        mhp -= 1;
    }
    
    if (user == "2") { menu();  }
}
void menu()
{
    cout << "Select \n [1]weappen\n[2]monsterroom\n[3]menu\n";

    cin >> user;
    if ( user == "1") {weappen(); }
    if ( user == "2") {monsterroom();}
    if ( user == "3") { main();}
    
}
void  random()
{
    int a ;
    for (int i = 0; i < 2; i++)
    {    
        srand ( (unsigned int)time(NULL) );
        a = rand()%101;
        
        if (a > 0 && a < 20)
        {
            cout << a << endl;
           
            cout << " " << endl;
            mhp += 5;
            hp -= 10; 
        }
        if (a > 20 && a < 50)
        {
            cout << a << endl;
            mhp += 15;
            hp -= 15;
        }
        if (a > 50 && a < 90)
        {
            cout << a << endl;
            cout << " No things  \n";
            mhp -= 10 ;
           // hp += 10;
        }
        if (a > 90 && a < 100)
        {
            cout << a << endl;
            hp -= 20;
            cout << " I am died \n";
             die();
        }
    }
    
}
void die()
{
    system("cls");
    cout << " Y are died \n";
    gameOver();
}
void gameOver() 
{
    system("cls");
    cout << "GameOver \n";
    main();
}
