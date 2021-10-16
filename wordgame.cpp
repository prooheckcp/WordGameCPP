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
    int CodeA = rand() % difficulty + 1;
    int CodeB = rand() % difficulty + 1;
    int CodeC = rand() % difficulty + 1;

    int CodeSum = CodeA + CodeB + CodeC;
    int CodeProduct = CodeA * CodeB * CodeC;

    int GuessA, GuessB, GuessC;

    cout << "The sum of our number: " << CodeSum << endl;
    cout << "The product of our number: " << CodeProduct << endl;

    //cout << "Current code: " << CodeA << " " << CodeB << " X" << endl; 

    cout << "Insert the number: ";
    cin >> GuessA;
    cin >> GuessB;
    cin >> GuessC;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    if(GuessSum == CodeSum && GuessProduct == CodeProduct){
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
