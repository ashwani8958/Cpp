//
//  main.cpp
//  12_LSB_Steganography_practice
//
//  Created by Ashwani on 07/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#include "File.hpp"
#include "TargetFile.hpp"

int main(int argc, const char * argv[])
{
    File *TFile = new TargetFile;
    TFile->setFileExtension("ABS");
    cout << TFile->getFileExtension() << endl;
    
//    string targetFileName;
//
//    cout << "Enter the file name: ";
//    cin >> targetFileName;
//
//    targetFile.storeFileName(targetFileName);
//    targetFile.findExtension(targetFile);
//    cout << targetFile.getFileExtension() << endl;
  
    return 0;
}
