use strict;
use warnings;
use File::Find;

my $path = $ENV{'PWD'};
my @files;
find(sub {push @files, $File::Find::name}, $path);
my %dirs;
foreach my $file (@files) {
    my @directories = split /\//, $file;
    foreach my $directory (@directories) {
        $dirs{$directory} = 1;
    }
}
my @directories = sort keys %dirs;
foreach my $directory (@directories) {
    print 
    "
    $directory
    ";
}