
#include "Utils.h"

bool checkSameBox(int row1, int col1, int row2, int col2)
{
    bool rowGood = false;
    bool colGood = false;
    int rowMod = row1 % 3;
    int colMod = col1 % 3;

    //Check if same box for row
    {
                if (rowMod == 1)
                    if (row2 >= row1 && row2 <= row1 + 2)
                        rowGood = true;
        else    if (rowMod == 2)
                    if (row2 >= row1 - 1 && row2 <= row1 + 1)
                        rowGood = true;
        else
                    if (row2 >= row1 - 2 && row2 <= row1)
                        rowGood = true;
    }

    //Check if same box for col
    {
                if (colMod == 1)
                    if (col2 >= col1 && col2 <= col1 + 2)
                        colGood = true;
        else    if (colMod == 2)
                    if (col2 >= col1 - 1 && col2 <= col1 + 1)
                        colGood = true;
        else
                    if (col2 >= col1 - 2 && col2 <= col1)
                        colGood = true;
    }

    return rowGood && colGood;
}
