//
//  TargetFile.cpp
//  12_LSB_Steganography_practice
//
//  Created by Ashwani on 07/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "TargetFile.hpp"

string TargetFile::getFileExtension()const
{
    return File::getFileExtension();
}

unsigned long TargetFile::getFileSize()const
{
    return File::getFileSize();
}

void TargetFile::setFileExtension(const string &fileExtension)
{
    File::setFileExtension(fileExtension);
}
void TargetFile::setFileSize(const unsigned long fileSize)
{
    File::setFileSize(fileSize);
}
