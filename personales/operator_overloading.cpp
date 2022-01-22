#include <iostream>

class Position {
	public:
		int x = 10;
		int y = 20;
		Position operator + (Position pos) {
			Position newPos;
			newPos.x = x + pos.x;
			newPos.y = y + pos.y;
			return newPos;
		}

		Position operator - (Position argument) {
			Position auxPos;
			auxPos.x = x - argument.x; // x alone means the object.x (or the class .x?)
			auxPos.y = x - argument.y;
			return auxPos;
		}

		bool operator == (Position argument) {
			if (x == argument.x && y == argument.y) {
				return true;
			}
			return false;
		}
};

std::ostream & operator << (std::ostream& output, Position myPosition) {
	output << "Position in x: " << myPosition.x << "\nPosition in y: " << myPosition.y;
	return output;
}

std::istream & operator >> (std::istream& input, Position & myPosition) {
	//cuando hago el cin tengo que pasar el objeto como referencia
	std::cout << "\nEnter your position in x: "; input >> myPosition.x ;
	std::cout << "\nEnter your position in y: "; input >> myPosition.y;
	return input;
}

int main() {
	Position pos1, pos2;
	Position pos3 = pos1 + pos2;
	std::cout << pos3.x << " " << pos3.y << std::endl;

	if (pos1 == pos2) {
		std::cout << "They are the same :)\n";
	}


	Position myPosition;
	myPosition.x = 30;
	myPosition.y = 10;

	std::cin >> myPosition;
	std::cout << myPosition << std::endl;

	return 0;
}
