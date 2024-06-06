/*
PRE+POST
*/

#include <iostream>
using namespace std;

bool isIdentityMatrix(int matrix[][3], int size)
{
   // Mengecek setiap elemen dalam matriks
   for (int i = 0; i < size; i++)
   {
      for (int j = 0; j < size; j++)
      {
         // Elemen diagonal harus 1
         if (i == j && matrix[i][j] != 1)
         {
            return false;
         }
         // Elemen non-diagonal harus 0
         if (i != j && matrix[i][j] != 0)
         {
            return false;
         }
      }
   }
   return true;
}

int main()
{
   // Deklarasi matriks bujur sangkar 3x3
   int matrix[3][3] = {
       {1, 0, 0},
       {0, 1, 0},
       {0, 0, 1}};

   // Ukuran matriks
   int size = 3;

   // Memeriksa apakah matriks adalah matriks identitas
   if (isIdentityMatrix(matrix, size))
   {
      cout << "Matriks adalah matriks identitas." << endl;
   }
   else
   {
      cout << "Matriks bukan matriks identitas." << endl;
   }

   return 0;
}
