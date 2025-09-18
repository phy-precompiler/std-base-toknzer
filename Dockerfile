# Use container to test on different python versions
ARG PY_VERSION="3.12"
FROM python:${PY_VERSION}

RUN set -eux \
    ; \
    mkdir -p /src; \
    mkdir -p /src/dist; \
	pip install --no-cache-dir uv pytest scikit-build-core \
    ; \
    rm -rf /root/.cache/pip/*

COPY . /src

WORKDIR /src
CMD [ "uv", "build" ]
