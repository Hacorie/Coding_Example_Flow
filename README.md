Coding Task
==================

Implement a shopping cart using an object oriented design.

Author
-------
* <h4>Nathan Perry</h4>


Environment and Compilation:
-------
* <h4>Written in C++</h4>
* <h4>Written with Vim and Sublime Text.</h4>
* <h4>Compiled with g++ compiler.</h4>
* <h4>Tested on Debian(linux) machine.</h4>
* <h4>Compile Command:</h4>
	* g++ ShoppingCart.cpp Item.cpp Book.cpp CD.cpp Magazine.cpp main.cpp
* <h4>Run Command</h4>
	* ./a.out
* <h4>Recommended Run (pre-defined data by me)</h4>
	* ./a.out < testdata.txt
		* This tests out singlely adding items and print.
	* ./a.out < testdata2.txt
		* This tests multiple adding items at one time and print.
	* ./a.out < testdata3.txt
		* This tests is both above tests plus print to file and summarize and print to screen.

Functionality:
-------
* <h4>Shopping Cart Class that contains at least the following items: </h4>
	* Music CDs
	* Books
	* Magazines
		
* <h4>Features needed:</h4>
	* Add a single item to the cart
	* Add several items to the cart
	* Display the contents of the cart on the computer screen
	* Write the contents of the shopping cart to a file
	* Summarize the contents of the shopping cart
		
* <h4>Simple Console App</h4>

	
Time Estimate
-------
* <h4>Design:</h4>
	* ~30m
* <h4>Programming:</h4>
 	* ~6.0 hours
* <h4>Total</h4>
	* ~6.5 hours

	
Writeup
-------

* <h4>Instructions </h4>
	* "Please write a description of your design, discussing its merits, any assumptions made, the strengths and weaknesses of the design, possible improvements, or anything else you think would help us understand you."

* <h4>Design</h4>
	* Object Oriented Approach with Inheritance.
	* Shopping Cart Class
		* Class designed to manage all operations of a users shopping cart.
		* Has a vector of Items as the actual 'cart'.
	* Item Class
		* Parent class of Book, CD, and Magazine.
		* Contains basic member data that appies to all sub-classes.
		* Contains Accessors and Mutators for above.
		* Contains basic print function which sub-classes will overwrite.
	* Book Class
		* Contains member data only used by books.
		* Accessor and Mutators for book member data.
		* Overwritten print function.
	* CD Class
		* Contains member data only used by cds.
		* Accessor and Mutators for cd member data.
		* Overwritten print function.
	* Magazine Class
		* Contains member data only used by magazines.
		* Accessor and Mutators for magazine member data.
		* Overwritten print function.
	* main File
		* Driver of the program.
		* Contains basic menu navigation.
		* Uses user input via command-line.
		* Wrapper functions that ask for and call class methods for certain tasks.

* <h4>Assumptions / Weaknesses:</h4>
	* The user knows the item and price.
	* The user is willing to enter all this data.
	* Book, CD, and Magazine are the only definite items. All other items I call "unknown".
	* The user will not enter incorrect data. I did not write this for error handling.
		* Checking all the errors necessary for all user input would have taken up over a few hours to test and debug. Thus, since I only had an 8 hour time limit, I chose not to implement most error checking/handling.

* <h4>Strengths of Design</h4>
	* Scalable - by using a vector, data can be dynamically added without having to worry.
	* Portable - I use no platform specific function calls, thus, in theory, this should work fine on a Windows machine or Mac
	* Easy to use - By implementing menus for the user to navigate, I make the program really easy to use.
	* Inheritance for item types so unneccary data/methdos are not duplicated.

* <h4>Improvements</h4>
	* Have an inventory the user can choose from, taking the burden off the user to input a lot of data.
	* If a user does not enter the correct option in the main menu, I just re-call the menu function. This puts another function call on the stack. Would probably be better to be a loop.
	* A lot of functions I have as "bool" returning to check and see if they executed or not. If I would have been using a standard debugger, these could be void functions instead.
	* Add delete methods to remove items from cart.

* <h4>Other Things</h4>
	* This was a really fun project and C++ OOP refresher.


	
