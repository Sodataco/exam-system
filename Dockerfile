FROM ubuntu:latest

# 使用阿里云的镜像源
RUN sed -i 's/archive.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list && \
    sed -i 's/security.ubuntu.com/mirrors.aliyun.com/g' /etc/apt/sources.list

# 设置非交互模式
ENV DEBIAN_FRONTEND=noninteractive

# 更新包列表并安装必要的工具和Qt开发环境
RUN apt-get update && \
    apt-get install -y build-essential gdb cmake qtbase5-dev qt5-qmake qtbase5-dev-tools libqt5xmlpatterns5-dev && \
    rm -rf /var/lib/apt/lists/*

RUN git clone https://github.com/dbzhang800/QtXlsxWriter

RUN cd QtXlsxWriter && qmake && make && make install
    
# 设置工作目录
WORKDIR /app

# 复制项目文件到容器中
COPY . /app

# 创建构建目录并生成Makefile
RUN mkdir build && cd build && qmake ..

# 编译项目
RUN make -C build

# 设置容器启动时的默认命令
CMD ["sh", "-c", "echo 'Container started successfully'"]

