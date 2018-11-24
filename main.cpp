#include "Domino.h"
#include <iostream>
#include <vector>

using namespace std;



int main()
{
    Domino domino;
    domino.getWholeDominoData();
    //Domino domino(i, j);   // declare the left dots and right dots

    //cout<< domino.toString(domino.getLeft(), domino.getRight())<<endl;


    //cout<<domino.toString()[0]; //their is a problem with the toString() function

    //cout<<" - "<<domino.toString()[1];

    //cout<<domino.getLeft()<<" - "<<domino.getRight();
    return 0;
}
