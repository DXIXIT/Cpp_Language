#include "Phone.h"

using namespace std;

int main()
{
   const int SIZE = 4;
   
   Phone phoneArr[SIZE];

   ifstream in;
   ofstream out;

   string inputFile = "";
   do
   {
      cout << "Enter the input file name: ";
      cin >> inputFile;
      in.open(inputFile);

   } while (!in);


   string outputFile = "";
   do
   {
      cout << "Enter the output file name: ";
      cin >> outputFile;
      out.open(outputFile);
   } while (!out);
   
   
   processInputFile(in, phoneArr, SIZE);
\
   for (int i = 0; i < SIZE; i++)
   {
      computeRating(phoneArr[i]);
      display(out, phoneArr[i]);
   }

   in.close();
   out.close();

   return 0;
}