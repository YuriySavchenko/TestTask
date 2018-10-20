#include <iostream>
#include <vector>
#include <set>
#include <fstream>
#include <thread>
#include "headers/XMLParser.h"
#include "headers/XMLWriter.h"
#include "headers/Interval.h"

/* implementation of the algorithm Eratosfen sieve */

std::vector<int> eratosfen_sieve(int low, int high) {
    std::vector<int> result;                                // vector for saving result prime numbers
    std::vector<bool> prime (high+1, true);                 // vector for marking non-prime numbers

    // set first and second values in vector as false

    prime[0] = prime[1] = false;

    // mark non-prime numbers as false

    try {
        for (int i = 2; i <= high; ++i)
            if (prime[i])
                if (i * i <= high)
                    for (int j = i * i; j <= high; j += i)
                        prime[j] = false;
    }
    catch(std::exception &e) {
        std::cerr << "Exception catched: " << e.what() << std::endl;
    }

    // add all prime numbers from range to result vector

    try {
        for (int i=0; i <= high; i++)
            if (prime[i] && i >= low)
                result.push_back(i);
    }
    catch(std::exception &e) {
        std::cerr << "Exception catched: " << e.what() << std::endl;
    }

    return result;
}

/* function for running thread which will be calculating prime numbers */

void thread_prime(Interval intervals, std::vector<std::vector<int>> *vector) {
    vector->push_back(eratosfen_sieve(intervals.low, intervals.high));
}

/* function which allows looking for unique prime numbers */

std::vector<int> unique_prime_numbers(std::vector<std::vector<int>> prime) {
    std::vector<int> uniquePrime;
    std::set<int> setUnique;

    try {
        for (int i = 0; i < prime.size(); i++)
            for (int j = 0; j < prime[i].size(); j++)
                setUnique.insert(prime[i][j]);

        std::set<int>::iterator it;

        for (it = setUnique.begin(); it != setUnique.end(); it++)
            uniquePrime.push_back(*it);
    }
    catch (std::exception &e) {
        std::cerr << "Exception catched: " << e.what() << std::endl;
    }

    return uniquePrime;
}

int main() {
    XMLParser xml_r("../files/file.xml");

    std::vector<Interval> intervals;
    std::vector<std::thread> threads;
    std::vector<std::vector<int>> prime;

    xml_r.openFile();
    xml_r.readFile();
    xml_r.parseFile(intervals);
    xml_r.closeFile();

    std::vector<Interval>::iterator it;

    for (it=intervals.begin(); it < intervals.end(); it++) {
        threads.push_back(std::thread(thread_prime, (*it), &prime));
    }

    std::vector<std::thread>::iterator it_thr;

    for (it_thr=threads.begin(); it_thr < threads.end(); it_thr++)
        (*it_thr).join();

    std::vector<int> v = unique_prime_numbers(prime);

    XMLWriter xml_w("../files/prime.xml", v);
    xml_w.openFile();
    xml_w.writeFile();
    xml_w.closeFile();

    return 0;
}