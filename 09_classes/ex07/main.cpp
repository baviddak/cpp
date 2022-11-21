// Create an enumerated type of the Book class called Genre. Have the types be
// fiction, nonfiction, periodical, biography, and children.

#include "Book.h"

int main() {
	// do something
	string hey_there = "bingo bango";
	Book myBook{"1234", "Thomas", hey_there, false};

	myBook.print();

	myBook.check_out();

	myBook.print();

	myBook.check_out();

	myBook.print();

	return 0;
}