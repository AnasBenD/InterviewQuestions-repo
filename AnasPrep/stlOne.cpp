using namespace std;
#include <algorithm>
void vectorHandling(){

    std::vector<int> values{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<int> notDividableByThree{};

    for (int currentValue: values) {
        if(currentValue % 3 != 0){
            notDividableByThree.push_back(currentValue);
            cout << currentValue;
        }

    }
    values = notDividableByThree;
}


bool isDividableByThree (int k){
    return (k % 3 == 0);
}
void vectorHandlingTwo(){

    std::vector<int> values{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    values.erase(
            std::remove_if(
                    values.begin(),
                    values.end(),
                    isDividableByThree),
            values.end());

    for (int currentValue: values) {
        cout << currentValue;
    }
}


