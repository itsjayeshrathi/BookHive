#pragma once
#include<iostream>
#include<vector>
#include<string>
using namespace std; 
class Book{
public:
	//Methods
	void displayDetails() const{
		cout << "Title of the book is: " << title << endl; 
		cout << "Authors of the book is: "; 
		for (int i = 0; i < authors.size(); i++) {
			cout << authors[i] << " "; 
		}
		cout << endl; 
		cout << "Generes of the book is: "; 
		for (int i = 0; i < generes.size(); i++) {
			cout << generes[i] << " ";
		}cout << endl; 
		cout << "ISBN of the book is: " << ISBN << endl; 
		cout << "Publication Year of the book is: " << publicationYear<<endl; 
		cout << "Book availabiliy: "; 
		if (isAvailable) { cout << "Yes" << endl; }
		else { cout << "No" << endl;  }
	}
	void addAuthor(string const& newAuthor) {
		authors.push_back(newAuthor); 
	}
	void removeAuthor(string const& remAuthor) {

	}
	void addGenere(string const& newGenere) {
		generes.push_back(newGenere); 
	}
	void removeGenre(string const& remGenre) {

	}
private:
	string title;
	vector<string>authors;
	vector<string>generes;
	string ISBN;
	int publicationYear;
	bool isAvailable;
public: 
	Book() {
		title = "NA";
		authors = {};
		generes = {};
		ISBN = "NA";
		publicationYear = 0;
		isAvailable = false;
	}
	Book(string title, vector<string>authors, vector<string>generes, string ISBN, int publicationYear, bool isAvailable) {
		this->title = title;
		this->authors = authors;
		this->generes = generes;
		this->ISBN = ISBN;
		this->publicationYear = publicationYear;
		this->isAvailable = isAvailable;
	}
	//getters
	string getTitle() const {
		return title;
	}
	vector<string> getAuthors() const {
		return authors;
	}
	vector<string> getGeneres() const {
		return generes;
	}
	string getISBN() const {
		return ISBN;
	}
	int getPublicationYear() const {
		return publicationYear;
	}
	bool getAvailabilty() const {
		return isAvailable;
	}
	//setters 
	void setTitle(const string& newTitle) {
		title = newTitle;
	}
	void setAuthors(const vector<string>& newAuthors) {
		authors = newAuthors;
	}
	void setGeneres(const vector<string>& newGeneres) {
		generes = newGeneres;
	}
	void setISBN(const string& newISBN) {
		ISBN = newISBN;
	}
	void setPublicatinYear(int newPublicationYear) {
		publicationYear = newPublicationYear;
	}
	void setAvailabiliy(bool newAvailability) {
		isAvailable = newAvailability;
	}
};