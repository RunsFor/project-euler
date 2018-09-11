# project-euler
Tasks from projecteuler.net website

## Disclaimer

All solutions are encrypted:

It was encrypted using openssl command. Here is an example for problem #11:

```
openssl aes-256-cbc -e -a -in problem-11.lua -out problem-11.lua.enc
```

To decrypt it you have to solve it first and then use the answer as a password:

```
openssl enc -aes-256-cbc -d -a -in problem-11.lua.enc
```

## Usage

### .c files

Compile and run:

```
cd 0001-problem && clang problem-1.c && ./a.out
```

### .lua files

Just run it as an executable:

```
0011-problem/problem-11.lua
```

#### Installing lua

Mac OS:

```
brew install lua
# or
brew install tarantool
```

## Important topics

### Problem 3

- [Prime factorization (MathWorld)](http://mathworld.wolfram.com/PrimeFactorization.html)
- [Prime factorization Algorithms (MathWorld)](http://mathworld.wolfram.com/PrimeFactorizationAlgorithms.html)
- [Integer Factorization Algorithms](http://connellybarnes.com/documents/factoring.pdf) - Connelly Barnes, Department of Physics, Oregon State University (December 7, 2004)

### Problem 5

Interesting [video](https://www.youtube.com/watch?v=2JM2oImb9Qg) from Numberphile on YouTube.