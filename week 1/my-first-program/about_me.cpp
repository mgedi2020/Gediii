#include<iostream>  // gives us cout& cin and many other
#include <string>
#include <windows.h> // Header for Windows console configuration
using namespace std;  // lets us write cout instead of std::cout


int main(){
SetConsoleOutputCP(CP_UTF8); // Tells Windows terminal to render UTF-8 emojis


//==========================================================
// VARIABLE DECLARATIONS
// These are the storage boxes where we keep users answers
//===========================================================

string name;            // Stores the user,s name(text)
string course;          //  Stores the course(BBIT or BCS)
string hobby;           // Stores the hobby
string reason;          // Stores why they chose the course
string expectation;     //Stores what they expect to learn
string definition;      // Stores their definition of programming
string fav_food;        // Stores their favorite food
string dream_job;       // Stores their dream job



//===========================================
// WELCOME
//========================================


cout <<"==================================="<< endl;
cout << "  WELCOME TO YOUR FIRST PROGRAM! " << endl;
cout <<"==================================="<< endl;
cout <<endl;


//================================================================
// QUESTION 1: NAME
//=============================================================

cout <<"1.What is your name?" ;
getline(cin,name); // Read the full line (including spaces)

while (name.empty())
{
  cout<<"You didn't enter your name!"  ;
  getline(cin,name);/* code */
}



//============================================
// QUESTION 2: COURSE (BBIT or BCS)
//=====================================

cout <<"2.What course are you doing? (BBIT/BCS):";
getline(cin,course);
 
//======================================
// QUESTION 3: HOBBY
//============================

cout <<"3.What is your hobby?";
getline(cin,hobby);

//====================================
// QUESTION 4: REASON FOR CHOOSING THE COURSE
//=============================================

cout<<"4.Why did you choose this course?";
getline(cin,reason);


 //===================================================
 // QUESTION 5: EXPECTATIONS
 //=================================================


cout<<"5,What do you expect to learn in programming?";
getline(cin,expectation);

//==================================================
// QUESTION 6: DEFINITION OF PROGRAMMING
//=================================================

cout<<"6.In you own words,what is programming?";
getline(cin,definition);


//===============================================
// QUESTION 7: FAV FOOD
//===============================================
 cout<<"7.What is your favorite food?";
 getline(cin,fav_food);

 //=======================================
 // QUESTION 8: DREAM JOB
 //=========================================
cout<<"8. What is your dream job?";
getline(cin,dream_job);

//==========================================
// DISPLAY THE SUMMARY
//===============================

cout << endl;
cout<<"==============================="<< endl;

cout<<"   🥳🎊  YOUR PROFILE SUMMARY  🥳🎊    "      << endl;

cout<<"==============================="<< endl;

cout << endl;

cout << "Name:    " << name << endl;
cout  <<"Course📚:    "<< course <<endl;
cout  <<"Hobby:  "<< hobby <<endl;
cout <<"Reason🤔:    "<< reason <<endl;
cout  <<"Expectation❔:    "<< expectation <<endl;
cout  <<"Programming is🖥️:   "<<definition<<endl;
cout  <<"Favorite food🤤:   "<< fav_food<<endl;
cout  <<"Dream Job:   "<< dream_job<<endl;

cout << endl;

cout<<"==============================="<< endl;

cout<<" 🎊Great job,"<<name<<"! You are on your way to becoming a programmer!🎊"<< endl;


cout<<"==============================="<< endl;





return 0;

}
