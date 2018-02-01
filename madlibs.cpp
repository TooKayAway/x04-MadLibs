//Authors: 
#include <iostream>
#include <string>

int main()
{
  std::string name;
  std::string noun;
  std::string verb;
  int time;
  std::cout << "Welcome to MadLibs!" << std::endl;
  std::cout << "Give me a Name" << std::endl;
  std::cin >> name;
  std::cout << "How about a Noun" << std::endl;
  std::cin >> noun;
  std::cout << "a past-tense verb?" << std::endl;
  std::cin >> verb;
  std::cout << "Finally, a number" << std::endl;
  std::cin >> time;
  std::cout << "One day, " << name << " was walking down the street, on a peaceful\n Sunday at " << time << " am." << std::endl;
  std::cout << "They were stopped by a/an " << noun << std::endl;
  std::cout << "The " << noun << " said, 'Stop! You have violated the law!' and " << verb << std::endl;
  return 0;
}
