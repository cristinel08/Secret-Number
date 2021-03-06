//I created a program that u have to guess a secret number between -500 and 500.//
//This project was a homework from the university, i created it in the first year.//
//The user has 10 atemps of trying to guess a random number between -500 and 500.//
//The program will help user to find the secret number telling him if the number he inputed is greater or lesser then the secret number.//
//If he finds the secret number the program will congratulate him and will stop.//
//If he doesn't find the secret number in the 10 guesses the program will show him the secret number and will stop.//
#include <iostream>
#include <time.h>
#include <chrono>

using namespace std;

int main()
{
   srand (chrono::duration_cast < chrono::milliseconds>(                                     // this code
        chrono::system_clock::now().time_since_epoch()).count()                             // generate
         );                                                                                // a random number
    int n = rand()%1000 - 500;                                                            // it must be between -500 and 500
    int numar_incercare;                                                         // initialise the secret number
    int i;                                                                      // initialise the chances
    cout << "Incercati sa ghiciti numarul cuprins intre -500 si 500" << '\n';                      
    for (i = 1; i <= 11; i++)                                                                     // number of atemps
       {                                                                                         

        if (i == 11) break;                                                                   // when it gets to the last number the loop closes
        cout << "Incercari ramase: " << 11 - i << endl;                                   
        cout << "Incearca-ti norocul: ";                                                    
        cin >> numar_incercare;                                                                   
        if (numar_incercare >= -500 && numar_incercare <= 500)                                    //verify if the number is between -500 and 500 
            {                                                                                   

            if (numar_incercare == n)                                                           //verify if the user got the number
                        {
                        if (i == 1) cout << "Felicitari!!! Ati ghicit din prima incercare!!! Cat noroc!!!";     
                        else                                                                                  
                            cout << "Felicitari!!! Ati ghicit din a "                                        
                             << i << " a incercare" <<'\n';
                        break;                                                                              //if the user finds the secret number, the loop closes
                        }
            else if (numar_incercare < n) cout << "Numarul introdus este mai mic decat numarul secret" << endl;         // showing if the secret number is greater or 
														       // lesser then the input of the user 
            else cout << "Numarul introdus este mai mare decat numarul secret " << endl;                               
            }
        else cout << "Numarul introdus nu este intre -500 si 500" << endl;                //if the input of the user isn't between -500 and 500
        }
    if (i == 11)                                                                        //if the number of guesses hits the maxim number
        {
        cout << "Ati depasit numarul de incercari" << '\n'<<                          
                "Numarul secret era: " << n;
        }
    return 0;
}
