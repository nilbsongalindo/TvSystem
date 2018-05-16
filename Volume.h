#ifndef Volume_h
#define Volume_h
#include <string>
#include <vlc/vlc.h> 


class Volume {
protected:
    int volume;
public:
    void setVolume(int);
    int getVolume(libvlc_media_player_t * );
    void AumentarVolume(libvlc_media_player_t *);
    void BaixarVolume(libvlc_media_player_t *);
    Volume(int);
};

#endif