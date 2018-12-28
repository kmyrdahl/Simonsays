#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore = 0;
   int i = 0;

   userScore = 0;
   simonPattern = "RRGBRYYBGY";
   userPattern  = "RRGBBRYBGY";

   for (i = 0; i <= 10; i++) {
if (simonPattern[i] == userPattern[i]) {
userScore = userScore + 1;
} 
else {
break;
}
}

   cout << "userScore: " << userScore << endl;

   return 0;
}
