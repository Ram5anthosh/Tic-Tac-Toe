#include <iostream>

using std::cout;
using std::endl;

void draw(bool o[9], bool x[9]) {
  cout << "\033[2J\033[1;1H";

  for (int i = 0; i < 9; i++) {
    if (o[i] == 0 && x[i] == 0)
      cout << i + 1 << " ";
    if (o[i] == 1)
      cout << "O"
           << " ";
    if (x[i] == 1)
      cout << "X"
           << " ";

    if ((i + 1) % 3 == 0)
      cout << endl;
  }
}
