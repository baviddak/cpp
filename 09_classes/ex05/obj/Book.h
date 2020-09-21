#ifndef BOOK_H_
#define BOOK_H_

#include <string>
using namespace std;

// Consider using the Date class in the book for the copywright date
// These get and set functions should really have been in-lined - woops!

class Book {
	private:
		string ISBN;
		string title;
		string author;
		bool checked_out;
		// Date copywright_date;

	public:
	        // Constructors	
		Book();
		Book(const string&, const string&, const string&, bool);

		// Get members 
		const string& get_ISBN() const;
		const string& get_title() const;
		const string& get_author() const;

		bool is_checked_out() const;

		// Set members
		void set_ISBN(const string&);
		void set_author(const string&);
		void set_title(const string&);

		void check_out();
		void check_in();

		// Print data
		void print() const;

};


#endif // BOOK_H_

