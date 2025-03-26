#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){

    int randomNum;
    int answer;
    bool correct = false;
    int tries = 0;
    char decision;
    
    srand(time(0));
    randomNum = rand() % 100 + 1;

    cout<<"Welcome to the random guessing game!!"<<endl;

    do{
        cout<<"Enter a number"<<endl;
        cin>>answer;
        cout<<" "<<endl;
        tries++;

        if(cin.fail())
        {
          cout<<"Incorrect Input!"<<endl;
          cin.clear();
          cin.ignore(1000, '\n');
          continue;
        }
       
            if(answer > randomNum)
            {
              cout<<"Guess a lower number"<<endl;
              cout<<endl;
            }
            else if(answer < randomNum)
            {
              cout<<"Guess a higher number"<<endl;
              cout<<endl;
            }
            else
            {
                correct = true;
            }
        }while(!correct);
    
   

    cout<<"You won!! You guessed the correct number in "<<tries<<" attempts"<<endl;
    cout<<endl;
    cout<<"Do you with to play again? (y/n)"<<endl;
    cin>>decision;
    while(decision == 'y')
    {
    do{
        cout<<"Enter a number"<<endl;
        cin>>answer;
        cout<<" "<<endl;
        tries++;

        if(cin.fail())
        {
          cout<<"Incorrect Input!"<<endl;
          cin.clear();
          cin.ignore(1000, '\n');
          continue;
        }
       
            if(answer > randomNum)
            {
              cout<<"Guess a lower number"<<endl;
              cout<<endl;
            }
            else if(answer < randomNum)
            {
              cout<<"Guess a higher number"<<endl;
              cout<<endl;
            }
            else
            {
                correct = true;
            }
        }while(!correct);
        cout<<"You won!! You guessed the correct number in "<<tries<<" attempts"<<endl;
    }
}
    