#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){

    int guessNumber, secretNumber;
    srand (static_cast<unsigned int>(time(nullptr)));

    ///generate (1-10)
    secretNumber = rand () % 10 + 1 ;

    cout << "Guess my number ( 1 - 10 ) :  ";
    cin >> guessNumber;
    if(guessNumber != secretNumber){
        do{
            cout << "Wrong number, because ";
            if(guessNumber < secretNumber){
                cout << "Your shot is less than the secret number" << endl;
            }else{
                cout << "Your shot is greather than the secret number" << endl;
            }
            cout << "Type your shot: ";
            cin >> guessNumber;
        }while (guessNumber != secretNumber);
    };
    if(guessNumber == secretNumber){
            cout << "Congratulations, you win!!" << endl;
        }

    return 0;
}
