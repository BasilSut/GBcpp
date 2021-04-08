cmake_minimum_required(VERSION 3.5)

project(Black_Jack LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Black_Jack
    main.cpp
    card.cpp            card.h
    hand.cpp            hand.h
    genericplayer.cpp   genericplayer.h
    player.cpp          player.h
    house.cpp           house.h
    deck.cpp            deck.h
    game.cpp            game.h)
