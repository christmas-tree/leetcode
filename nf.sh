
if [ $# != 1 ]
then
    echo "Wrong argument"
    exit
fi

cp template.cpp $1
code $1