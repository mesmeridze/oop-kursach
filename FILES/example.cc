#include <iostream>     // std::cin, std::cout

using namespace std;

int main () {
  char name[256], title[256];

  cout << "Please, enter your name: ";
  cin.getline (name,256);

  cout << "Please, enter your favourite movie: ";
  cin.getline (title,256);

  cout << name << "'s favourite movie is " << title;

  return 0;
}

