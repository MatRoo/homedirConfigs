set nocompatible               " be iMproved
 filetype off                   " required!
set number
 "
 filetype plugin indent on     " required!
 "
 " Brief help
 " :BundleList          - list configured bundles
 " :BundleInstall(!)    - install(update) bundles
 " :BundleSearch(!) foo - search(or refresh cache first) for foo
 " :BundleClean(!)      - confirm(or auto-approve) removal of unused bundles
 "
 " see :h vundle for more details or wiki for FAQ
 
 execute pathogen#infect()
 call pathogen#helptags() 
 syntax on
 filetype plugin indent on
