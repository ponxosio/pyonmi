docker pull quay.io/pypa/manylinux1_x86_64
docker run --rm -v `pwd`/../:/io -e TWINE_USERNAME -e TWINE_PASSWORD quay.io/pypa/manylinux1_x86_64 /io/travis/build-wheels.sh
