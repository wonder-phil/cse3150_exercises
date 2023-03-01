#define EPSILON 0.00000001

#include <cmath>

using namespace std;


/**/
int compare(const double & a, const double & b) {
  double v = fabs(a - b);
  if (v < EPSILON) return 0;
  else if (a < b) return -1;
  else return 1;
}

int compare(const int & a, const int & b) {
  if (a == b) return 0;
  else if (a < b) return -1;
  else return 1;
}


int compare_ints(const int & a, const int & b) {
  if (a == b) return 0;
  else if (a < b) return -1;
  else return 1;

}
/**/
