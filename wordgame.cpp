//Includes||
#include <iostream>
//________||

//Namespaces||
using namespace std;
//__________||

//Constants||
const int MAX_DIFFICULTY = 10;
//_________||

//Variables||
int currentDifficulty = 1;
//_________||

void wordGame(int difficulty){

    srand(time(NULL));
    int a = rand() % difficulty + 1;
    int b = rand() % difficulty + 1;
    int c = rand() % difficulty + 1;

    int sum = a + b + c;
    int product = a * b * c;

    int userInput;

    cout << "The sum of our number: " << sum << endl;
    cout << "The product of our number: " << product << endl;

    cout << "Current code: " << a << " " << b << " X" << endl; 

    cout << "Insert the number: ";
    cin >> userInput;

    if(userInput == c){
        cout << "------------The code is correct!------------" << endl << endl << endl;
        currentDifficulty++;
    }else{
        cout << "The code is incorrect! Restarting the system..." << endl << endl << endl;
        currentDifficulty = 1;
    }

}

int main(int argc, char const *argv[])
{
    
    cout << "You are a secret agent trying to break into the Chinese government" << endl;
    cout << "Enter the correct code to continue" << endl;
    
    while(currentDifficulty < MAX_DIFFICULTY){
        wordGame(currentDifficulty);
    }

    cout << "You won the game!" << endl;

    return 0;
}
