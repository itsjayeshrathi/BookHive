#pragma once
class Member {
public: 
private:
	string name; 
	string address; 
	int mobileNumber; 
	int age;
	int libId;
	int borrowedBooks; 
public: 
	//constructors
	Member() {
		name = "NA"; 
		address = "NA"; 
		mobileNumber = 0; 
		age = 0; 
		libId = -1; 
		borrowedBooks = 0; 
	}
	Member(string name, string address, int mobileNumber, int age, int libId, int borrowedBooks) {
		this->name = name; 
		this->address = address; 
		this->mobileNumber = mobileNumber; 
		this->age = age; 
		this->libId = libId; 
		this->borrowedBooks = borrowedBooks; 
	}
	//getters
	};