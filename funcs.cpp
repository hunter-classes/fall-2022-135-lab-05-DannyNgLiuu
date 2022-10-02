#include <iostream>
#include "funcs.h"

// add functions here

//task A

bool isDivisibleBy(int n, int d) {
return (n % d) == 0;
}

//task B

bool isPrime(int n) {
    if(n == 2 || n == 3 || n == 5) {
        return true;
    } else if(((n-1) % 6) == 0 || ((n+1) % 6) == 0) {
        return true;
    } else {
        return false;
    }
}

//task C

int nextPrime(int n) {
  int counter = 0;
  int nextPri = n + 2;
  int spacer = 0;
  bool flick = true;
  if(n * -1 == abs(n)) {
    return 2;
  }
  if(n == 0) {
    return 2;
  }
  if(n % 2 == 0) {
    n--;
    nextPri = n + 2;
  } else if(n % 3 == 0) {
    nextPri = n + 2;
    }
  while(flick) {
    if(std::to_string(nextPri).length() == 1) {
      spacer = 2;
    } else {
      spacer = 1;
    }
    for(int i = 1; i < 10; i++) {
      if(nextPri % i == 0) {
        counter++;
      }
      if(counter > spacer) {
        nextPri += 2;
        counter = 0;
        break;
      }
    }
    if(counter == spacer) {
      flick = false;
      return nextPri;
    }
  }
  return 0;
}

//task D

int countPrimes(int a, int b) {
  bool flick;
  int holder = a;
  int counter = 0;
  int countPri = 0;
  int spacer = 0;
  if (a > b) {
    return -1;
  }
  
  if(a * -1 == abs(a)) {
    a = 0;
  }

  if(a == 0) {
    holder = 3;
    countPri++;
  } else if(a == 2) {
    holder = 3;
    countPri++;
  } else if(a % 2 == 0) {
    holder++;
  }

  while(holder <= b) {
    if(std::to_string(holder).length() == 1) {
      spacer = 2;
    } else {
      spacer = 1;
    }
    for(int i = 1; i < 10; i++) {
      if(holder % i == 0) {
        counter++;
      }
      if(counter > spacer) {
        counter = 0;
        break;
      }
    }
    if(counter == spacer) {
      countPri++;
      counter = 0;
    }
    holder = holder + 2;
  }
  return countPri;
}

//task E

bool isTwinPrime(int n) {
  int bBound = n - 2;
  int uBound = n + 2;
  int counter1 = 0;
  int counter2 = 0;
  bool bBool, uBool;
  for(int i = 0; i < 10; i++) {
    if(bBound % i == 0) {
      counter1++;
    }
    if(counter1 > 1) {
      bBool = false;
      break;
    }
  }
  if(counter1 == 1) {
    bBool = true;
  }
  for(int i = 0; i < 10; i++) {
    if(uBound % i == 0) {
      counter2++;
    }
    if(counter2 > 1) {
      uBool = false;
      break;
    }
  }
  if(counter2 == 1) {
    uBool = true;
  }
  return (uBool || bBool);
}

//task F

int nextTwinPrime(int n) {
  int nextTwPri = nextPrime(n);
  int uBound = nextTwPri + 2;
  int lBound = nextTwPri - 2;
  int spacer1 = 0;
  int spacer2 = 0;
  int counter1 = 0;
  int counter2 = 0;
  int cond1 = true;
  int cond2 = true;
  bool tof1;
  bool tof2;

  if(std::to_string(uBound).length() == 1) {
    spacer1 = 2;
  } else {
    spacer1 = 1;
  }
  if(std::to_string(lBound).length() == 1) {
    spacer2 = 2;
  } else {
    spacer2 = 1;
  }
  while(cond1) {
    for(int i = 0; i < 10; i++) {
      if(uBound % i == 0) {
        counter1++;
        }
      }
    for(int q = 0; q < 10; q++) {
      if(lBound % q == 0) {
        counter2++;
      }
    }
    if(counter1 > spacer1 && counter2 > spacer2) {
      counter1 = 0;
      counter2 = 0;
      nextTwPri = nextPrime(nextTwPri);
      std::cout << nextTwPri << "\n";
      uBound = nextTwPri + 2;
      lBound = nextTwPri - 2;
    } else {
      cond1 = false;
      return nextTwPri;
    }
  }
  return 0;
}

//task G

int largestTwinPrime(int a, int b) {
  int spacer = 0;
  int spacer1 = 0;
  int spacer2 = 0;
  int counter = 0;
  int counter1 = 0;
  int counter2 = 0;
  int uBound = 0;
  int lBound = 0;

  if( a > b) {
    return -1;
  }
  if( b < 0) {
    return -1;
  }
  if(b % 2 == 0) {
    b--;
  }

  while(a <= b) {
    if(std::to_string(b).length() == 1) {
      spacer = 2;
    } else {
      spacer = 1;
    }
    for(int i = 0; i < 10; i++) {
      if(b % i == 0) {
        counter++;
      }
    }
    if(counter > spacer) {
      b = b - 2;
      counter = 0;
    } else {
      uBound = b + 2;
      lBound = b - 2;
      if(std::to_string(uBound).length() == 1) {
        spacer1 = 2;
      } else {
        spacer1 = 1;
      }
      if(std::to_string(lBound).length() == 1) {
        spacer2 = 2;
      } else {
        spacer2 = 1;
      }
      for(int w = 0; w < 10; w++) {
        if(uBound % w == 0) {
          counter1++;
          }
        }
      for(int q = 0; q < 10; q++) {
        if(lBound % q == 0) {
          counter2++;
        }
      }
      if(counter1 > spacer1 && counter2 > spacer2) {
        counter1 = 0;
        counter2 = 0;
        b = b - 2;
      } else {
        return b;
      }
  }
}
return -1;
}
  
