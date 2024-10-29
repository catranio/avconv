# avconv

[project-name]: catranio/avconv
[project-github-path]: https://github.com/[project-name]
[linux-workflow]: [project-github-path]/actions/workflows/linux.yml

[![linux]([project-github-path])]([linux-workflow]/badge.svg)&nbsp;

## Build

```console
$ git clone https://github.com/avconv.git
$ cd project && mkdir build && cd build
$ cmake .. && make -j 4
```

**Dependencies:** C++20 | CMake 3.25

## Platforms
* Linux
* MacOS (with gcc)

## Documentation
Documentation can be found in the [wiki]([project-github-path]/wiki) pages.

---
Authors: *Petr Iaskevich*, *Meterellema*\
Email: *iaskdeveloper@gmail.com*\
License: *MIT license*
