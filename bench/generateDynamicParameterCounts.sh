#!/bin/bash

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS="-d5"

printf "Benchmark"
for i in {0..32}
do
   printf ",$i"
done

printf "\n"

for dir in app/ kernel/ sequential/ test/; do

    cd "$dir"

    for BENCH in */; do
        cd "$BENCH"
        
        OUTPUT=$($COMMAND $OPTIONS *.c)
        RETURNVALUE=$(echo $?)
        if [ $RETURNVALUE -eq 0 ]; then
            printf "${dir%/}/${BENCH%/},${OUTPUT}\n"
        fi
        
        cd ..
    done
    
    cd ..
done
