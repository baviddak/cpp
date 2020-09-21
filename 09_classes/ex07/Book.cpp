#include "Book.h"
#include <iostream>

// Constructors 

Book::Book()
	:genre{Genre::adult}
{
	// empty constructor
	// default values for the types are fine
}

Book::Book(const string& isbn, const string& tle, const string& auth, bool ch_out, Genre gen)
	:ISBN{isbn},title{tle},author{auth},checked_out{ch_out},genre{gen}
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

// Conver enums into strings
const string *Book::genre_string(Genre gen){
	string *temp = new string{};
	switch(gen){
		case Genre::horror:
			temp = "Horror";
			break;
		case Genre::comedy:
			temp = "Comedy";
			break;
		case Genre::nonfiction:
			temp = "Non-fiction";
			break;
		case Genre::adventure:
			temp = "Adventure";
			break;
		case Genre::romance:
			temp = "Romance";
			break;
		case Genre::adult:
			temp = "Adult";
			break;
		default:
			temp = "That is not a genre!";
			break;
	}

	return temp;
}

const string Book::status_string(bool co){ 
	switch(co) {
		case true:
			return "Checked out";
			break;
		case false:
			return "Checked in";
			break;
		default:
			return "No data";
			break;
	}
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
	cout << "Genre: " << genre_string(genre) << "\n";
	cout << "Check out status: " << status_string(checked_out) << "\n";
}

