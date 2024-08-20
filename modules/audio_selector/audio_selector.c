#include <stdio.h>
#include <stdlib.h>

/*VLC Core API Headers*/
#include <vlc_common.h>
#include <vlc_plugin.h>
#include <vlc_interface.h>

vlc_module_begin()
    set_shortname(N_("Audio Track Assigner"))
    set_description(N_("Allows the user to assign different audio tracks to different output devices."))
    set_capability("audio output", 0) //other potential options may be "audio filter" or "audio mixer" https://wiki.videolan.org/Documentation:VLC_Modules_Loading/#How
    set_callbacks(Open, Close)
    set_category(CAT_AUDIO)
vlc_module_end()