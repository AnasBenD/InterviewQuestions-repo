#include <iostream>
#include <vector>
#include "oop.cpp"
#include "stlOne.cpp"
#include "stlTwo.cpp"
#include "unitTest.cpp"
using namespace std;

int main() {
    /** OOP
    solutionOne();
    solutionTwo();
    **/

    /** STL Handling_1
     * vectorHandling();
     * vectorHandlingTwo();
     */

    /** STL Handling_2
     * PrintSums(prepareSensorMap());
     *
     */

     /** SQRT UNIT TEST
    double result = 0;
    bool success = sqrt(20,result);
    cout << success << "\t" << result << endl;
      **/
    return 0;

}


/**
 * 5. Tooling Git Hinweis
 * needed steps
 * check which branch // git status
 * git switch branchName /// git checkout -b branchName
 * git add filesName
 * git commit -m "Commit Message"
 * git push
 * **/


/** Tooling Cmake Hinweis
*  ls : show files in folder
   cmake . : generate native build tool files specific to your compiler and platform
   ls :
   make : (makefile) : buildsystem - drives the compiler and other build tools to build your code
   ls
  ./my_project : run the executable
*/