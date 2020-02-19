# TCF v2 cpp implementation

Scrappy TCF v2 implementation in C++. 

# Local setup

Please follow JetBrains [instructions how to setup CLion with Docker](https://blog.jetbrains.com/clion/2018/09/initial-remote-dev-support-clion/)

## Run docker container

```bash
# Build locally docker image
docker build --tag clion/remote-cpp-env:0.5 .
# run docker
docker run --rm --cap-add sys_ptrace -p 127.0.0.1:2222:22 --name clion_remote_env -d clion/remote-cpp-env:0.5

#Confirm it is running successfully
docker ps | grep clion_remote_env
docker logs clion_remote_env
```

To clear any cached SSH keys:
```bash
ssh-keygen -f "/home/diogo/.ssh/known_hosts" -R "[localhost]:2222"
```

Test SSH into the running container:
```bash
ssh -o PreferredAuthentications=password -o PubkeyAuthentication=no -p 2222 cribs@localhost
# the password is: password
```

