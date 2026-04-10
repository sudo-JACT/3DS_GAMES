export $(grep -v '^#' info.env | xargs)

docker run --rm -v "$(pwd)":/src -w /src devkitpro/devkitarm /bin/bash -c "make clean && make"

mv src.3dsx $GAME_NAME.3dsx
