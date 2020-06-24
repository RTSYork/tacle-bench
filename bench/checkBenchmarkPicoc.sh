#!/bin/bash

let STACKSIZE="4*1024*1024"
export STACKSIZE

COMMAND=~/picoc/cmake-build-debug/picoc
OPTIONS=""

PASS=0
FAIL=0
TOTAL=0

for dir in app/ kernel/ sequential/ test/; do

    cd "$dir"

    for BENCH in */; do
        cd "$BENCH"
        
        printf "Checking ${dir}${BENCH} ... "
        $COMMAND $OPTIONS *.c &>/dev/null
        RETURNVALUE=$(echo $?)
        if [ $RETURNVALUE -eq 0 ]; then
            printf "passed\n"
            ((PASS++))
        else
            printf "failed ($RETURNVALUE)\n"
            ((FAIL++))
            # exit
        fi
        ((TOTAL++))
        
        cd ..
    done

    printf "\n"
    
    cd ..
done

echo "PASS: $PASS/$TOTAL"
echo "FAIL: $FAIL/$TOTAL"
