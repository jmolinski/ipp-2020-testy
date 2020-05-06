FROM registry.gitlab.com/pld-linux/pld

RUN poldek --shcmd="install gcc"
RUN poldek --shcmd="install make"
RUN poldek --shcmd="install cmake"
RUN poldek --shcmd="install valgrind"
RUN poldek --shcmd="install glibc-devel"
RUN poldek --shcmd="install diffutils"
RUN poldek --shcmd="install perl"

COPY gamma/ part2/gamma/
COPY entrypoint.sh part2/entrypoint.sh
COPY run_tests.sh part2/run_tests.sh
COPY tests part2/tests

ENTRYPOINT ["part2/entrypoint.sh"]

