#FROM gcc:11.2
FROM debian:latest

#ARG USERNAME=david
#ARG USER_UID=1000
#ARG USER_GID=$USER_UID
#ARG BASH_IT_VERSION=v2.1.4
#ARG GITSTATUS_VERSION=v2.1.4

RUN apt-get -y update && apt-get install -y
#installation composant c++ (gcc-10)
RUN apt-get install -y build-essential
#installation du debugger
RUN apt-get install -y gdb
# Installation Git
RUN apt-get install -y git
# Installation CMake
RUN apt-get install -y cmake
#
## Installation d'utilitaires
## RUN apt-get install -y jq xmlstarlet \
##  && apt-get clean all \
##  && rm -rf /var/cache/apt \
##  && wget -nv -O/usr/bin/mlr https://github.com/johnkerl/miller/releases/download/v5.10.2/mlr.linux.x86_64 \
##  && chmod +x /usr/bin/mlr
#
## Installation du prompt bash avec intégration git
#RUN mkdir -p ~/.bash_it \
# && git clone https://github.com/Bash-it/bash-it.git ~/.bash_it \
# && cd ~/.bash_it \
# && git checkout tags/$BASH_IT_VERSION \
# && ~/.bash_it/install.sh --silent \
# RUN mkdir -p ~/gitstatus \
# && echo 'source ~/gitstatus/gitstatus.prompt.sh' >> ~/.bashrc \
# && mkdir -p ~/.cache/gitstatus \
# && git clone https://github.com/romkatv/gitstatus.git ~/.cache/gitstatus
## && echo 'alias docker="sudo -E docker"' >> ~/.bashrc \
## && echo 'alias docker-compose="sudo -E docker-compose"' >> ~/.bashrc
#

#
## Create the user
#RUN groupadd --gid $USER_GID $USERNAME \
# && useradd --uid $USER_UID --gid $USER_GID -m $USERNAME \
# # Ajout du support sudo (pour pouvoir lancer "sudo docker" par exemple)
# && apt-get update -y \
# && apt-get install -y sudo \
# && apt-get clean all \
# && rm -rf /var/cache/apt \
# && echo $USERNAME ALL=\(root\) NOPASSWD:ALL > /etc/sudoers.d/$USERNAME \
# && chmod 0440 /etc/sudoers.d/$USERNAME
#
#
#USER $USERNAME
#
#WORKDIR /workspace

# [Optional] Uncomment this section to install additional packages.
# RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
#     && apt-get -y install --no-install-recommends <your-package-list-here>

