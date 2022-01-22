#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void playGame() {
	vector<int> guesses;

	int random = rand() % 10;
	cout << random << endl;
	cout << "Adivina el numero: ";
	while (true) {

		int guess;
		cin >> guess;
		guesses.push_back(guess);
		if (guess == random) {
			cout << "you win!\n";
			break;
		}
		else
			cout <<"no!\n";
	}
	cout << "cantidad de intentos: " << guesses.size() <<"\n";
	cout << "tus intentos:\t";
	for (int x: guesses) {
		cout << x <<"  ";
	}	cout <<"\n";

	ifstream fileInput("best_score.txt");

	int bestScore;
	fileInput >> bestScore;

	ofstream fileOutput("best_score.txt");
	if (guesses.size() < bestScore) {
		fileOutput << guesses.size(); 
		cout << "a";
	}

	else {
		fileOutput << bestScore;
		cout << "b";
	}
}

int main() {
	playGame();
}

