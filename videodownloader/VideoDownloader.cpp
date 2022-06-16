//
// Created by beloin on 16/06/2022.
//

#include "VideoDownloader.h"

void VideoDownloader::downloadVideo(std::string resolution, std::string output) {
    this->doCanDownloadVideo();
    this->doDownloadVideo(resolution, output);
}

std::vector<std::string> VideoDownloader::getVideoResolutions() {
    return this->doGetVideoResolutions();
}

void VideoDownloader::loadVideo(std::string videoPath) {
    this->doLoadVideo(videoPath);
}
