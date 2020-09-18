// C++ AssignmentKMATHE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Code takes system time, divides it by 100 if a quotient retunrs, create conditions that will say its either head or tail



#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;


class Coin
{
private:
	int spinza;
	//int timeOfSpin;
public:
	Coin();
	//void sethead(int sH);
	//void settail(int sT);
	//void settimeOfSpin(int toc);
	//int gettimeOfSpin();

	int spin();
	void displayCoin();

};

Coin::Coin()
{
	spinza = spin();
}

int Coin::spin()
{
    srand(time(0));
    int randNum = rand() % 2;
    return randNum;
}
/* void Coin::sethead(int sH)
{
	head = sH;
}

void Coin::settail(int sT)
{
	tail = sT;
}

void Coin::settimeOfSpin(int toc)
{
	timeOfSpin = toc;
}*/

/*int Coin::gettimeOfSpin()
{
	return timeOfSpin;
}*/





void Coin::displayCoin()
{
	//Coin DisplayCoin;
	//int displayCoinVar = 0;
    cout << "Number generated: " << spinza << endl;
	
	//cout << "Head Value By Constructor:" << head << endl;//Function Fetches This From Constructor Of Class Player
	//cout << "Tail Value By Constructor:" << tail << endl;//Function Fetches This From Constructor Of Class Player
	//cout << "Time By Constructor " << timeOfSpin << endl;//Function Fetches This From Constructor Of Class Player
	//DisplayCoin.spin();
//All of The 3 Variables display correctly
	
}

/*

void Coin::spin()
{
//Then comes this Guy He calls the head var correctly like display function, but does  not fetch the timeOfSpin, and i need it badly
	//int timeSpinned = timeOfSpin;
	cout << "Time By Spin Function" << timeOfSpin << endl;
	cout << "Head By CVon" << head << endl;

}

*/
class Player
{
private:
	string PlayerName;
	int PlayerScore;
	int PlayerCoin;
public:
    Player(string, int, int);
	//Player(string, int, int, int, int);
    void setPS(int);
    void setCoin(int);
    int getPS();
    int getCoin();
	void displayPlayer();
};
void Player::setCoin(int co){
    PlayerCoin = co;
}
int Player::getCoin(){
    return PlayerCoin;
}
void Player::setPS(int ps){
    PlayerScore = ps;
}
int Player::getPS(){
    return PlayerScore;
}

Player::Player(string pn, int ps, int pc) : PlayerName(pn), PlayerScore(ps), PlayerCoin(pc) {

}
/*
Player::Player(string PN, int PS, int setH, int setT, int timeSpin)
{
	PlayerName = PN;
	PlayerScore = PS;
	//PlayerCoin.sethead(setH);
	//PlayerCoin.settail(setT);
	//PlayerCoin.settimeOfSpin(timeSpin);




}
*/


void Player::displayPlayer()
{
	cout << "Player Name: " << PlayerName << endl;
	cout << "Player Score: " << PlayerScore << endl;
    cout << "Player Coin: " << PlayerCoin << endl;
}

int main()
{

	//SYSTEMTIME now;
	//GetLocalTime(&now);
	int numOfPlayers;

    string playerOne, playerTwo;
	//string player1name = "Hello";
	//int playerScore = 0;
	//int setHead = 1;
	//int setTail = 0;
	//int sysTimenow = now.wMilliseconds;
	Coin guess;
    char ans;
    int gu, finalScore, finalSco2;
    









	cout << "Welcome To MCOA012 Coin Game\n\nGuess The Coin OutCome And Obtain 10 Points Each Guess" << endl;

	cout << "Number Of Players\n1. 1 Player \t 2. 2 Players ";
	cin >> numOfPlayers;

	while (numOfPlayers != 1 && numOfPlayers != 2)
	{
		cout << "Incorrect Input, Please Press 1 or 2" << endl;
		cin >> numOfPlayers;
	}
    int x;
    

	switch (numOfPlayers)
	{
	case 1:
		cout << "Enter your name, Player 1" << endl;
		cin >> playerOne;
		//cout << "Ok " << playerOne << " Let us See How Lucky You Are ;)" << endl;
		//Player mudlali(playerTwo, playerScore, setHead, setTail,900);
		//mudlali.displayPlayer();
		//cout << now.wMilliseconds << endl;
        while(x != 0){
        cout << "Guess Heads by 'H' or Tails by 'T'\n";
        cin >> ans;
        if (ans == 'T' || ans == 't'){
            gu = 0;
            
        }else if(ans == 'H' || ans == 'h'){
            gu = 1;
        }else{
            cout << "Please enter a valid input of 'H' or 'T'\n";
            cin >> ans;
        }
        Player info(playerOne, 0, gu);
        if (info.getCoin() == guess.spin()){
            int sc = info.getPS() + 1;
            info.setPS(sc);
            finalScore = sc;
        }
        
        cout << "Score: " << info.getPS() << endl;
        cout << "Do you want to play again?\nPress 1 for 'yes' or 0 for 'no'\n";
        cin >>x;
        if (x != 0 || x != 1){
            cout << "Do you want to play again?\nPress 1 for 'yes' or 0 for 'no'\n";
            cin >> x;
        }
        }
        break;

                
    /* case 2:
        cout << "Player 1, enter your name\n";
        cin>>playerOne;


	}*/
    
    }
    if (numOfPlayers == 1){
        cout << playerOne << " overall score: " << finalScore << endl;
    }else{
        cout << playerOne << " overall score: " << finalScore << endl;
        cout << playerTwo << " overall score: " << finalSco2 << endl;
    }
    
    cout << "Game Over\n";
	system("pause");
	return 0;

}