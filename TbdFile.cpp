//
//  File.cpp
//  12_LSB_Steganography_practice
//
//  Created by Ashwani on 06/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "File.hpp"

string File::getFileExtension()const
{
    return this->fileExtension;
}

void File::setFileExtension(const string &fileExtension)
{
    this->fileExtension = fileExtension;
}

//void File::storeFileName(string fileName)
//{
//    this->fileName = fileName;
//}
//
//bool File::findExtension(File &objFile)
//{
//    char *buffer = new char[BYTE];
//    //char extension[FIRSTSIXTEENBYTE] = {};
//    unsigned findExtension = FIRSTSIXTEENBYTE;
//    ifstream targetFile(objFile.fileName, ifstream::binary);
//    if(!targetFile)
//    {
//        cout << "File " << objFile.fileName << " does not exist." << endl;
//        return false;
//    }
//
//    while(targetFile.read(buffer, BYTE) && findExtension)
//    {
//        if(*buffer == 'B')
//            setFileExtension(".bmp");
//        else if(*buffer == 'G')
//            setFileExtension(".gif");
//        else if(*buffer == 'J')
//            setFileExtension(".jpg");
//        else if(*buffer == 'P')
//        {
//            setFileExtension(".png");
//            break;
//        }
//        findExtension--;
//    }
//
//    return true;
//
//}
