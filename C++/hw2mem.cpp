#include <iostream>
using namespace std;
int main() {
  struct foo_t {
    int x[100];
    int var1;
    int y[10];
    } foo;
  int var2;
  long i;
  int *p, *q;
  short int *s;
  long int *l;
  struct foo_t bar[50];

  for (i=0; i<100; i++) foo.x[i]=300+i;
  for (i=0; i<10; i++)  foo.y[i]=800+i;
  foo.var1 = 440;

//   cout << sizeof(*s) << "\n";
//   cout << sizeof(*p) << "\n";
//   cout << sizeof(*l) << "\n";

//   cout << sizeof(s) << "\n"; //MOD 
//   cout << sizeof(p) << "\n";//MOD 
//   cout << sizeof(l) << "\n";//MOD pointer are stored in 64 bits

q = (int *) &foo;    cout << q << " value of foo: " << *q << "\n";
p=&(foo.x[5]) ; cout << p << "\n";
// p=&(foo.x[0]);       cout << p << " value of foo.x[0]: " << *p << "\n";
// p=&(foo.x[99]);      cout << p << " value of foo.x[99]: " << *p << "\n";
// cout << &foo.var1 << " value of foo.var1: " << foo.var1 << "\n";
// p=&(foo.y[0]);       cout << p << " value of foo.y[0]: " << *p << "\n";
// p=&(foo.y[9]);      cout << p << "\n";
// cout << &var2 << "value of var2: " << var2 << "\n" ;
// cout << &i << " value of i:" << i << "\n";
// cout << &s << "\n";
// cout << &l << "\n";
// cout << &bar[0] << " value of bar: " << "\n";
// POINT 1
  q = (int *) &var2;   cout << q << "\n";
  q = p+16;            cout << *q << "\n";
  i = ((long) *p) + 16;
  q = (int *) &i;       cout << *q << "\n";
  s = (short *) &i;     cout << *s << "\n";
  l = (long *) &i;      cout << *l << "\n";
  q = p+95;            cout << *q << "\n";  
  i = ((long) *p) + 17;
  q = (int *) &i;       cout << *q << "\n\n" ;  // EXPLAIN
  q = p  + 101;     cout << *q << "\n";
  q = (int *) (((long) *p) + 101);  cout << *q << "\n";
  p = (int *) bar;  cout<< &p << "\n" ;
  *(p + 8) = 947; cout << bar[8].var1 << "\n";
}