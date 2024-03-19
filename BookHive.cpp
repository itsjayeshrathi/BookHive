#include<iostream>
#include "LIbrary.h"
int main() {
	Book b1("Harry Potter", { "J.K.Rowling" }, { "Fiction" }, "473874837", 1994, true); 
	b1.displayDetails(); 
	return 0; 
}