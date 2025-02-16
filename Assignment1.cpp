#include <iostream>
#include <fstream>
#include <string>

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

}



void displayMovie(Movie movie){

}



void displayUser(User user){

}



int readMovies(Movie movies[]){
    ifstream InFile;
    string movID, movTitle, movGen, movDir;
    int i;

    InFile.open("Movies.txt");

    if (!InFile.is_open()) {
        cout << "Input file, Movies.txt, could not be opened. Aborting ..." << endl;
        exit(1);
    }
 i=0;
    InFile >> movID;							
	
    while (movID != "END") {				
     InFile >> movTitle;
     InFile >> movGen;
     InFile >> movDir;	
     movies[i].movieID = movID;				
     movies[i].title = movTitle;		
     movies[i].genre = movGen;		
     movies[i].director = movDir;					
     i = i + 1;							
     InFile >> movID;			
 }	

 InFile.close();		
    

    return 0; //delete after writing code
}



int readUsers(User users[]){
    ifstream InFile;
    int usersID;
    string usersName, usersSubType;
    int i;

    InFile.open("Users.txt");

    if (!InFile.is_open()) {
        cout << "Input file, Users.txt, could not be opened. Aborting ..." << endl;
        exit(1);
    }
 i=0;
    InFile >> usersID;							
	
    while (usersID != 0) {				
     InFile >> usersName;
     InFile >> usersSubType;
     users[i].userID = usersID;				
     users[i].userName = usersName;		
    users[i].subscriptionType = usersSubType;		
    					
     i = i + 1;							
     InFile >> usersID;			
 }	

 InFile.close();		


    return 0; //delete after writing code
}



int readViewHistory(ViewHistory history[]){
    ifstream InFile;
    int usersID2, i;
    string moviesID2;
    Date viewDate;
    int ratings;

    InFile.open("ViewHistory.txt");

    if (!InFile.is_open()) {
        cout << "Input file, ViewHistory.txt, could not be opened. Aborting ..." << endl;
        exit(1);
    }
 i=0;
    InFile >> usersID2;							
    while (usersID2 != 0) {				
     InFile >> moviesID2;
     InFile >> viewDate;
     InFile >> ratings;
     history[i].userID = usersID2;				
     history[i].movieID = moviesID2;
     history[i].viewDate = viewDate;		
    history[i].rating = ratings;		
    					
     i = i + 1;							
     InFile >> usersID2;			
 }	

 InFile.close();		

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
    return 0;
}
