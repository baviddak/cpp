#ifndef BOOK_H_
#define BOOK_H_

#include <string>
using namespace std;

// Consider using the Date class in the book for the copywright date
// These get and set functions should really have been in-lined - woops!


enum class Genre {
	horror=1, comedy, nonfiction, adventure, romance, adult
};

class Book {
	private:
		string ISBN;
		string title;
		string author;
		bool checked_out;
		Genre genre;
		// Date copywright_date;

	public:
	        // Constructors	
		Book();
		Book(const string&, const string&, const string&, bool, Genre);

		// Get members 
		const string& get_ISBN() const;
		const string& get_title() const;
		const string& get_author() const;

		bool is_checked_out() const;	// return a copy of the member variable
		Genre get_genre() const;	// return a copy of the member rval

		// Set members
		void set_ISBN(const string&);
		void set_author(const string&);
		void set_title(const string&);
		void set_genre(Genre);

		void check_out();
		void check_in();

		// Convert enums into strings
		// These can be static 
		static const string genre_string(Genre);
		static const string status_string(bool);

		// Print data
		void print() const;

};


#endif // BOOK_H_

