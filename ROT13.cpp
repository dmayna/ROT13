// ROT13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class ROT13
{
public:
	string encrypt(string message) {
		string encrypted_message;
		for (size_t i = 0; i < message.size(); ++i) {
			if (isalpha(message[i])) {
				if ((tolower(message[i]) - 'a') < 14)
					encrypted_message.append(1, message[i] + 13);
				else
					encrypted_message.append(1, message[i] - 13);
			}
			else {
				encrypted_message.append(1, message[i]);
			}
		}
		return encrypted_message;
	}

	string decrypt(string message) {
		string encrypted_message;
		for (size_t i = 0; i < message.size(); ++i) {
			if (isalpha(message[i])) {
				if ((tolower(message[i]) - 'a') < 14)
					encrypted_message.append(1, message[i] + 13);
				else
					encrypted_message.append(1, message[i] - 13);
			}
			else {
				encrypted_message.append(1, message[i]);
			}
		}
		return encrypted_message;
	}
};


int main()
{
	ROT13 encryption;
	string message = "hello";
	cout << "Encrypt message > " << message << ": " << encryption.encrypt(message) << endl;
	cout << "Decrypted message: " << encryption.decrypt(encryption.encrypt(message)) << endl;
}