


#include <vector>

class CellObject
{
public:
    CellObject();
    CellObject(int row, int col);
    CellObject(int row, int col, int value);

    ~CellObject(){};

    int row;
    int col;
    int knownValue;
    bool valueWasGiven;
    std::vector<int> possibleValues;
};
