file(GLOB_RECURSE SOURCES_C *.c components/*.c fonts/*.c screens/*.c  esp_now/*.c)
file(GLOB_RECURSE SOURCES_CPP *.cpp)


idf_component_register(
    SRCS ${SOURCES_C} ${SOURCES_CPP} 
    INCLUDE_DIRS "."  "components" "fonts"  "screens" "esp_now" "speech_rec")


target_compile_definitions(${COMPONENT_LIB} PUBLIC "-DLV_HOR_RES_MAX=320")
target_compile_definitions(${COMPONENT_LIB} PUBLIC "-DLV_VER_RES_MAX=240")
