# Template Method

# Runtime

Write your link to download.

ATTENTION: Vimeo cannot download to show real life problems.

## Video Downloader

[Generic]VideoDownloader:
 - getVideoResolutions();
 - downloadVideo(resolution, output);
 - doDownloadVideo(resolution, output);
 - doGetVideoResolutions();


VideoLoader:
 - loadVideo(path): YoutubeVideo, VimeoVideo...

---

YoutubeDownloader:  
private:
 - isPublic
 - hasDownloadAccess
 - resolutions;

Rules:
Can only downnload if is public and downloadAccesss == True

---
VimeoDownloader:  
private:
 - isPublic
 - resolutions
 - views

Rules:
Can only download if Views >= 1000 and is public 

---

TikTokDownloader:  
private:
 - resolutions

Rules:
Can download Any video

