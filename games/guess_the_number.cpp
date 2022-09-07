#include<iostream>
#include<cstdlib>//stdlib in c
#include<ctime>//time lib in c
using namespace std;
int main() {
  
  
  // cout<<random<<endl; 

  cout<<"\n\t\t\t\t\t Welcome to GuessTheNumber game!"<<endl;
  cout<<"\n\t\t\t\t\t********************************"<<endl<<endl;
  cout<<"You have to guess a number between 1 and 100.You'll have limited choices based on the level you choose.Good luck!"<<endl;

while(true){
  cout<<"\nEnter your level to play: \n\n";
  cout<<"1- for easy\t";
  cout<<"2- for medium\t";
  cout<<"3- for hard\t";
  cout<<"0- for end the game"<<endl<<endl;

  int difficultyLevel;
  cout<<"Enter the number: "<<endl;
  cin>>difficultyLevel;
  srand(time(0));//generate new number evey time
  int playerChoice;

  
  int secretNumber=1+(rand()%100);//to define range formula

  if(difficultyLevel==1){
  cout<<"\nYou have 10 choices for finding secret number between 1 to 100.";
    int choicesLeft=10;
    for(int i=1;i<=10;i++){
        cout<<"\n\nEnter the number you think: ";
        cin>>playerChoice;
        if(playerChoice==secretNumber){
          cout<<"Oh! you won the game , "<<playerChoice<<" is the secret number"<<endl;
          cout<<"play the game again with us\n\n"<<endl;
          break;
        } else{
          cout<<"Nope, "<<playerChoice<<" is not the right number\n";
                if(playerChoice>secretNumber){
                    cout<<"The secret number is smaller than you have guessed"<<endl;
                }
                 else{
                     cout<<"The secret number is greater than you have guessed"<<endl;
                }
                choicesLeft--;
                cout<<"you have left only, "<<choicesLeft<<" choices"<<endl;
                if(choicesLeft==0){
                              cout<<"No more choices left\nyou could't find the number but number is "<<secretNumber<<" you loose!\n\n";
                          cout<<"play the game again to win!!\n\n";
                        }
                        
              }
        
      
    }
  
  }
   else if(difficultyLevel==2){
     cout<<"\nYou have 7 choices for finding secret number between 1 to 100.";
    int choicesLeft=7;
    for(int i=1;i<=7;i++){
        cout<<"\n\nEnter the number you think: ";
        cin>>playerChoice;
        if(playerChoice==secretNumber){
          cout<<"Oh! you won the game , "<<playerChoice<<" is the secret number"<<endl;
          cout<<"play the game again with us\n\n"<<endl;
          break;
        } else{
          cout<<"Nope, "<<playerChoice<<" is not the right number\n";
                if(playerChoice>secretNumber){
                    cout<<"The secret number is smaller than you have guessed"<<endl;
                }
                 else{
                     cout<<"The secret number is greater than you have guessed"<<endl;
                }
                choicesLeft--;
                cout<<"you have left only, "<<choicesLeft<<" choices"<<endl;
                if(choicesLeft==0){
                              cout<<"No more choices left\nyou could't find the number but number is "<<secretNumber<<" you loose!\n\n";
                          cout<<"play the game again to win!!\n\n";
                        }
                        
              }
        
      
    }
  

  }
   else if(difficultyLevel==3){
     cout<<"\nYou have 5 choices for finding secret number between 1 to 100.";
    int choicesLeft=5;
    for(int i=1;i<=5;i++){
        cout<<"\n\nEnter the number you think: ";
        cin>>playerChoice;
        if(playerChoice==secretNumber){
          cout<<"Oh! you won the game , "<<playerChoice<<" is the secret number"<<endl;
          cout<<"play the game again with us\n\n"<<endl;
          break;
        } else{
          cout<<"Nope, "<<playerChoice<<" is not the right number\n";
                if(playerChoice>secretNumber){
                    cout<<"The secret number is smaller than you have guessed"<<endl;
                }
                 else{
                     cout<<"The secret number is greater than you have guessed"<<endl;
                }
                choicesLeft--;
                cout<<"you have left only, "<<choicesLeft<<" choices"<<endl;
                if(choicesLeft==0){
                              cout<<"No more choices left\nyou could't find the number but number is "<<secretNumber<<" you loose!\n\n";
                          cout<<"play the game again to win!!\n\n";
                        }
                        
              }
        
      
    }
  
          
  }
   else if(difficultyLevel==0){
        exit(0);
  }
  else{
    cout<<"Enter the value choice only!"<<endl;
  }
}
  return  0;
}
