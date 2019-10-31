# DAY_06

#42-moulinette-auto-test
```
➜  42-moulinette-auto-test git:(master) ✗ ./run.sh vogsphere@vgs.42.us.org:intra/2019/activities/piscine_c_day_06/kdereshe 06
Git url arg: vogsphere@vgs.42.us.org:intra/2019/activities/piscine_c_day_06/kdereshe
Day arg: 06
<---->
Start git clone
Cloning into 'day06'...
vogsphere: (INFO) Transaction ID : eba5de47-cb31-482c-9ff3-4a616e7fc207
vogsphere: (INFO) Please mention this ID in any ticket you create concerning this transaction
vogsphere: (INFO) This transaction has been started at 2019-10-30 19:21:11, server time.
vogsphere: (INFO) Rights will be determined using this time, so do NOT cut the connection.
vogsphere: (INFO) It appears you are kdereshe. If that's not true, check your Kerberos tickets (klist)
vogsphere: (INFO) You have read and write rights on this repository
remote: Counting objects: 32, done.
remote: Total 32 (delta 0), reused 0 (delta 0)
Receiving objects: 100% (32/32), 15.02 KiB | 1.37 MiB/s, done.
Done git clone
<---->
Start spawn.pl

preparing ex01/ft_print_program_name
check.pl at work/ex01/check.pl

preparing ex02/ft_print_params
check.pl at work/ex02/check.pl

preparing ex03/ft_rev_params
check.pl at work/ex03/check.pl

preparing ex04/ft_sort_params
check.pl at work/ex04/check.pl
End spawn.pl
<---->
Start build.sh
building work/ex01/ft_print_program_name
building work/ex02/ft_print_params
building work/ex03/ft_rev_params
building work/ex04/ft_sort_params
End build.sh
<---->
Start verify.sh
Norme: ./work/ex01/ft_print_program_name.c
Norme: ./work/ex03/ft_rev_params.c
Norme: ./work/ex02/ft_print_params.c
Norme: ./work/ex04/ft_sort_params.c
End verify.sh
<---->
Start check_all.sh
work/ex01/check.pl good!
work/ex02/check.pl good!
work/ex03/check.pl good!
work/ex04/check.pl good!
End check_all.sh
<---->
Start rm -rf day06
Done rm -rf day06
<---->
Start rm -rf work
Done rm -rf work
<---->
Start rm -rf tools
Done rm -rf tools
➜  42-moulinette-auto-test git:(master) ✗
```
