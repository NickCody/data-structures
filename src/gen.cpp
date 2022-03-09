#include "include/fmt/core.h"
#include <iostream>
#include <stdlib.h>
#include <chrono>

using namespace fmt;
using namespace std;
using namespace std::chrono;

int main(int argc, char** argv) {
  srand(time(NULL));

  size_t count = 10;
  if (argc > 1)
    count = atoi(argv[1]);

  auto start = high_resolution_clock::now();

  for (size_t i = 0; i < count; i++) {
    print("{}\n", rand() % count);
  }
  auto finish = high_resolution_clock::now();
  auto time_in_nanoseconds = duration_cast<nanoseconds>(finish - start).count();
  print(stderr, "time in nanoseconds={}\n", time_in_nanoseconds);
}