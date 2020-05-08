//
//  TargetFile.hpp
//  12_LSB_Steganography_practice
//
//  Created by Ashwani on 07/05/20.
//  Copyright © 2020 Ashwani. All rights reserved.
//

#ifndef TargetFile_hpp
#define TargetFile_hpp

#include "File.hpp"

class TargetFile : public File
{
    
public:
    
    TargetFile() = default;
    virtual string getFileExtension() const override;
    virtual unsigned long getFileSize() const override;
    
    //Setter
    virtual void setFileExtension(const string &fileExtension) override;
    virtual void setFileSize(const unsigned long fileSize) override;
    
//    virtual bool findExtension(File &objfile) override;
//    virtual void storeFileName(string Filename) override;
    
    ~TargetFile() = default;
};

#endif /* TargetFile_hpp */
