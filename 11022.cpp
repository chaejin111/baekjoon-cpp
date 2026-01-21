#include <iostream>
#include <vector>
using namespace std;

int main()
{
   int T,a,b,i;
   i = 1;
   cin >> T;
   while (true) {
	   if (i > T) {
		   break;
	   }
	   cin >> a >> b;
	   cout << "Case #" << i << ": " << a << " + " << b << " = " <<  a + b << "\n";
	   i++; 
   }
   return 0;
}