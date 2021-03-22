#include <iostream>
#include <string>

using namespace std;

bool palindrome(string name){
    bool r= false;
    int l = name.length() - 1;
    for (int n = 0,m=l; n < l/2;n++,m--){
        if(toupper(name.at(n)) == toupper(name.at(m))){
            r = true;
            continue;
        }
        else{
            r = false;
            break;
        }
    }
	return r;
}

int main()
{
    cout<<palindrome("1881");
    cout<<palindrome("Dad");
    cout<<palindrome("Step on no pets");
    cout<<palindrome("madaM");

    return 0;
}