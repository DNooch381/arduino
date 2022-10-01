export ROOTSYSA=/opt/root
export PATH=$ROOTSYS/bin:$PATH
export LD_LIBRARY_PATH=$ROOTSYS/lib:$LD_LIBRARY_PATH
export PATH=$PATH:/Users/home_dylanantonacci/.bin

export PS1='
%n %1~$ '

##--TERMINAL--##

alias refresh='source ~/.zshrc'

##--GENERAL--##

alias aliases='emacs ~/.zshrc'
alias em_init='emacs .emacs' #Open .emacs init file
alias emacs_app='$(/Applications/Emacs.app/Contents/MacOS/Emacs "$@")'

alias ll='ls -l'
alias em='emacs -nw' #-nw = 'new window', but isn't relevant in our case
alias cp='cp -i' #-i confirms file overwrite
alias mv='mv -i'
alias die='kill -9 %%' #kill = stop running, %% = most recent process, -9 = cannot block action
alias rt='root -b -l -q' #-b = batch mode (aka: no graphics), -l = don't show splash screen (aka: blue logo of Root), -q = quit when complete, whole command is then followed by the intended file name

##-- PYTHON --##
#alias py3='python3'

##--GIT/GITHUB--##

alias ga='git add'
alias gc='git commit -m'
alias gpush='git push'
alias gpull='git pull'

##--COMPILE & HEPDATA--##

alias pdf_compile='latexmk -pdf -quiet -f'
alias yaml_compile='/Users/home_dylanantonacci/yaml_create/yaml_data debug' #ex: compile_yaml filename.txt
alias yaml_check='python3 /Users/home_dylanantonacci/yaml_create/check.py' #ex: check_yaml filename.yaml
alias hep_prep='tar -cf' #uploadname.tar submission.yaml filename1.yaml filename2.yaml etc...
