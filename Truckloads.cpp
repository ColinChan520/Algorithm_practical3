#include "Truckloads.h"

using namespace std;

int Truckloads:: numTrucks(int numCrates, int loadSize) {
  if (numCrates <= loadSize) {
    return 1;
  }

  else {
    if (numCrates % 2 == 0) {
      return numTrucks(numCrates / 2, loadSize) +
             numTrucks(numCrates / 2, loadSize);
    } else {
      return numTrucks(numCrates / 2 + 1, loadSize) +
             numTrucks(numCrates / 2, loadSize);
    }
  }
}
