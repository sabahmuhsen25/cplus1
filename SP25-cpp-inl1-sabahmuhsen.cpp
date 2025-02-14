
 
#include <iostream>
#include <iomanip>
    using namespace std;


    int main()
    {
        
        int randomNum = rand() % 101;
        int guess = 0;
        int guessTime = 0;

        do { //
            cout << " give Yr guessing number \n";
            cin >> guess; guessTime ++;
           
                
            cout << "Guessing Time = " << guessTime << "\n";
            if (guess < randomNum) 
                cout << " No,, It smaller the number. Choos bigger\n";
               
            else if (guess > randomNum) 
                cout << " No,, It bigger the number. Choos less\n";
     
            else 
                cout << " y won \n";

           
            
        }  while (guessTime < 3 );      
        cout << "\n y lost ";
    }

 

