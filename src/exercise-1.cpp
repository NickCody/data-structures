#include "include/fmt/core.h"
#include "common/common-io.h"
#include <vector>
#include <stdlib.h>

// Exercise 1 - Find the mean, median, and mode for the set of numbers in the input file
//

using namespace fmt;
using namespace ds_common;

int calc_mean(vector<int>& data) {
  return data.size();
}

int calc_median(vector<int>& data) {
  return data.size();
}

int calc_mode(vector<int>& data) {
  return data.size();
}

int main(int argc, char** argv) {

  char* filename = argc > 1 ? argv[1] : nullptr;
  auto input = stdout_or_file(filename);

  string line;
  vector<int> data;
  while (std::getline(*input, line)) {
    data.push_back(atoi(line.c_str()));
  }

  print("size of vector={}\n", data.size());

  // TODO: Implement calc_* functions
  print("mean of vector={}\n", calc_mean(data));
  print("median of vector={}\n", calc_median(data));
  print("mode of vector={}\n", calc_mode(data));

  return 0;
}