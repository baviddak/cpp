// This exercise and the next few require you to design and implement a Book 
// class, such as you can imagine as part of software for a library. Class Book
// should have members for the ISBN, title, author, and copyright date.

#include "Book.h"

int main() {
	string hey_there = "bingo bango";
	Book myBook{"1234", "Thomas", hey_there, false};

	myBook.print();

	myBook.check_out();

	myBook.print();

	myBook.check_out();

	myBook.print();

	return 0;
}
