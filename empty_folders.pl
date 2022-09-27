use strict;
use warnings;
use File::Find;

my $path = '/';
find( \&delete_empty_folders, $path);

sub delete_empty_folders {
    if (-d) {
        if (! -e "$_/*") {
            rmdir $_;
            print "Deleted: ", $_, "

";
        }
    }
}