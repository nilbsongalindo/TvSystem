#include "Volume.h"

using namespace std;

void Volume::setVolume(int volume){
    this->volume = volume;
}

int Volume::getVolume(libvlc_media_player_t * mediaPlay){
    return libvlc_audio_get_volume(mediaPlay);
}

void Volume::AumentarVolume(libvlc_media_player_t * mediaPlay){
    libvlc_audio_set_volume(mediaPlay, volume += 5);
}

void Volume::BaixarVolume(libvlc_media_player_t * mediaPlay){
    libvlc_audio_set_volume(mediaPlay, volume -= 5);
}

Volume::Volume(int num){
	setVolume(num);
}