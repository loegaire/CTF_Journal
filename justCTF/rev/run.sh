if [ -z "$1" ]; then
  echo "Usage: ./run.sh flag"
  exit 1
fi
docker image inspect java_re > /dev/null 2>&1 || docker build -t java_re .
docker run --rm -e FLAG=$1 java_re