#include <iostream>
#include <string>
#include <cctype>  // for tolower()
using namespace std;

int main() {
    string userInput;

    cout << "ChatBot: Hello! I'm your friendly chatbot.\n";
    cout << "Type 'bye' to exit.\n\n";

    while (true) {
        cout << "You: ";
        getline(cin, userInput);

        // Convert input to lowercase (compatible version)
        for (int i = 0; i < userInput.length(); i++) {
            userInput[i] = tolower(userInput[i]);
        }

        if (userInput == "hi" || userInput == "hello") {
            cout << "ChatBot: Hello there! How can I help you?\n";
        } 
        else if (userInput == "how are you") {
            cout << "ChatBot: I'm just a bunch of code, but I'm doing great!\n";
        } 
        else if (userInput == "what is your name") {
            cout << "ChatBot: I'm ChatBot, your virtual assistant.\n";
        }
        else if (userInput == "yoo") {
            cout << "ChatBot: Wassup! :)\n";
        } 
        else if (userInput == "bye") {
            cout << "ChatBot: Goodbye! Have a great day!\n";
            break;
        } 
        else {
            cout << "ChatBot: I'm not sure I understand. Try asking something else.\n";
        }
    }

    return 0;
}
