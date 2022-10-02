#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "funcs.h"
#include "doctest.h"

// add your tests here
TEST_CASE("is divisible? \n") {
    CHECK(isDivisibleBy(35,17) == false);
    CHECK(isDivisibleBy(100,25) == true);
    CHECK(isDivisibleBy(0,10) == true);
    CHECK(isDivisibleBy(10,0) == false);
}

TEST_CASE("is prime \n") {
    CHECK(isPrime(3) == true);
    CHECK(isPrime(13) == true);
    CHECK(isPrime(11) == true);
    CHECK(isPrime(10) == false);
    CHECK(isPrime(-10) == false);
}

TEST_CASE("next prime \n") {
    CHECK(nextPrime(61) == 67);
    CHECK(nextPrime(17) == 19);
    CHECK(nextPrime(-20) == 2);
    CHECK(nextPrime(0) == 2);
    CHECK(nextPrime(12) == 13);
}

TEST_CASE("count prime in range \n") {
    CHECK(countPrimes(0,17) == 7);
    CHECK(countPrimes(2, 8) == 4);
    CHECK(countPrimes(-10, 10) == 4);
    CHECK(countPrimes(10, 3) == -1);
}
TEST_CASE("is twin prime \n") {
    CHECK(isTwinPrime(23) == false);
    CHECK(isTwinPrime(19) == true);
    CHECK(isTwinPrime(13) == true);
    CHECK(isTwinPrime(31) == true);
}

TEST_CASE("next twin prime") {
    CHECK(nextTwinPrime(13) == 17);
    CHECK(nextTwinPrime(19) == 29);
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(-20) == 3);
}

TEST_CASE("largest twin prime in range") {
    CHECK(largestTwinPrime(17,17) == 17);
    CHECK(largestTwinPrime(5, 18) == 17);
    CHECK(largestTwinPrime(1, 31) == 31);
    CHECK(largestTwinPrime(14, 16) == -1);
}