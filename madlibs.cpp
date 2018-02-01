//Authors: Abdulla Aldhaheri
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	int time;
	int age;
	char character;

cout<< "What is the Birthday Boy name?\n";
cin>> name;

cout<< "What time the party starts?\n";
cin>> time;

cout<< "What age is he turning?\n";
cin>> age;

cout<< "Give me a character used in the story?\n";
cin>> character;

std::cout<< "Last Friday, my friends and I wanted to surprise our friend "<<name<<" for his "<<age<<"TH birthday, Aziz wanted to do the party at "<<time<<":00PM because he had to leave town early. So he asked us: can we start the the party at 9:00PM "<<character<<" and we said yes.";

  return 0;
}
