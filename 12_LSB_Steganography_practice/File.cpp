//
//  File.cpp
//  12_LSB_Steganography_practice
//
//  Created by Ashwani on 07/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "File.hpp"

File::File(string fileName, string fileExtension, int hPixel, int vPixel, unsigned long fileSize)
:fileName(fileName), fileExtension(fileExtension), hPixel(hPixel), vPixel(vPixel), fileSize(fileSize)
{
    
}

string File::getFileExtension()const
{
    return this->fileExtension;
}
unsigned long File::getFileSize() const
{
    return this->fileSize;
}

void File::setFileExtension(const string &fileExtension)
{
    this->fileExtension = fileExtension;
}
void File::setFileSize(const unsigned long fileSize)
{
    this->fileSize = fileSize;
}

void File::findFileSize(const string fileName)
{
    
}
