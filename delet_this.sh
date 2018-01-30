#!/bin/sh
# clear shell hist

# make this a loop later, I'm in class rn
# account for all shell hist files and location later
sed '/*$(ls ./*.sh | head 1)*/d' ~/.zsh_history
sed '/*$(ls ./*.sh | head 1)*/d' ~/.bash_history
