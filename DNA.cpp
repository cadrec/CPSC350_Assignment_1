#include <iostream>
#include <fstream>
#include <math.h>
#include <iomanip>
#include <stdlib.h>
#include "DNA.h"

using namespace std;

DNA::DNA() //constructor
{

}

DNA::DNA(string file)
{

  this->file = file;
  dnaStr;
  sum = 0;
  mean = 0;
  variance = 0;
  standardDev = 0;
  amount = 0;
  a = 0;
  c = 0;
  t = 0;
  g = 0;
  aa = 0;
  ac = 0;
  at = 0;
  ag = 0;
  ca = 0;
  cc = 0;
  ct = 0;
  cg = 0;
  ta = 0;
  tc = 0;
  tt = 0;
  tg = 0;
  ga = 0;
  gc = 0;
  gt = 0;
  gg = 0;
  length = 0;

}

DNA::~DNA() //destructor
{

}

int DNA::readFile()//intakes file and reads it, takes not of all info and returns data
{

  ifstream dnaFile(file);//Setting up ifstream for file input

  if(!dnaFile)//invalid file
  {

    cout << "File could not be accessed. Please try again."
    return 0;

  }

  else if(dnaFile.peek() == std::ifstream::traits_type::eof())//checks if file is empty
  {

    cout << "This file is empty."
    return 0;

  }

  else
  {
    while(getline(file, line))
    {
      amount++;
      s = line;
      counter(s);


    }

            //  else
            //  {
            //    cout << "Invalid character." << endl;
            //    return 0;
            //  }
            //  sum++
            //  lastDNA = dnaStr[i];//checks for pairing on next run through
        }
      }
  }
}
  dnaFile.close();
  return 1;
}

void DNA::DNACount
{

  mean = sum / amount;
  float x;

  ifstream dnaFile(file);
  if (dnaFile.is_open())
  {
    while (!myfile.eof())
    {
      getline(dnaFile, line);
      for(double y :line)
      {
          x += (y-mean)*(y-mean);
      }
      dnaFile.close();
      variance = x/(amount-1);
      standardDev = sqrt(variance);
    }
  }
}

int counter(string s)
{

  length = countA(s) + countC(s) + countT(s) + countG(s);
  sum += length;
  a += countA(s);
  c += countC(s);
  t += countT(s);
  g += countG(s);

}

int countA(string s)
{
  size_t aCount = std::count(s.begin(), s.end(), 'a');
}
int countC(string s)
{
  size_t cCount = std::count(s.begin(), s.end(), 'c');
}
int countT(string s)
{
  size_t tCount = std::count(s.begin(), s.end(), 't');
}
int countG(string s)
{
  size_t gCount = std::count(s.begin(), s.end(), 'g');
}





void DNA::DNAPrint()
{

  ofstream print;
  print.open(newFile);

  print << "The sum is: " << sum << endl;
  print << "The mean is: " << fixed << setprecision(2) << mean << endl;
  print << "The variance is: " << fixed << setprecision(2) << variance << endl;
  print << "The standard deviation is: " << fixed << setprecision(2) << standardDev << endl;
  print << "The probability of A: " << fixed << setprecision(2) << (a*100.0)/sum << "%" <<endl;
  print << "The probability of C: " << fixed << setprecision(2) << (c*100.0)/sum << "%" <<endl;
  print << "The probability of T: " << fixed << setprecision(2) << (t*100.0)/sum << "%" <<endl;
  print << "The probability of G: " << fixed << setprecision(2) << (g*100.0)/sum << "%" <<endl;
  print << "The probability of AA: " << fixed << setprecision(2) << (aa*100.0)/sum << "%" <<endl;
  print << "The probability of AC: " << fixed << setprecision(2) << (ac*100.0)/sum << "%" <<endl;
  print << "The probability of AT: " << fixed << setprecision(2) << (at*100.0)/sum << "%" <<endl;
  print << "The probability of AG: " << fixed << setprecision(2) << (ag*100.0)/sum << "%" <<endl;
  print << "The probability of CA: " << fixed << setprecision(2) << (ca*100.0)/sum << "%" <<endl;
  print << "The probability of CC: " << fixed << setprecision(2) << (cc*100.0)/sum << "%" <<endl;
  print << "The probability of CT: " << fixed << setprecision(2) << (ct*100.0)/sum << "%" <<endl;
  print << "The probability of CG: " << fixed << setprecision(2) << (cg*100.0)/sum << "%" <<endl;
  print << "The probability of TA: " << fixed << setprecision(2) << (ta*100.0)/sum << "%" <<endl;
  print << "The probability of TC: " << fixed << setprecision(2) << (tc*100.0)/sum << "%" <<endl;
  print << "The probability of TT: " << fixed << setprecision(2) << (tt*100.0)/sum << "%" <<endl;
  print << "The probability of TG: " << fixed << setprecision(2) << (tg*100.0)/sum << "%" <<endl;
  print << "The probability of GA: " << fixed << setprecision(2) << (ga*100.0)/sum << "%" <<endl;
  print << "The probability of GC: " << fixed << setprecision(2) << (gc*100.0)/sum << "%" <<endl;
  print << "The probability of GT: " << fixed << setprecision(2) << (gt*100.0)/sum << "%" <<endl;
  print << "The probability of GG: " << fixed << setprecision(2) << (gg*100.0)/sum << "%" <<endl;

  print.close();

  DNAtoFile(newFile);
}

void DNA::DNAtoFile(string newFile)
{

  ofstream print;
  print.open(newFile, std::ios_base::app);

  //variance variables
  float vA = 0;
  float vB = 0;
  float vC = 0;
  float vD = 0;
  //probabilities
  float aPct = a / (sum * 100);
  float cPct = c / (sum * 100);
  float tPct = t / (sum * 100);
  float gPct = g / (sum * 100);

  string sequence;
  for(int i = 0; i < 1000; i++)
  {

    vA = (float)rand() / (float)RAND_MAX;
    vB = (float)rand() / (float)RAND_MAX;//sets variables for c
    vC = sqrt((-2 * ln(vA))) * (cos(2+M_PI * vB));//equation given
    vD = standardDev * vC + mean;//equation given

    for(int i = 0; i < vD; i++)
    {

      int prob = (float)rand(0, 100);

      if(prob < aPct)
      {
          sequence += 'A';
      }
      else if(prob < cPct + aPct)
      {
          sequence += 'C';
      }
      else if(prob < tPct + cPct + aPct)
      {
          sequence += 'T';
      }
      else
      {
          sequence += 'G';
      }
    }
    print << sequence <<endl;
    sequence = "";
  }
  print.close();
}










//void DNA::reader(dnaStr)
//{

//  if(dnaStr[i] == 'A')
//  {
//    a++;
//    if(lastDNA == 'A')
//      aa++;
//    else if(lastDNA == 'C')
//      ca++;
//    else if(lastDNA == 'T')
//      ta++;
//    else if(lastDNA == 'G')
//      ga++;
//  }
//  else if(dnaStr[i] == 'C')
//  {
//    c++;
//    if(lastDNA == 'A')
//      ac++;
//    else if(lastDNA == 'C')
//      cc++;
//    else if(lastDNA == 'T')
//      tc++;
//    else if(lastDNA == 'G')
//      gc++;
//  }
//    else if(dnaStr[i] == 'T')
//    {
//      t++;
//      if(lastDNA == 'A')
//        at++;
//      else if(lastDNA == 'C')
//        ct++;
//      else if(lastDNA == 'T')
//        tt++;
//      else if(lastDNA == 'G')
//        gt++;
//    }
//    else if(dnaStr[i] == 'G')
//    {
//      g++;
//      if(lastDNA == 'A')
//        ag++;
//      else if(lastDNA == 'C')
//        cg++;
//      else if(lastDNA == 'T')
//        tg++;
//      else if(lastDNA == 'G')
//        gg++;
//    }
//    else
//    {
//      cout << "Seems like you entered in a character that wasn't A,T,C, or G." << endl;
//      return 0;  //represents failure
//    }

//}
//
