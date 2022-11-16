use strict;
use warnings;
use File::Find;
use File::Spec;
use File::Basename;

my $total = 0;

find(\&process, "path here");

sub process {
    my $file = $_;
    my $path = $File::Find::name;
    my $dirname = dirname($path);
    my $basename = basename($path);
    if ($basename =~ /.ex$/) {
        open(my $fh, '<:encoding(UTF-8)', $path)
          or die "Could not open file '$path' $!";
        my @lines = <$fh>;
        $total += scalar @lines;
    }
}

print "Total lines: $total
";
