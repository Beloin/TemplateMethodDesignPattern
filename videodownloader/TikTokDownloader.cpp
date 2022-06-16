//
// Created by beloin on 16/06/2022.
//

#include <iostream>
#include "TikTokDownloader.h"

void TikTokDownloader::doLoadVideo(std::string videoPath) {
    std::cout << "Loading Video From TikTok: " << videoPath << std::endl;
    this->resolutions = std::vector<std::string>();
    this->resolutions.emplace_back("1920x1080");
    this->resolutions.emplace_back("1080x720");
}

void TikTokDownloader::doCanDownloadVideo() {
    nullptr;
}

void TikTokDownloader::doDownloadVideo(std::string resolution, std::string output) {
    std::cout << "Downloading Video From TikTok. Res: " << resolution << " -> " <<  output;
}

std::vector<std::string> TikTokDownloader::doGetVideoResolutions() {
    return this->resolutions;
}
