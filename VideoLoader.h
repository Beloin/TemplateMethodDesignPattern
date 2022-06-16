//
// Created by beloin on 16/06/2022.
//

#ifndef TEMPLATE_METHOD_VIDEOLOADER_H
#define TEMPLATE_METHOD_VIDEOLOADER_H


#include "videodownloader/VideoDownloader.h"

class VideoLoader {
public:
    static VideoDownloader *loadVideo(std::string videoPath);
};


#endif //TEMPLATE_METHOD_VIDEOLOADER_H
