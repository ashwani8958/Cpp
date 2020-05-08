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
    static constexpr const char *defName = "Unnamed";
    static constexpr const char *defExtension = "No Extension";
    static constexpr unsigned initialValue = 0;
    
protected:
    string fileName;
    string fileExtension;
    unsigned long fileSize;
    int hPixel;
    int vPixel;
public:

    File(string fileName = defName, string fileExtension = defExtension, int hPixel = initialValue, int vPixel = initialValue, unsigned long fileSize = initialValue);
    
    //Getter
    virtual string getFileExtension() const = 0;
    virtual unsigned long getFileSize() const = 0;
    
    //Setter
    virtual void setFileExtension(const string &fileExtension) = 0;
    virtual void setFileSize(const unsigned long fileSize) = 0;
    
    virtual void findFileSize(const string fileName) = 0;
    
//    virtual bool findExtension(File &objFile) = 0;
//    virtual void storeFileName(string filename) = 0;
//    virtual void readHeader(File &objFile) = 0;
    
    ~File() = default;
    
};

#endif /* File_hpp */
