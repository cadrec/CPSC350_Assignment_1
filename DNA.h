#include <iostream>
using namespace std;

class DNA
{

public:

  DNA(string file);
  DNA();
  ~DNA();
  int readFile();
  int counter(string s);
  int countA(string s)
  void DNAtoFile(string filename);
  void DNACount();
  void DNAPrint(string filename);

private:
  string s;
  string file;

  float mean;
  float variance;
  float standardDev;

  int amount;
  int sum;

  int length;
  int a;
  int c;
  int t;
  int g;
  int aa;
  int ac;
  int at;
  int ag;
  int ca;
  int cc;
  int ct;
  int cg;
  int ta;
  int tc;
  int tt;
  int tg;
  int ga;
  int gc;
  int gt;
  int gg;

};
//
