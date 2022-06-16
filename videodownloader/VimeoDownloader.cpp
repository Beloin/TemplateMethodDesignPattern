//
// Created by beloin on 16/06/2022.
//

#include <iostream>
#include "VimeoDownloader.h"

void VimeoDownloader::doLoadVideo(std::string videoPath) {
    std::cout << "Loading Video From Vimeo: " << videoPath << std::endl;
    this->isPublic = true;
    this->views = 999L;
    this->resolutions = std::vector<std::string>();
    this->resolutions.emplace_back("1080x720");
    this->resolutions.emplace_back("720x480");
}

void VimeoDownloader::doCanDownloadVideo() {
    if (this->isPublic & (this->views > 1000)) return;
    throw std::runtime_error("Cannot download Video");
}

void VimeoDownloader::doDownloadVideo(std::string resolution, std::string output) {
    std::cout << "Downloading Video From Vimeo. Res: " << resolution << " -> " <<  output;
}

std::vector<std::string> VimeoDownloader::doGetVideoResolutions() {
    return this->resolutions;
}
