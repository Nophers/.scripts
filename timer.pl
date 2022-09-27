use Time::HiRes qw(time);
use Time::HiRes qw(sleep);

while (1) {
    print localtime;
    sleep(1);
}