// Make a My_window that's a bit like Simple_window except that it has two 
// buttons, next and quit.

#include "My_window.h"

int main(){
	// our graphics facilities are in Graph_lib
	using namespace Graph_lib;

	Point tl{100,100}; // to become top left corner of window
	My_window win{tl, 600, 600, "My_window Test"};
	
	win.wait_for_button();
	return 0;
}