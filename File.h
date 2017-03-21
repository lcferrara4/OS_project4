#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std; 

class File{

    public:
        File(string f){
            const char * ifs = f.c_str(); 
            ifstream infile(ifs); 
            string line; 
            while(getline(infile, line)){
                contents.push_back(line); 
            }
        }
        vector<string> get_content(void){
            return contents; 
        }
        void print_content(void){
            for(int i=0; i<contents.size(); i++){
                cout<<contents[i]<<" "; 
            }
            cout<<endl; 
        }

    private:  
        vector<string> contents; 

}; 

#endif

