
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int randomNum = rand() % 101;
    int guess = 0;
    int guessTime = 0;

    do {
          cout << " give Yr gissing number \n";
          cin >> guess; guessTime ++;
           cout << "Guessing Time = " << guessTime << "\n";
         if (guess < randomNum) 
           cout << " No It smaller the number. Choos bigger";
        
          else if (guess > randomNum) 
           cout << " No It bigger the number. Choos less";
     
           else 
          cout << " y won ";
       }  while (guess != randomNum);       
    
}
