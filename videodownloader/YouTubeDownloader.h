//
// Created by beloin on 16/06/2022.
//

#ifndef TEMPLATE_METHOD_YOUTUBEDOWNLOADER_H
#define TEMPLATE_METHOD_YOUTUBEDOWNLOADER_H


#include "VideoDownloader.h"

class YouTubeDownloader: public VideoDownloader {
private:
    bool isPublic;
    bool hasDownloadAccess;
    std::vector<std::string> resolutions;

protected:
    void doLoadVideo(std::string videoPath) override;
    void doCanDownloadVideo() override;
    void doDownloadVideo(std::string resolution, std::string output) override;
    std::vector<std::string> doGetVideoResolutions() override;
};


#endif //TEMPLATE_METHOD_YOUTUBEDOWNLOADER_H
