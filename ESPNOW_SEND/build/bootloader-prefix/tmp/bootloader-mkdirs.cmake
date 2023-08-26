# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "D:/Espressif/frameworks/frameworks/esp-idf-v4.4.2/components/bootloader/subproject"
  "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader"
  "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader-prefix"
  "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader-prefix/tmp"
  "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader-prefix/src/bootloader-stamp"
  "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader-prefix/src"
  "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "D:/Espressif/frameworks/frameworks/Z_mycode/ESPNOW_SEND/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
