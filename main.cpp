#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <locale>
#include <algorithm>
#include <stdexcept>
#include <chrono>
#include <thread>
#include <sstream>
using namespace std;
int binaryToDecimal(int n)
{
    int num = n;
    int dec_value = 0;
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
void decToBinary(int n)
{
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binaryNum[j];
}
    int main () {
        using namespace std::this_thread;
        using namespace std::chrono;
        while(true){
        cout <<"Do you want to convert from binary to decimal or decimal to binary?"<<endl<<"Please type 1 for binary to decimal,"<<endl<<"Please type 2 for decimal to binary,"<<endl<<"Please imput:";
        int decbin;
        cin >> decbin;
        if (decbin == 1){
        int num;
        int num1;
        while (true){
        cout << "what is your binary number: ";
        int tf;
        cin >> num;
        num1=num;
        string str = to_string(num1);
        cout << "debug:str," << str << endl;
        cout << "debug:str.size,"<<str.size() <<endl;
        cout << "debug:num1,"<< num1 << endl;
         for(num1=0;num1<str.size();num1++){
            if(str[num1]!='1' && str[num1]!='0'){
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
        cout <<"Your program returned with exit code of 0"<<endl<<"Please press run to run the program again.";
        break;
        }
        else if (decbin==2){
        cout << "Please input your decimal number:";
        int n;
        cin >> n;
        cout <<"Your result is :";
        decToBinary(n);
        cout << endl <<"Your program returned with exit code of 0"<<endl<<"Please press run to run the program again.";
        break;
        }
        else{
            cout<<endl<< "Invalid selection."<<endl;
        }
        }
        return 0;
    }
