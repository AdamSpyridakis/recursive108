#include <iostream>
#include <cmath>

int pascal(int row, int column);

int main () {
    std::cout << pascal(3, 2);
    return 0;
}

int pascal(int row, int column) {
    if(row == 0 || row == column){
        return pow(3, row);
    }
    else if(column == 0) {
        return pow(2, row);
    }
    else {
        return (2*pascal(row-1, column) + 3*pascal(row-1, column-1));
    }

}