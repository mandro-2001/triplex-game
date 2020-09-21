#include<iostream>
#include<ctime>
using namespace std;
void story_mode()
{
    cout<<"hola humans,you got caught in our hemavata galaxy\n";
    cout<<"no one can escape from our galaxy\n";
    cout<<"And u humans,have oly one way to escape from here is to win  all the level against our boss\n";
    cout<<".......discussion amoung the people.......\n";
    cout<<"some wishpering sounds,....if anyone wins the game then we all can be free..\n";
    cout<<"their comes the voice of a small boy,hi this is schinchan i can defeat the boss by winning this game ...\n";
    cout<<"everyone are avaiting,..as this small kid can win \n";
    cout<<"let wait and watch \n";
}
void rules_and_clue_To_Start(int sum,int product)
{
    cout<<"the sum of the triplex number is : "<<sum;
    cout<<endl;
    cout<<"the product of the triplex number is : "<<product;
    cout<<endl;
    cout<<"to exit use shortcut(ctrl+c)\n";
    cout<<endl;
    cout<<"Game starts\n";
    cout<<"Enter three numbers to find the triplex number ,so that u let ur ppl free\n";
}
bool play_game(int lvl_difficulty)
{
    cout<<"Level :"<<lvl_difficulty<<endl;
    int codeA = rand() %lvl_difficulty + lvl_difficulty;
    int codeB = rand() %lvl_difficulty + lvl_difficulty;
    int codeC = rand() %lvl_difficulty + lvl_difficulty;
    int sum=codeA+codeB+codeC;
    int product=codeA*codeB*codeC;
    rules_and_clue_To_Start(sum,product);
    int guesscodeA;
    int guesscodeB;
    int guesscodeC;
    cin>>guesscodeA>>guesscodeB>>guesscodeC;
    int guesssum=guesscodeA+guesscodeB+guesscodeC;
    int guessproduct=guesscodeA*guesscodeB*guesscodeC;
    if(guesssum==sum  &&  guessproduct == product)
    {
        cout<<"u have defeted the boss and ,u have entered the next lvl \n";
        return true;
    }
    else
    {
        cout<<"oh...wooh,ur ppl have been caught in this galaxy and we will taste diff diff humans,ah aha ah ah\n";
        return false;
    }
}

int main()
{
srand (time(NULL));
    int lvl_difficulty=1;
    int max_difficulty=5;
    story_mode();
    while(lvl_difficulty<=max_difficulty)
    {
        bool lvl_up=play_game(lvl_difficulty);
        cin.clear();
        cin.ignore();
        if(lvl_up)
        lvl_difficulty++;
    }
    cout<<"oh gosh , boss has been defeated ....haak..haak....haak \n  ";
    cout<<"u humans are set free get into this teleport to reach  ur planet \n"; 
    return 0;
}
