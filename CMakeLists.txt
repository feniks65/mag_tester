
include_directories(/opt/local/include)
link_directories (/opt/local/lib /usr/local/lib)

ADD_EXECUTABLE(tester AlgHistogram.cpp EnergyMap.cpp HoughTransform.cpp Tester.cpp main.cpp)
TARGET_LINK_LIBRARIES(tester
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
