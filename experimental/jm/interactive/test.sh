#!/bin/bash

# przykladowe wywolanie
# ./testivm.local ~/dv/ipp/ipp-duze-sprawdzarka/src/out/generated_interactive/ ~/dv/ipp/IPP-jm419502 ~/dv/ipp/ipp-duze-sprawdzarka/src

if [[ $# != 3 ]]; then
  if [[ $# != 4 ]]; then
  echo "Sposób uzytkowania: $0 <ścieżka/do/folderu/z/testami> <ścieżka/do/fodleru/z/projektem> <ścieżka/do/fodleru/z/ivm>" >&2
  exit 1
  fi
fi

tests=$(realpath "$1")
project=$(realpath "$2")
gamma_executable="$project/debug/gamma"
ivm=$(realpath "$3")
threshold=1

if ! [[ -d "$tests" ]]; then
  echo "Podany folder z testami nie istnieje"
  exit 1
fi

if ! [[ -d "$project" ]]; then
  echo "Podany folder z projektem nie istnieje"
  exit 1
fi

if ! [[ -d "$ivm" ]]; then
  echo "Podany folder z part2_ivm i resztą automatyzacji nie istnieje"
  exit 1
fi

total=0
correct=0

function traverse_folder() {
  folder="$1"
  shopt -s nullglob
  for f in "$folder"/*.ivml; do
    randfloat=$(printf '0%s\n' "$(echo "scale=8; $RANDOM/32768" | bc )")
    if (( $(echo "$randfloat < $threshold" |bc -l) )); then
      run_test "$f"
    fi
  done

  shopt -s nullglob
  for d in "$folder"/*/; do
    echo "$d"
    traverse_folder "$(realpath "$d")"
  done
}

RED='\033[0;31m'
GREEN='\033[0;32m'
NOCOLOR='\033[0m'

function run_test() {
  input_file="$1"

  ((total++))
  echo -e "\e[1mTest $input_file \e[0m"

    cd "$ivm"
    ./run_interactive_test.sh "$gamma_executable" "$input_file"
    err=$?

    if [[ $err != 0 ]]; then
      echo -e "${RED}error${NOCOLOR}"
      exit 1
    else
      echo -e "${GREEN}ok${NOCOLOR}"
      ((correct++))
    fi
}

cd "$project"
mkdir -p debug
cd debug
cmake -D CMAKE_BUILD_TYPE="Debug" .. >/dev/null
make >/dev/null

temp_out=$(mktemp)
trap 'rm -f "$temp_out"' INT TERM HUP EXIT

traverse_folder "$tests"

echo -e "Poprawne \e[1m$correct\e[0m na \e[1m$total\e[0m testów"

if [[ $correct == "$total" ]]; then
  echo -e "\e[1;92mWszystko dobrze! \e[0m"
fi
