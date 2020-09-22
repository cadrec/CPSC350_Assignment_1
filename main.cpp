#include <iostream>
#include "DNA.h"
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{

  if(argc > 1)
  {

    bool cont = true; //allows for programs to continue running, when false, program will exit.

    DNA newDNA = DNA(argv[1]);
    int user_input;//for user input

    do {
      int check = newDNA.readFile();
      if(check == 0)
      {
        cout << "Error" << endl;
        return 0;
      }
      newDNA.DNACount();
      newDNA.DNAPrint("DNA.txt");



    } while(true);

    while(true)
    {

      cout << "Would you like to use a different list? Type '1' to continue running. Type '2' to exit." << endl;
      cin >> user_input;
      if(user_input == 1)
      {
        break;
      }
      else if(user_input == 2)
      {

        cout << "Program is ending." << endl;
        return 0;

      }
      else
      {

        cout << "Please type '1' or '2'" << endl;

      }


    }
    string file = "";
    cout << "Please type in the new file name." << endl;
    cin >> file;

    newDNA = DNA(file);

  }

}
