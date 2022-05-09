
#include <iostream>
#include <boost/asio.hpp>

#include "openhd-profile.hpp"
#include "openhd-platform.hpp"

#include "OHDVideo.h"

int main(int argc, char *argv[]) {
    const auto profile=profile_from_manifest();
    const auto platform=platform_from_manifest();

    if(profile.is_air){
        OHDVideo ohdVideo(profile.is_air,profile.unit_id,platform.platform_type);
    }
    std::cerr<<"OHDVideo started\n";

    while (true){
        std::this_thread::sleep_for(std::chrono::seconds(1));
        std::cout<<"XVideo\n";
    }

    std::cerr << "OHDVideo stopped\n";

    return 0;
}
