build c module:

```shell
gcc -Wall -O3 -shared -fPIC $(python3-config --includes) \
    _tokenizemodule.c -o _tokenizemodule$(python3-config --extension-suffix)
```