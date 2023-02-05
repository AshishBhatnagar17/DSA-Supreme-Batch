#include<iostream>
using namespace std;

int main() {

  int n;
  cin>>n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i ; j++) {
      printf("  ");
    }
    for (int j = i; j < i; j++) {
      printf("%d ", i);
    }
    int ele = 2 * (n - i );
    for (int j = 1; j <= i ; j++) {
      printf("%d ", ele--);
    }
    printf("\n");
  }
  return 0;
}