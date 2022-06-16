//
// Created by beloin on 16/06/2022.
//


#include <string>
#include <iostream>
#include "VideoLoader.h"

int main () {
    std::string youtubeExample = "youtube.com/watch?v=123456";
    std::string tiktokExample = "tiktok.com/watch?v=123456";
    std::string vimeoExample = "vimeo.com/123456";

    std::cout << "Search your video. Examples:" << std::endl;
    std::cout << "YouTube: " << youtubeExample << std::endl;
    std::cout << "Vimeo: " << vimeoExample << std::endl;
    std::cout << "TikTok: " << tiktokExample << std::endl;

    std::string input;
    std::cout << "Write The Link: ";
    getline(std::cin, input);

    VideoDownloader * downloader = VideoLoader::loadVideo(input);

    auto res = downloader->getVideoResolutions();
    std::cout << "Resolutions: ";
    for (const auto& resolution : res) {
        std::cout << resolution << " ";
    }
    std::cout << std::endl;

    try {
        downloader->downloadVideo(res.at(0), "/Downloads/videos");
    } catch (std::runtime_error e) {
        std::cout << e.what();
    }

    return 0;
}