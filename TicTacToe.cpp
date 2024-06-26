#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void DrawBoard();
void PlayerTurn();
void CheckWin();
void EnemyTurn();

char placement[9] = { ' ',' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
bool quit = false;

int main() {

	srand(time(NULL));

	cout << "Welcome! To start, type the cell number (1 through 9)\n";

	while (!quit)
	{

		DrawBoard();
		PlayerTurn();
		DrawBoard();
		EnemyTurn();
		CheckWin();
	}

	return 0;
}

void DrawBoard() {
	//Draw the board
	cout << " " << placement[0] <<" | " << placement[1] << " | " << placement[2] << " \n";
	cout << "---|---|---\n";
	cout << " " << placement[3] << " | " << placement[4] << " | " << placement[5] << " \n";
	cout << "---|---|---\n";
	cout << " " << placement[6] << " | " << placement[7] << " | " << placement[8] << " \n";
	}

void PlayerTurn() {
	cout << "Your turn!\n";
	int nr = 0;
	bool valid = false;
	//Check if the spot you want to pick is already taken or check if the input is valid
	while (!valid)
	{
		cin >> nr;
		if (cin.fail() || nr < 1 || nr > 9)
		{
			cout << "Enter a valid number!\n";
		}
		else if (placement[nr-1] != ' ')
		{
			cout << "Space is already taken!\n";
		}
		else
		{
			valid = true;
		}
	}
	placement[nr - 1] = 'X';
	system("CLS");
}

void EnemyTurn() {
	int nr = 0;
	bool available = false;
	//Check if spot is taken
	while (!available)
	{
		nr = (rand() % 9);
		if (placement[nr] == ' ')
		{
			placement[nr] = '0';
			available = true;
		}
	}
	system("CLS");
	cout << "Enemy turn!\n";
}

void CheckWin() {
	//Fix
	if (placement[0] == 'X' && placement[1] == 'X' && placement[2] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[3] == 'X' && placement[4] == 'X' && placement[5] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[6] == 'X' && placement[7] == 'X' && placement[8] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[0] == 'X' && placement[4] == 'X' && placement[8] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[2] == 'X' && placement[4] == 'X' && placement[6] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[2] == 'X' && placement[5] == 'X' && placement[8] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[1] == 'X' && placement[4] == 'X' && placement[7] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}
	else if (placement[0] == 'X' && placement[3] == 'X' && placement[6] == 'X')
	{
		system("CLS");
		cout << "Player wins!\n";
		quit = true;
	}

	if (placement[0] == '0' && placement[1] == '0' && placement[2] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[3] == '0' && placement[4] == '0' && placement[5] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[6] == '0' && placement[7] == '0' && placement[8] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[0] == '0' && placement[4] == '0' && placement[8] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[2] == '0' && placement[4] == '0' && placement[6] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[2] == '0' && placement[5] == '0' && placement[8] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[1] == '0' && placement[4] == '0' && placement[7] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
	else if (placement[0] == '0' && placement[3] == '0' && placement[6] == '0')
	{
		system("CLS");
		cout << "Computer wins!\n";
		quit = true;
	}
}