
#include <iostream>
#include <queue>
#include <valarray>
#include <vector>

std::vector<int> memo;

bool isPrime(int a) {

    // int should be >= 1000, should not
    if (a <= 1) {
        return false;
    }
    // Check memoization for previous calculation
    for (int num : memo) {
        if (num == a) return true;
    }

    int aSqrt {static_cast<int>(std::sqrt(a))};

    for (int i {2}; i <= aSqrt; i++) {
        if (a % i == 0) return false;
    }

    memo.push_back(a);
    return true;
}

std::vector<int> allPrimes(int start, int end) {
    std::vector<int> primes {};
    for (int i {start}; i <= end; i++) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }

    return primes;
}

std::queue<int> bfs(int start, int end, std::vector<int> primes) {
    std::queue<int> q {};

    return q;
}

int primepath() {
    int numOfCases {};
    std::cin >> numOfCases;
    //std::cin.ignore;
    std::cin >> std::ws;

    int start {};
    int end {};
    while (std::cin >> start >> end) {

        std::vector<int> primes {allPrimes(start, end)};
        std::queue<int> path {bfs(start, end, primes)};
        int price {0};

        std::cout << price << std::endl;
    }
}
