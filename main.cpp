#include <iostream>


#include "funcs.h"

int main()
{
  isDivisibleBy(35,17);
  int lTP = largestTwinPrime(14, 16);
  std::cout << lTP << "\n";
  int nTP = nextTwinPrime(19);
  std::cout << nTP << "\n";
  std::cout << nextPrime(61);
  std::cout << "\n";
  std::cout << nextPrime(13);
  std::cout << "\n";
  std::cout << nextPrime(-20);
  std::cout << "\n";
  std::cout << nextPrime(0);
  std::cout << "\n";
  std::cout << nextPrime(787);
  std::cout << "\n";
  std::cout << nextPrime(3);
  std::cout << "\n";
  std::cout << countPrimes(2,23);
  std::cout << "\n";
  std::cout << countPrimes(0,5);
  std::cout << "\n";
  std::cout << nextTwinPrime(10);
  return 0;
}
