#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>

using namespace std;

// Maximum number of records
const int MAX_MOVIES = 100;
const int MAX_USERS = 100;
const int MAX_HISTORY = 500;


// Struct Definitions
struct Date {
    int day;
    int month;
    int year;
};


struct Movie {
    string movieID;
    string title;
    string genre;
    string director;
};


struct User {
    int userID;
    string userName;
    string subscriptionType;
};


struct ViewHistory {
    int userID;
    string movieID;
    Date viewDate;
    int rating;
};



// Functions required

void displayDate(Date date) {
	cout << setw(2) << setfill('0') << date.day << "/" << setw(2) << setfill('0') << date.month << "/" << date.year << endl;
}



void displayMovie(Movie movie){
	
	cout<<"Movie ID:"<<movie.movieID<<endl;
	cout<<"Title:"<<movie.title<<endl;
	cout<<"Genre:"<<movie.genre<<endl;
	cout<<"Director:"<<movie.director<<endl;
	
}


void displayUser(User user){
	cout<<"Uset ID:"<<user.userID<<endl;
	cout<<"Username:"<<user.userName<<endl;
	cout<<"Subscription Type:"<<user.subscriptionType<<endl;
}



int readMovies(Movie movies[]){
	ifstream inFile;
	inFile.open("Movies.txt");
	    
    int count = 0;
    inFile >> movies[count].movieID;
    
    while(movies[count].movieID != "END"){
    	inFile >> movies[count].title;
		inFile >> movies[count].genre;
		inFile >> movies[count].director;
		
		count++;
		
		inFile >> movies[count].movieID;
	}
    inFile.close();
	return count;
}


int readUsers(User users[]){
	ifstream inFile;
	inFile.open("Users.txt");
	
	int count = 0;
	inFile >> users[count].userID;
	
	while(users[count].userID != 0){
    	inFile >> users[count].userName;
		inFile >> users[count].subscriptionType;
		
		count++;
		
		inFile >> users[count].userID;
	}
	inFile.close();
    return count;
}


int readViewHistory(ViewHistory history[]){
	ifstream inFile;
	inFile.open("ViewHistory.txt");
	
	int count = 0;
	char slash = '/';
	inFile >> history[count].userID;
	
	while(history[count].userID != 0){
    	inFile >> history[count].movieID;
		inFile >> history[count].viewDate.day >> slash >> history[count].viewDate.month >> slash >> history[count].viewDate.year;
		inFile >> history[count].rating;
		
		count++;
		
		inFile >> history[count].userID;
	}
	inFile.close();
    return count;
	
    return 0; //delete after writing code
}


int findMovie(Movie movies[], int numMovies, string movieID){
	
	
	
	
	
    return 0; //delete after writing code
}



int findUser(User users[], int numUsers, string userName){
    return 0; //delete after writing code
}



bool findMovieView(ViewHistory history[], int numViews, string movieID){
    return true; //delete after writing code
}



int totalMovieViews(ViewHistory history[], int numViews, string movieID) {           
    return 0; //delete after writing code 
}



void displayUserHistory(ViewHistory history[], int numViews, int userID){

}



void displayMostWatchedMovie(ViewHistory history[], int numViews, Movie movies[], int numMovies){

}



void displayMoviesGenre (Movie movies[], int numMovies, string genre) {

}



void displayMovieRatings(ViewHistory history[], int numViews, string movieID){

}



void displayUserRatings(ViewHistory history[], int numViews, int userID){

}



int main() {
	
	Movie movies[MAX_MOVIES]; // Array to store movies
	User users[MAX_USERS]; // Array used to store users
	ViewHistory history[MAX_HISTORY]; // Array used to store the history
	 
	int Moviecount = readMovies(movies);
	int Usercount = readUsers(users);
	int Histcount = readViewHistory(history);
	
	cout << "Number of movies read = " << Moviecount;
	cout << endl;
	cout << "Number of users = " << Usercount;
	cout << endl;
	cout << "Number of movies watched = " << Histcount;
	
	return 0;
}

