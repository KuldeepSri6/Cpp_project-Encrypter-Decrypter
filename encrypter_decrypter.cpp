#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void processfile(string inputfile,string outputfile, char key)
{
    ifstream infile(inputfile, ios::binary);
    ofstream outfile(outputfile, ios::binary);

    if (!infile )
    {
        cout<< "Error could not open input file!!"<< endl;
        return;
    }
    if (!outfile){
        cout<< "Error could not create output file!!"<<endl;
        return;
    }
    char ch;
    while(infile.get(ch)){
        ch = ch^key; // XOR operation for encryption/decryption
        outfile.put(ch);
    }

    infile.close();
    outfile.close();

    cout<<"operation completed successfully!!"<<endl;

    
    
}


int main(){
    int choice;
    string inputfile,outputfile;
    char key;
    do{
        cout<< "\n==========File Encrypter & Decrypter============\n";
        cout<< "1.  Encrypt File\n";
        cout<< "2.  Decrypt File\n";
        cout<< "3, Exit\n";
        cout<< "Enter your choice:";
        cin>> choice;
        switch(choice){
            case 1:
                cout << "Enter the name of the file you want to encrypt:\n";
                cin >> inputfile;
                cout<<"Enter the name of the output file:\n";
                cin>>outputfile;
                cout <<"Enter a single character key for encryption:\n";
                cin>>key;
                processfile(inputfile,outputfile,key);
                break;
            
            
            case 2:
                cout << "Enter the name of the file you want to decrypt:\n";
                cin >> inputfile;
                cout<<"Enter the name of the output file:\n";
                cin>>outputfile;
                cout<< "Enter the single charcater key for decryption:\n";
                cin>>key;
                processfile(inputfile,outputfile,key);

                break;
            case 3:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout<< "your choice is invalid , please try again\n";

        }
    }while(choice!=3);
    return 0;
}

