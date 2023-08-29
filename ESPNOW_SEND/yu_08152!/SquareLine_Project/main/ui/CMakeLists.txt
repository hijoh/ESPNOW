SET(SOURCES components/ui_comp_panel2.c
    components/ui_comp.c
    screens/ui_Screen1.c
    ui.c
    components/ui_comp_hook.c
    ui_helpers.c
    images/ui_img_left1_png.c
    images/ui_img_left2_png.c
    images/ui_img_right2_png.c
    images/ui_img_yu_bg_01_png.c
    images/ui_img_yu_logo1_png.c
    images/ui_img_yu_logo2_png.c)

add_library(ui ${SOURCES})
