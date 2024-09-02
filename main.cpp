#include <iostream>
// Here's our main function
int main(int argc, char *const argv[])
{
  bool quit = false;
  std::string type = "";
  std::string name = "";
  int choice;
  while (quit)
  {
    std::cout << "MAIN MENU" << std::endl;
    std::cout << "---------------------" << std::endl;
    std::cout << "1) Enter pet type" << std::endl;
    std::cout << "2) Enter pet name" << std::endl;
    std::cout << "3) Introduce your pet!" << std::endl;
    std::cout << "4) Quit" << std::endl;
    std::cout << "Enter Choice:> ";
    std::cin >> choice;
    switch (choice)
    {
    case 1:
      std::cout << "Enter Pet Type:> ";
      std::cin >> type;
      break;
    case 2:
      std::cout << "Enter Pet Name:> ";
      std::cin >> name;
      break;
    case 3:
      if (name.length() == 0 || type.length() == 0)
      {
        std::cout << "Can't introduce pet!" << std::endl;
      }
      else
      {
        std::cout << "My " << type << "'s name is" << name << std::endl;
      }
    case 4:
      std::cout << "All done!" << std::endl;
      quit = false;
      break;
    default:
      std::cout << "Unknown command: " << choice << std::endl;
      break;
    }
  }
  return 0;
}
