#include "CellObject.h"

//Default constructor, initializes everything to 0
CellObject :: CellObject()
{
    row = 0;
    col = 0;
    knownValue = 0;
    possibleValues.assign(1,0);  //1 value = 0
    valueWasGiven = false;
}

//Constructor for unkown value, takes int row and int col
CellObject :: CellObject(int row, int col)
{
    this->row = 0;
    this->col = 0;
    knownValue = 0;
    possibleValues.assign(1,0);  //1 value = 0
    valueWasGiven = false;
}

//Constructor for known value, takes int row, int col, int value
CellObject :: CellObject(int row, int col, int value)
{
    this->row = row;
    this->col = col;
    knownValue = value;
    possibleValues.assign(1,value);  //1 value = 0
    valueWasGiven = true;
}


