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

int getAverage(vector<int> givenVector){
    int sum = 0;

    for(int index = 0; index < givenVector.size(); index++){
        sum += givenVector[index];
    }

    return sum / givenVector.size();
}

int main(){

    vector<int> Vector = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "Summation of vector = " << getSum(Vector) << endl;
    cout << "Average of vector = " << getAverage(Vector) << endl;
    
    return 0;
}