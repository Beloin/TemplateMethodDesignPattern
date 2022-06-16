//
// Created by beloin on 16/06/2022.
//

#include <iostream>
#include "YouTubeDownloader.h"

void YouTubeDownloader::doLoadVideo(std::string videoPath) {
    std::cout << "Loading Video From Youtube: " << videoPath << std::endl;
    this->isPublic = true;
    this->hasDownloadAccess = true;
    this->resolutions = std::vector<std::string>();
    this->resolutions.emplace_back("1920x1080");
    this->resolutions.emplace_back("1080x720");
}

void YouTubeDownloader::doCanDownloadVideo() {
    if (this->isPublic & this->hasDownloadAccess) return;
    throw std::runtime_error("Cannot download Video");
}

void YouTubeDownloader::doDownloadVideo(std::string resolution, std::string output) {
    std::cout << "Downloading Video From Youtube. Res: " << resolution << " -> " <<  output;
}

std::vector<std::string> YouTubeDownloader::doGetVideoResolutions() {
    return this->resolutions;
}
