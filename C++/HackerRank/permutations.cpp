#include <iostream>

void swap(char& a, char& b){
    char temp = a;
    a = b;
    b = temp;
}
void permute(char a[], int i, int n)
{
   int j;
   if (i == n)
     std::cout << a << std::endl;
   else
   {
       for (j = i; j <= n; j++)
       {
          swap(a[i], a[j]);          
          permute(a, i+1, n);
          swap(a[i], a[j]);
       }
       
   }
} 

int main()
{
   char a[] = "12345";
   permute(a, 0, 5);
   getchar();
   return 0;
}