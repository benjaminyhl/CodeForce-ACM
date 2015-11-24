/* 
 * File:   main.cpp
 * Author: admin
 *
 * Created on November 23, 2015, 11:10 PM
 */

#include <iostream>
#include <string>
using namespace std;

string multiply(string, string);

string add(string, string);

int main(int argc, char** argv) {
    string num="1";
    while(!cin.fail()) {
        cin>>a>>b;
        if(!cin.fail()) {
            if(a==1) {
                
            }
        }
    }
    return 0;
}

string multiply(string n1, string n2) {
    if(n1.length() > n2.length()) 
        n1.swap(n2);
    string res = "0";
    for(int i=n1.length()-1; i>=0; --i) {
        string temp = n2;
        int currentDigit = n1[i]-'0';
        int carry = 0;

        for(int j=temp.length()-1; j>=0; --j) {
            temp[j] = ((temp[j]-'0') * currentDigit) + carry;

            if(temp[j] > 9) {
                carry = (temp[j]/10);
                temp[j] -= (carry*10);
            }
            else {
                    carry = 0;
            }
            temp[j] += '0'; // back to string mood
        }

        if(carry > 0) {
                temp.insert(0, 1, (carry+'0'));
        }
        temp.append((n1.length()-i-1), '0'); // as like mult by 10, 100, 1000, 10000 and so on

        res = add(res,temp);
    }

    while(res[0] == '0' && res.length()!=1) // erase leading zeros
            res.erase(0,1);
    return res;
}

string add(string number1, string number2) {
    string addi = (number1.length() > number2.length()) ?  number1 : number2;
	char carry = '0';
	int differenceInLength = abs( (int) (number1.size() - number2.size()) );

	if(number1.size() > number2.size())
		number2.insert(0, differenceInLength, '0'); // put zeros from left

	else// if(number1.size() < number2.size())
		number1.insert(0, differenceInLength, '0');

	for(int i=number1.size()-1; i>=0; --i)
	{
		addi[i] = ((carry-'0')+(number1[i]-'0')+(number2[i]-'0')) + '0';

		if(i != 0)
		{	
			if(addi[i] > '9')
			{
				addi[i] -= 10;
				carry = '1';
			}
			else
				carry = '0';
		}
	}
	if(addi[0] > '9')
	{
		addi[0]-= 10;
		addi.insert(0,1,'1');
	}
	return addi;
}