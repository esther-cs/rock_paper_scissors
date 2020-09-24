/* Play Rock, Paper, Scissors, Lizard, Spock here */
#include <iostream>
#include <stdlib.h>
int main(){
  //Live long and prosper
  srand(time(NULL));
  int computer=rand()%3+1;
  int user =0;
  std::cout<<"Choose one: 1) Rock 2) Paper 3) Scissors \n";
  std::cin>>user;
  if (user==1){
    std::cout<<"You chose Rock \n";
  }
  else if (user==2){
    std::cout<<"You chose Paper \n";
  }
  else if (user==3){
    std::cout<<"You chose Scissors \n";
  }
  else{
    std::cout<<"Invalid Choice \n";
  }
  if (computer==1){
    std::cout<<"He chose Rock \n";
  }
  else if (computer==2){
    std::cout<<"He chose Paper \n";
  }
  else if(computer==3){
    std::cout<<"He chose Scissors \n";
  }
  else{
    std::cout<<"Invalid Choice \n";
  }
  if (computer==user){
    std::cout<<"It a tie! \n";
  }
  else if (user==1){
    if (computer==2){
      std::cout<<"Uh-oh, you lost \n";
    }
    if(computer==3){
      std::cout<<"Lucky you! \n";
    }
  }
  else if (user==2){
    if (computer==1){
      std::cout<<"Never give up! \n";
    }
    if (computer==3){
      std::cout<<"Don't be too arrogant! Be humble even if you won this match \n";
    }
  }
  else if (user==3){
    if (computer==1){
      std::cout<<"Yo! You won! \n";

    }
    else if (computer==2){
      std::cout<<"I will wait for you always \n";
    }
  }
  else{
    std::cout<<"Invalid \n";
  }


}