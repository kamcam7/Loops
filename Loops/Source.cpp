#include<iostream>
#include<string>
using namespace std;

int main()
{
	
   int myarr[] = { 1,2,3,4,5,6,7,8,9};

   for (int i : myarr)
   {
	   cout << " ["<<i<<"] ";
   }
 
   size_t arrLen = sizeof myarr / sizeof myarr[0];

   int howmanyfinds = 0;

   for (int i = 0; i < arrLen; i++)
   {
	   if (myarr[i] % 2 == 0)
	   {
	   cout << myarr[i] << endl;
	   howmanyfinds++;
	   }
   }
   cout << "I found " << howmanyfinds << " even numbers in my array." << endl;

   for (int i = 0; i < 26; i++)
   {
	   cout << "Letter: " << char(i + 65) << endl;
   }
   

   
   bool keepcoding = true;

   while (keepcoding == true)
   {
	   cout << "...continues to code.\n";
		   string userinput;
		   cout << "Do you want to keep coding?" << endl;
		   getline(cin, userinput);

		   if (userinput == "N" || userinput == "NO" || userinput == "no")
		   {
			   keepcoding = false;
		   }
   }


	int alphanum = 64;

	do {
		alphanum++;

		cout << "My letter is: " << char(alphanum) << endl;
	} while (alphanum < 90);
}