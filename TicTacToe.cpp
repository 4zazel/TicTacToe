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

int main() {

	srand(time(NULL));

	bool quit = false;

	cout << "Welcome! To start, type the cell number (1 through 9)\n";

	while (!quit)
	{

		DrawBoard();
		PlayerTurn();
		DrawBoard();
		EnemyTurn();
	}

	return 0;
}

void DrawBoard() {
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

}