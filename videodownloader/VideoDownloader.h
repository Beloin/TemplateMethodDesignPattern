//
// Created by beloin on 16/06/2022.
//

#ifndef TEMPLATE_METHOD_VIDEODOWNLOADER_H
#define TEMPLATE_METHOD_VIDEODOWNLOADER_H

#include <vector>
#include "string"

class VideoDownloader {
public:
    void loadVideo(std::string videoPath);
    void downloadVideo(std::string resolution, std::string output);
    std::vector<std::string> getVideoResolutions();
protected:
    virtual void doLoadVideo(std::string videoPath) = 0;
    virtual void doCanDownloadVideo() = 0;
    virtual void doDownloadVideo(std::string resolution, std::string output) = 0;
    virtual std::vector<std::string> doGetVideoResolutions() = 0;
};


#endif //TEMPLATE_METHOD_VIDEODOWNLOADER_H
