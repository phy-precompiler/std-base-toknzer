# Consistent Tokenizer Across Python Versions

This project is part of [`phy`](https://github.com/phy-precompiler).

## Overview

Python's built-in [`token`](https://docs.python.org/3/library/token.html) module assigns an **integer value** to each token type.  
However, these numeric values are **not guaranteed to be stable** across Python versions.  

For example, a token type like `AWAIT` or `TYPE_COMMENT` may have different integer IDs in Python 3.10 compared to Python 3.13.  
This may lead to necessary extra works about token codes alignment if your project relies on consistent numeric token codes across environments (e.g., for serialization, tooling, or cross-version analysis).

---

## What This Project Does

This repository extracts the **core logic of `tokenize`** from the upcoming **Python 3.14 source code** and provides a compatibility layer that works consistently on:

- Python **3.10**
- Python **3.11**
- Python **3.12**
- Python **3.13**
- Python **3.14 (future release)**

With this library, the **same token type always maps to the same integer value** no matter which Python version you are running.

---

## This library is helpeful, for

- Tools like linters, formatters, or static analyzers often depend on token IDs.  
- If these IDs change between Python versions, cross-version compatibility needs extra works.  
- By standardizing on the **3.14 token ID mapping**, this project ensures stability and reproducibility.

Think of it as a **"frozen" token ID specification**: even as Python evolves, your code will see a consistent view of the token stream.

---

## Features

- ✅ Extracted directly from CPython 3.14’s `tokenize` implementation.  
- ✅ Compatible with Python 3.10–3.14.  
- ✅ Guarantees **stable token type IDs** across versions.  
- ✅ Drop-in replacement for projects that care about token stability.  

---

## Installation

```bash
pip install phy-std-base-toknzer
```


## Development

This library use [`scikit-build-core`](https://github.com/scikit-build/scikit-build-core), `cmake` is needed for building the wheel.

```bash
pip install .
```
