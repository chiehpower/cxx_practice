# Docker

```
docker run --gpus all -it --name=cxx nvcr.io/nvidia/tensorrt:20.09-py3 bash
```

# Dockerfile

```
docker build -t chiehpower/fundamental:cxx-opencv .
docker run --rm -it --name=cxx_test chiehpower/fundamental:cxx-opencv bash
```

# Compiler C++ with open cv
g++ read_image.cpp `pkg-config --cflags --libs opencv`