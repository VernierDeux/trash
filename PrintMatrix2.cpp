#include <cstdlib>
#include <iostream>

using namespace std;

void print_matrix_2_2(const int m[2][2]) {
  cout << m[0][0] << "\t" << m[0][1] << endl;
  cout << m[1][0] << "\t" << m[1][1] << endl;
}

int main (void)
{
  int a[2][2] = {{2, 3}, {4, 5}};
  int b[2][2] = {{6, 7}, {8, 9}};
  int c[2][2] = {{0, 0}, {0, 0}};

  cout << "a:" << endl;
  print_matrix_2_2(a);
  cout << "b:" << endl;
  print_matrix_2_2(b);
  //linha
  for (int i = 0; i < 2; i++) {
    //coluna
    for (int j = 0; j < 2; j++) {
      //socorro meu deus do céu
      for (int k = 0; k < 2; k++) {
        c[i][j] += a[i][k] * b[k][j];
      }
    }
  }

  cout << "c:" << endl;
  print_matrix_2_2(c);

	return EXIT_SUCCESS;
}