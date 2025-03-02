# Building a linux docker image for c++ dev

docker build -t linux-cpp-dev .
docker run -it --rm -v `pwd`:/work linux-cpp-dev  
