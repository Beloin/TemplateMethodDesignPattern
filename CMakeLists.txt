cmake_minimum_required(VERSION 3.10)
project(template_method)

set(CMAKE_CXX_STANDARD 14)

add_executable(template_method
        main.cpp videodownloader/VideoDownloader.cpp videodownloader/VideoDownloader.h videodownloader/YouTubeDownloader.cpp videodownloader/YouTubeDownloader.h videodownloader/VimeoDownloader.cpp videodownloader/VimeoDownloader.h videodownloader/TikTokDownloader.cpp videodownloader/TikTokDownloader.h VideoLoader.cpp VideoLoader.h)
