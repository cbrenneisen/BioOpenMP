# BioOpenMP
Bioinformatics problems solved with parallel computing

## Project Setup

If not already installed: 
* Install Homebrew
* Install llvm and openmp

#### Specify user-defined setting CC
*Build Settings* -> *Add Build Setting* -> *Add User-Defined Setting* -> *Add CC setting with the value:* `/usr/local/opt/llvm/bin/clang`

#### Disable C/Objective-C
*Build Settings* -> *Enable Modules (C and Objective-C) select:* `NO`

#### Link precompiled OpenMP library
*Build Settings* -> *Library Search Paths* -> Add value `/usr/local/opt/llvm/lib`

// TODO: more steps
