#include <iostream>
#include <thread>
#include <vector>
#include <atomic>
#include <chrono>

using namespace std;

// Global flag to stop threads
atomic<bool> running(true);

// Worker function to max out one core
void burnCPU() {
    while (running.load()) {
        double x = 1.0;
        for (int i = 0; i < 1'000'000; ++i)
            x = x * x / (x + 1.0);
    }
}

int main() {
    cout << "Starting 30-second CPU stress test on "
         << thread::hardware_concurrency()
         << " threads...\n";

    // 1. Determine thread count and declare container
    int threadCount = thread::hardware_concurrency();
    vector<thread> threads;  

    // 2. Spawn workers
    for (int i = 0; i < threadCount; ++i)
        threads.emplace_back(burnCPU);

    // 3. Let them run
    this_thread::sleep_for(chrono::seconds(30));

    // 4. Signal stop and join
    running.store(false);
    for (auto &t : threads)
        t.join();

    cout << "Stress test completed.\n";
    return 0;
}