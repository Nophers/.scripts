use File::Find;
sub get_data_from_user {
    my @lines;
    find sub {
        push @lines, $File::Find::name;
    }, '/';
    open my $fh, ">", "lol.txt" or die "Couldn't open lol.txt: $!";
    print $fh join "

", @lines;
}
get_data_from_user();