#include <iostream>
#include <cstring>

int main() {
    char selection;
    std::string msg;
    std::string emsg;
    std::string enckey ="/+=-;'<>[#QKAMZIWJSNXEUDHCBYRGFVTLPmzkaoqnxjsiwbchduevgfyrtpl@!$&";
    std::string dekey = "1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz,. ";
    std::string pass = "1234";

    std::cout << "Welcome to CypherRat" << std::endl;
    do {
        emsg.clear(); 
        msg.clear();   

        std::cout << "-------OPTIONS-------" << std::endl;
        std::cout << "E->Encrypt message" << std::endl;
        std::cout << "D->Decrypt message" << std::endl;
        std::cout << "Q-Quit program" << std::endl;
        std::cout << "Enter your selection: " << std::endl;
        std::cin >> selection;

        if (selection == 'e' || selection == 'E') {
            std::cout << "Enter message to encrypt (max 200 characters): " << std::endl;
            std::cin.ignore(); 
            std::getline(std::cin, msg);  

            for (int i = 0; i < msg.length(); ++i) {
                if (dekey.find(msg[i]) != std::string::npos) {
                    emsg += enckey[dekey.find(msg[i])];  
                } 
                else {
                    std::cout << msg[i] << " is not a valid character, the message should only contain alphanumerical characters, spaces and ?.,";
                    std::cout << std::endl;
                    emsg.clear(); 
                    break;
                }
            }
            if (emsg.empty())
                 std::cout<<"Error! Either there is no message or the message you entered is invalid"<<std::endl;
            else
                 std::cout << "Encrypted message is: " << emsg << std::endl;
        }
    

        else if (selection == 'd' || selection == 'D') {
            std::cout << "Enter message to decrypt (max 200 characters): " << std::endl;
            std::cin.ignore(); 
            std::getline(std::cin, msg);  

            for (int i = 0; i < msg.length(); ++i) {
                if (enckey.find(msg[i]) != std::string::npos) {
                    emsg += dekey[enckey.find(msg[i])];  
                } 
                else {
                    emsg.clear(); 
                    break;
                }
            }
            if (emsg.empty())
                 std::cout<<"Error! Either there is no message or the message you entered is invalid"<<std::endl;
            else
                 std::cout << "Decrypted message is: " << emsg << std::endl;
        }
    

        else{
            std::cout<<"Invalid option, please enter a valid option!"<<std::endl;
        }
    } while (selection != 'q' && selection != 'Q');

    return 0;
}
