Authors: 
  Jon Sulcer and Adam Chisolm

Files:
	main.cpp - The main driver for the associative array program. 
	associative.h - The header file for the associative array. 
	associative.cpp - The implementation file for an associative array. 
	node.h - The header file for a Node object. 
	node.cpp - The implementation of a Node. 
  
Description:
  A custom implementation of an associative array class with a custom binary tree. Each
  tree stores a key (string) and its corresponding data (int).
  
How to Use:
  Run the program, uses very basic menu. User may choose to add a word,
  delete a word, import from a file, export to a file, find a word,
	find the min and max words used (some functionality problem explained),
	and print the tree (not very neat). Finally, the user may exit.

Known Bugs/Problems:
  Not enough time as of now for operator[] overloading,
  The functions on a basic level work, but as far as testing goes,
	It hasn't been throughly tested so there are some problems. Sometimes
	punctuation is added to words in import, and case senistive lettering
	is ignored, affecting min/max functions as well as displaying incorrect
	numbers of words in print. We haven't had a lot of time to work on the menu, so it
	is very basic (doesn't use command line, questioning instead).
	
Things learned:
  Recieved a lot of experience with GitHub, using it for the first time slowed us
	down some trying to learn how to use it, but overall was worth it as it is more
	useful than trying to constantly figure out what we have for code exactly.
