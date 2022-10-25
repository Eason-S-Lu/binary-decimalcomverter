#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <locale>
#include <algorithm>
#include <stdexcept>
#include <chrono>
#include <thread>
using namespace std;
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
 
    // Initializing base value to 1, i.e 2^0
    int base = 1;
 
    int temp = num;
    while (temp) {
        int last_digit = temp % 10;
        temp = temp / 10;
 
        dec_value += last_digit * base;
 
        base = base * 2;
    }
 
    return dec_value;
}
    int main () {
        using namespace std::this_thread;
        using namespace std::chrono;
        int num;
        while (true){
        cout << "what is your binary number: ";
        int tf;
        cin >> num;
        string str = to_string(num);
        cout << "debug:str," << str << endl;
        cout << "debug:str.size,"<<str.size() <<endl;
         for(num=0;num<str.size();num++){
            if(str[num]!='1' && str[num]!='0'){
            tf=1;
            }
            else{
                tf=0;
                }
        }
        if (tf==0){
            break;
        }
        else{
            cout <<"Invalid imput please imput a valid binary number."<<endl;
        }
        }
        cout <<"Your number is : "<< binaryToDecimal(num) << endl;
        return 0;
    }
