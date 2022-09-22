/**
* @brief computes the square root of a real number
* @param value
* @param result of the computation (the root)
* @return true on success
*/
#include "cmath"

bool sqrt(double value, double& result){
    result = 0;
    if(value >= 0 ) {
        result = sqrt(value);
        return true;
    } else {
        return false;
    }
};
/*
TEST(sqrt){
    double value = 25;
    double referenceResult = 5;
    double caluclatedResult;
    double success = sqrt(value,caluclatedResult)

    // Google C++ Testing Framework
    EXPECT_EQ(referenceResult, caluclatedResult);
    EXPECT_TRUE(success);
}


TEST(sqrt){
        double value = -5;
        double referenceResult = 0;
        double caluclatedResult;
        double success = sqrt(value,caluclatedResult)

        EXPECT_EQ(referenceResult, caluclatedResult);
        EXPECT_FALSE(success);
}
*/


