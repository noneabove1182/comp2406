using namespace std;
#include "Student.h"

Student::Student(string fn, string ln, string nu, string em) : firstName(fn), lastName(ln), number(nu),                                                          email(em)
{
  cout<<"Student constructor" << endl;
}

Student::~Student()
{
  cout<<"Student deconstructor\n";
}
    

string Student::getFirstName() {return firstName;}

string Student::getLastName() {return lastName;}

string Student::getNum() {return number;}

string Student::getEmail() {return email;}

void Student::setFirstName(string fn) {firstName = fn;}

void Student::setLastName(string ln) {lastName = ln;}

void Student::setNum(string num) {number = num;}

void Student::setEmail(string em) {email = em;}

string Student::getName() { return firstName + " " + lastName; }


bool Student::canSetFirstName(string fn){

  if (fn.size() == 0) {
    return false;
  }

  string letters = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm-";
  if(fn.find_first_not_of(letters) != string::npos){
    return false;
  }
  
  return true;

}

bool Student::canSetLastName(string ln){

  if(ln.size() == 0){
    return false;
  }

  string letters = "QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm-";
  if(ln.find_first_not_of(letters) != string::npos){
    return false;
  }
  
  return true;

}

bool Student::canSetStudentNumber(string num){

  string numbers = "1234567890";

  if(num.size() != 9){
    return false;
  }

  if(num.find_first_not_of(numbers) != string::npos){
    return false;
  }

  return true;

}

bool Student::canSetEmail(string e){

  if(e.size() == 0){
    return false;
  }

  string email = "@cmail.carleton.ca";

  if(e.find(email) == string::npos){
    return false;
  }

  if(e.find_first_of(" ") != string::npos){
    return false;
  }

  return true;

}








  
