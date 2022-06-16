//
// Created by beloin on 16/06/2022.
//

#include "VideoLoader.h"
#include "videodownloader/YouTubeDownloader.h"
#include "videodownloader/VimeoDownloader.h"
#include "videodownloader/TikTokDownloader.h"

VideoDownloader *VideoLoader::loadVideo(std::string videoPath) {
    VideoDownloader *loader;

    if (videoPath.rfind("youtube", 0) == 0){
        loader = new YouTubeDownloader();
    }
    else if (videoPath.rfind("vimeo", 0) == 0){
        loader = new VimeoDownloader();
    }
    else if (videoPath.rfind("tiktok", 0) == 0){
        loader = new TikTokDownloader();
    }

    if (loader != nullptr) {
        loader->loadVideo(videoPath);
    }

    return loader;
}
