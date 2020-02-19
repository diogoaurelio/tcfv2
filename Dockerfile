FROM ubuntu:18.04

RUN apt-get update \
    && apt-get upgrade -y \
    && apt-get install -y --no-install-recommends \
    ssh \
    autoconf \
    automake \
    build-essential \
    ca-certificates \
    gcc \
    g++ \
    gdb \
    clang \
    cmake \
    rsync \
    tar \
    python \
    ccache \
    checkinstall \
    curl \
    fakeroot \
    git \
    libboost-dev \
    libboost-log-dev \
    libboost-program-options-dev \
    libboost-regex-dev \
    libboost-test-dev \
    libcurl4-openssl-dev \
    libgtest-dev \
    libicu-dev \
    libre2-dev \
    libssl-dev \
    libtool-bin \
    libyaml-cpp-dev \
    pkg-config \
    vim \
    libcrypto++-dev \
    libcrypto++-doc \
    libcrypto++-utils \
  && apt-get clean

RUN ( \
    echo 'LogLevel DEBUG2'; \
    echo 'PermitRootLogin yes'; \
    echo 'PasswordAuthentication yes'; \
    echo 'Subsystem sftp /usr/lib/openssh/sftp-server'; \
  ) > /etc/ssh/sshd_config_test_clion \
  && mkdir /run/sshd

RUN useradd -m cribs && yes password | passwd cribs

CMD ["/usr/sbin/sshd", "-D", "-e", "-f", "/etc/ssh/sshd_config_test_clion"]


