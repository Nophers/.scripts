use strict;
use warnings;
use File::Find;

sub delete_all_empty_files_on_the_computer {
    my $path = "/";
    find(sub { unlink if -f and -z }, $path);
}
delete_all_empty_files_on_the_computer();