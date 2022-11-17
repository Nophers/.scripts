use DateTime;
for (my $i = 0; $i < 1e5; $i++) {
  $date = DateTime->now;
  print $date->dmy;
}
