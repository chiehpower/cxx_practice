# Docker

```
docker run --gpus all -it --name=cxx nvcr.io/nvidia/tensorrt:20.09-py3 bash
```

# Dockerfile



# Compiler C++ with open cv
g++ read_image.cpp `pkg-config --cflags --libs opencv`