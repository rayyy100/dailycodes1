#include<iostream>
#include<string>
using namespace std;
int main() {
    //set up variables----------------------------------------------------
    string message;
    char coded[100];
    char decoded[100];
    int key;

    //get user inputs----------------------------------------------------
    cout << "shift how many times" << endl;
    cin >> key;

    cout << "what would you want your message to be" << endl;
    cin >> message;
//FOUR LINES REMOVED

    cout << endl << endl;

    //for each slot in the message array, add the key and store it in the corresponding slot in the coded array
    for (int i = 0; i < message.size(); i++) {
      coded[i]= message[i] + key;
     
    }

    //print out the coded array
    cout << "encoded message:" << endl;
    for (int i = 0; i < message.size(); i++) {
        cout <<coded[i] ;
    }


    cout << endl << endl;

    //decode by subtracting the key from each slot in the coded array and storing it into the corresponding slot in the decoded array
    cout << "decoded message:" << endl;
    //THREE LINES REMOVED
    for (int i = 0; i < message.size(); i++) {
        decoded[i] = coded[i] - key;
        cout << decoded[i];
    }

        //print out the decoded array
    //THREE LINES REMOVED

    cout << endl << endl;
}
