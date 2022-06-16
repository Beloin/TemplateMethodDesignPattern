//
// Created by beloin on 16/06/2022.
//

#ifndef TEMPLATE_METHOD_VIMEODOWNLOADER_H
#define TEMPLATE_METHOD_VIMEODOWNLOADER_H


#include "VideoDownloader.h"

class VimeoDownloader : public VideoDownloader {
private:
    std::vector<std::string> resolutions;
    bool isPublic;
    long views;

protected:
    void doLoadVideo(std::string videoPath) override;
    void doCanDownloadVideo() override;
    void doDownloadVideo(std::string resolution, std::string output) override;
    std::vector<std::string> doGetVideoResolutions() override;
};


#endif //TEMPLATE_METHOD_VIMEODOWNLOADER_H
