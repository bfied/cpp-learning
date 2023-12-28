// Section 7
// Arrays

#include <iostream>

using namespace std;

int main() {
    
    char vowels[]  {'a' ,'e', 'i', 'o', 'u' };
    cout << "\nThe first vowel is: " << vowels[0] << endl;
    cout << "The last vowel is: " << vowels[4] << endl;
    
 //   cin >> vowels[5]; // out of bounds - don't do this!!
 //   cout << vowels;


    double hi_temps []  { 90.1, 89.8, 77.5, 81.6};
    int last_element = size(hi_temps)-1;
    cout << "\nThe first high temperature is: " << hi_temps[last_element] << endl;
    
    hi_temps[0] = 100.7;    // set the first element in hi_temps to 100.7
                                       // we'll talk about assignment statement in an upcoming section

    cout << "The first high temperature is now: " << hi_temps[0] << endl;    
  
    int test_scores [5] {};
  
    cout << "\nFirst score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
    
    // cout << "\nEnter 5 test scores: ";
    // cin >> test_scores[0];
    // cin >> test_scores[1];
    // cin >> test_scores[2];
    // cin >> test_scores[3];
    // cin >> test_scores[4];
    
    cout << "\nThe updated array is:" << endl;
    cout << "First score at index 0: " << test_scores[0] << endl;
    cout << "Second score at index 1: " << test_scores[1] << endl;
    cout << "Third score at index 2:  " << test_scores[2] << endl;
    cout << "Fourth score at index 3: " << test_scores[3] << endl;
    cout << "Fifth score at index 4: " << test_scores[4] << endl;
   

    cout << "\nNotice what the value of the array name is : " << test_scores << endl;
    cout <<"size of array: " << size(test_scores);
    cout << endl;


    // multi dimensional array initialization
    int reviewers {3};
    int movies {4};
    int movie_rating[reviewers][movies]{

        {0,5,2,4},
        {2,4,5,6},
        {1,4,5,1}
        };

    cout << "movie rating reviewer [2][1], should be 4:  " << movie_rating[2][1] << endl;


    return 0;
}

;