#include <iostream>
#include <vector>

using namespace std;


int getSum(vector<int> givenVector){
    int sum = 0;

    for(int index = 0; index < givenVector.size(); index++){
        sum += givenVector[index];
    }

    return sum;
}

int getMin(vector<int> givenVector){
    int min = givenVector[0];

    for(int index = 0; index < givenVector.size(); index++){
        if(givenVector[index] < min){
            min = givenVector[index];
        }
    }

    return min;
}

int main(){

    vector<int> Vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Summation of vector = " << getSum(Vector) << endl;
    cout << "Minimum of vector = " << getMin(Vector) << endl;

    return 0;
}