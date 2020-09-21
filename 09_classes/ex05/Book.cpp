#include "Book.h"
#include <iostream>

// Constructors 

Book::Book() {
	// empty constructor
	// default values for the types are fine
}

Book::Book(const string& isbn, const string& tle, const string& auth, bool ch_out)
	:ISBN{isbn},title{tle},author{auth},checked_out{ch_out}
{
	// empty constructor
}

// Get members

const string& Book::get_ISBN() const {
	return ISBN;
}

const string& Book::get_title() const {
	return title;
}

const string& Book::get_author() const {
	return author;
}

bool Book::is_checked_out() const {
	return checked_out;
}

// Set members

void Book::set_ISBN(const string& isbn) {
	ISBN = isbn;
}

void Book::set_author(const string& auth) {
	author = auth;
}

void Book::set_title(const string& tle) { 
	title = tle;
}

void Book::check_out() {

	if(checked_out) {
		cout << "This title is already checked out!\n";
		return;
	}else{
		checked_out = true;
	}
}

void Book::check_in() {

	if(checked_out){
		checked_out = false;
	}else{
		cout << "This title is already checked in!\n";
		return;
	}
}

void Book::print() const {
	cout << "ISBN: " << ISBN << "\n";
	cout << "Title: " << title << "\n";
	cout << "Author: " << author << "\n";
	cout << "Check out status: " << checked_out << "\n";
}

