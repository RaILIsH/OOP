# Для запуска скрипта:
#   cmake -P animals.cmake

cmake_minimum_required(VERSION 3.10)

set(animals "cat;mouse;dog;elephant;tiger;lion;axolotl;hippo;squirrel;wolf;shark;whale;bee;sloth;sheep;giraffe;scorpion")
#1
foreach(animal IN LISTS animals)
    message(${animal})
endforeach()
#2
list(LENGTH animals LISTSIZE)
message(${LISTSIZE})
#3
foreach(animal IN LISTS animals)
    string(LENGTH ${animal} LENGTH1)
    if(LENGTH1 GREATER_EQUAL 4)
        message(${animal})
    endif()
endforeach()
#4
foreach(animal IN LISTS animals)
    string(FIND ${animal} "s" First)
    if(First EQUAL 0)
        message(${animal})
    endif()
endforeach()
#5
list(SORT animals)
foreach(animal IN LISTS animals)
    message(${animal})
endforeach()
#6
set(s "")
foreach(animal IN LISTS animals)
    string(APPEND s ${animal})
    string(APPEND s " ")
endforeach()
message(${s})
#7
file(WRITE data.txt "${animals}")
#8
file(MAKE_DIRECTORY animal_files)
foreach(animal IN LISTS animals)
    file(WRITE animal_files/${animal}.txt)
endforeach()
message("${animals}")