//*******************************************************************
// TriangleChecker.cpp               Author: Caleb Shimomura
// A C++ program to check if 3 lengths can compose a triangle.
//
//*******************************************************************

#include <iostream>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   //get values
   
   cout << "Enter the three triangle side lengths. \n" ;
   cout << "First side length: ";
   cin >> num1;
   cout << "Second side length: ";
   cin >> num2;
   cout << "Third side length: ";
   cin >> num3;
   
   //if 1 is bigger than 2 and 3, add 2 and 3 together and compare to 1
   //if 2 is biggest, add 1 and 3 together and compare to 2
   //if 3 is biggest, add 1 and 2 together and compare to 1
   if (num1 > num2) {
      if (num1 > num3) {
         if (num2 + num3 > num1) {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " compose a valid triangle.";
         } else {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " do not compose a valid triangle.";
         }
      } else {
         if (num2 + num1 > num3) {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " compose a valid triangle.";
         } else {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " do not compose a valid triangle.";
         }
      }
   } else if (num2 > num3) {
      if (num1 + num3 > num2) {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " compose a valid triangle.";
      } else {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " do not compose a valid triangle.";      }
   } else {
      if (num2 + num1 > num3) {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " compose a valid triangle.";
      } else {
            cout << "The side lengths " << num1 << " and " << num2 << " and " << num3 << " do not compose a valid triangle.";
      }
   }

   return 0;
}
