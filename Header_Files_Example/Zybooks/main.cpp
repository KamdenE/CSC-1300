#include <string>
#include <iostream>
#include "Store.h"
using namespace std;

int main() {
   Store ourPlace;
   string currName;

   cin >> currName;
   ourPlace.SetName(currName);

   ourPlace.ReadAllProducts();
   ourPlace.PrintSale(1);

   return 0;
}