//
//  File.hpp
//  12_LSB_Steganography_practice
//
//  Created by Ashwani on 06/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef File_hpp
#define File_hpp


#include <fstream>
#include <iostream>
#include <string>

#define BYTE 1
#define FIRSTSIXTEENBYTE 16
#define BMPHEADER 54


using namespace std;

class File
{
private:
    string fileName;
    string fileExtension;
    int hPixel;
    int vPixel;
    
public:
    //Getter
    string getFileExtension() const;
    
    //Setter
    void setFileExtension(const string &fileExtension);
    
    bool findExtension(File &objFile);
    void storeFileName(string filename);
    void readHeader(File &objFile);
    
};

#endif /* File_hpp */
