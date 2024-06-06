#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
   // Deklarasi dua array 2 dimensi 3x3
   int array1[3][3] = {{9, 2, 5}, {4, 1, 6}, {7, 8, 3}};
   int array2[3][3] = {{6, 3, 2}, {8, 7, 5}, {9, 1, 4}};

   // Deklarasi array 1 dimensi untuk menampung elemen dari kedua array 2 dimensi
   int array1D[18];
   int index = 0;

   // Menyalin elemen dari array1 ke array1D
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         array1D[index] = array1[i][j];
         index++;
      }
   }

   // Menyalin elemen dari array2 ke array1D
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         array1D[index] = array2[i][j];
         index++;
      }
   }

   // Menyortir array 1 dimensi
   sort(array1D, array1D + 18);

   // Mencetak array 1 dimensi yang telah disortir
   cout << "Array 1 dimensi yang telah disortir: ";
   for (int i = 0; i < 18; i++)
   {
      cout << array1D[i] << " ";
   }
   cout << endl;

   return 0;
}
/*
START

DECLARE array1[3][3]
DECLARE array2[3][3]
DECLARE array1D[18]
DECLARE index AS INTEGER

   // Initialize arrays with given values
   SET array1 TO[[ 9, 2, 5 ], [ 4, 1, 6 ], [ 7, 8, 3 ]]
   SET array2 TO[[ 6, 3, 2 ], [ 8, 7, 5 ], [ 9, 1, 4 ]]

   // Initialize index to 0
   SET index TO 0

   // Pindahkan elemen dari array1 ke array1D
   FOR i FROM 0 TO 2
      FOR j FROM 0 TO 2
         SET array1D[index] <- array1[i][j]
         INCREMENT index
      END FOR
   END FOR

   // Pindahkan elemen dari array2 ke array1D
   FOR i FROM 0 TO 2
      FOR j FROM 0 TO 2
         SET array1D[index] <- array2[i][j]
         INCREMENT index
      END FOR
   END FOR

   // Sort array1D
   SORT array1D IN ASCENDING ORDER

   // Print sorted array1D
   PRINT "Array 1 dimensi yang telah disortir: "
   FOR i FROM 0 TO 17
      PRINT array1D[i] + " "
   END FOR

END
*/