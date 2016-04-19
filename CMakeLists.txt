#cmake_minimum_required(VERSION 2.8)
#MESSAGE(STATUS "./src: Going into utils folder")
#ADD_SUBDIRECTORY(utils)
#MESSAGE(STATUS "./src: utils folder processed")

#include_directories(${DIR}/headers)
#link_directories (${DIR}/src/utils)

#ADD_EXECUTABLE(erozja_dylatacja erozja_dylatacja.cpp)
#TARGET_LINK_LIBRARIES(sample libSample ${EXTERNAL_LIBS})
#INSTALL(TARGETS sample DESTINATION "./src")
#MESSAGE(STATUS "./src: exiting src folder")

include_directories(/opt/local/include)
link_directories (/opt/local/lib /usr/local/lib)

ADD_EXECUTABLE(erozja_dylatacja erozja_dylatacja.cpp)
TARGET_LINK_LIBRARIES(erozja_dylatacja
		opencv_core
		opencv_imgproc
		opencv_video
		opencv_shape
		opencv_stitching
		opencv_objdetect
		opencv_superres
		opencv_videostab
		opencv_highgui
		opencv_videoio
		opencv_imgcodecs
		opencv_photo
		opencv_ml
		opencv_flann
		${EXTERNAL_LIBS})

ADD_EXECUTABLE(greyscale greyscale.cpp)
TARGET_LINK_LIBRARIES(greyscale
		opencv_core
		opencv_imgproc
		opencv_video
		opencv_shape
		opencv_stitching
		opencv_objdetect
		opencv_superres
		opencv_videostab
		opencv_highgui
		opencv_videoio
		opencv_imgcodecs
		opencv_photo
		opencv_ml
		opencv_flann
		${EXTERNAL_LIBS})
