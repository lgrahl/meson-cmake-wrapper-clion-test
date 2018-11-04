# Project definition
project('cmake-wrapper-test', 'c',
    version: '0.4.2',
    default_options: ['c_std=c99'],
    meson_version: '>=0.46.0')

# Includes
include_dir = include_directories('include')

# Sources
subdir('src')

# Build library
rew = library('cmake-wrapper-test', sources,
    include_directories: include_dir,
    install: true,
    version: meson.project_version())
