#!/bin/bash
clear

include_path_1="/opt/homebrew/Cellar/jsoncpp/1.9.5/include"
include_path="-I$include_path_1"

library_path_1="/opt/homebrew/Cellar/jsoncpp/1.9.5/lib"
library_path="-L$library_path_1"

using_library_names="-ljsoncpp"

if [ "$1" == "release" ]; then
  clang++ src/*.cc -Isrc/*.h $include_path $library_path $using_library_names -o bin/semake
elif [ "$1" == "debug" ]; then
  clang++ -g src/*.cc -Isrc/*.h -o bin/semake
else
	./bin/semake
fi
