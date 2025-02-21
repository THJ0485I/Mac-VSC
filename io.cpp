#include <iostream>
using namespace std;

int main() {

    int coin = 10;
    string nickname = "milo";
    int a, b, c;

    cout << nickname << "Bananagus" << "joyboy" << endl;
    cout << "Trevan";

    return 0;
}

///////////////////////////////////////////////////////////////////////////////////////

// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
using namespace std;

int main() {
    // Write C++ code here
    string nickname;
    cout << "Enter your Nickname" << endl;
    cin >> nickname;
    cout<< "Hi "<< nickname << endl;
    
    //cin stops reading when it hits a whitespace character (space, tab)
    // use getline()
    
    cin.ignore();   // to clear input buffer, to ignore residual newline  character
    // ignore() is used when getline follows cin
    
    cout << "Enter a sentence (with spaces): " << endl;
    string sentence;
    getline(cin, sentence);
    cout << "The sentence reads: " << sentence << endl;
    

    return 0;
}
