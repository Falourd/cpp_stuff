#FROM gcc:11.2
FROM debian:latest

#ARG USERNAME=david
#ARG USER_UID=1000
#ARG USER_GID=$USER_UID

RUN apt-get -y update && apt-get -y upgrade && apt-get install -y \
#installation composant c++ (gcc-10)
    && apt-get install -y build-essential \
#installation du debugger
    && apt-get install -y gdb \
# Installation Git
    && apt-get install -y git \
# Installation CMake
    && apt-get install -y cmake \
# Installation rapidjson
    && apt-get install -y rapidjson-dev \
# Installation expat
    && apt-get install -y expat \
# Installation xsd
    && apt-get install -y xsdcxx \
## Installation du prompt bash avec intégration git
    && git clone https://github.com/Bash-it/bash-it.git ~/.bash_it \
    && ~/.bash_it/install.sh --silent
#
## Installation d'utilitaires
## RUN apt-get install -y jq xmlstarlet \
##  && apt-get clean all \
##  && rm -rf /var/cache/apt \
##  && wget -nv -O/usr/bin/mlr https://github.com/johnkerl/miller/releases/download/v5.10.2/mlr.linux.x86_64 \
##  && chmod +x /usr/bin/mlr
#
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

