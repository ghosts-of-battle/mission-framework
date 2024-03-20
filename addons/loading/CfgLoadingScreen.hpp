#define LOADING_SCREEN_CLASS(className,authorName) \
    class className { \
        author = QUOTE(authorName); \
        path = QPATHTOF(ui\##className##.paa); \
        class Noise { \
            text="\A3\Ui_f\data\GUI\Cfg\LoadingScreens\LoadingNoise_ca.paa"; \
        }; \
    }

class GVAR(CfgLoadingScreen) {
    class Backgrounds {
        LOADING_SCREEN_CLASS(269676636,Ghosts of Battle);
        LOADING_SCREEN_CLASS(269676677,Ghosts of Battle);
        LOADING_SCREEN_CLASS(271859839,Ghosts of Battle);
        LOADING_SCREEN_CLASS(285905473,Ghosts of Battle);
        LOADING_SCREEN_CLASS(296841733,Ghosts of Battle);
        LOADING_SCREEN_CLASS(297308106,Ghosts of Battle);
        LOADING_SCREEN_CLASS(298480575,Ghosts of Battle);
        LOADING_SCREEN_CLASS(361616315,Ghosts of Battle);
        LOADING_SCREEN_CLASS(287796119,Ghosts of Battle);
        LOADING_SCREEN_CLASS(288887578,Ghosts of Battle);
        LOADING_SCREEN_CLASS(319048089,Ghosts of Battle);
        LOADING_SCREEN_CLASS(maxresdefault,Ghosts of Battle);
        LOADING_SCREEN_CLASS(269677107,Ghosts of Battle);
        LOADING_SCREEN_CLASS(272813407,Ghosts of Battle);
        LOADING_SCREEN_CLASS(275306051,Ghosts of Battle);
        LOADING_SCREEN_CLASS(283924597,Ghosts of Battle);
        LOADING_SCREEN_CLASS(371890417,Ghosts of Battle);
        LOADING_SCREEN_CLASS(400370807,Ghosts of Battle);
        LOADING_SCREEN_CLASS(254754921,Ghosts of Battle);
        LOADING_SCREEN_CLASS(273347491,Ghosts of Battle);
        LOADING_SCREEN_CLASS(275458856,Ghosts of Battle);
        LOADING_SCREEN_CLASS(286142395,Ghosts of Battle);
        LOADING_SCREEN_CLASS(298331323,Ghosts of Battle);
        LOADING_SCREEN_CLASS(356376886,Ghosts of Battle);
        LOADING_SCREEN_CLASS(S291207115895,Ghosts of Battle);
    };
};
